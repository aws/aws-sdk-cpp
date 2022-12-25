/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ListRepositoriesForApprovalRuleTemplateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRepositoriesForApprovalRuleTemplateResult::ListRepositoriesForApprovalRuleTemplateResult()
{
}

ListRepositoriesForApprovalRuleTemplateResult::ListRepositoriesForApprovalRuleTemplateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRepositoriesForApprovalRuleTemplateResult& ListRepositoriesForApprovalRuleTemplateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("repositoryNames"))
  {
    Aws::Utils::Array<JsonView> repositoryNamesJsonList = jsonValue.GetArray("repositoryNames");
    for(unsigned repositoryNamesIndex = 0; repositoryNamesIndex < repositoryNamesJsonList.GetLength(); ++repositoryNamesIndex)
    {
      m_repositoryNames.push_back(repositoryNamesJsonList[repositoryNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
