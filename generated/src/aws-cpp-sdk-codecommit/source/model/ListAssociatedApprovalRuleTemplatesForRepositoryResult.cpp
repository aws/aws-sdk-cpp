/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ListAssociatedApprovalRuleTemplatesForRepositoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssociatedApprovalRuleTemplatesForRepositoryResult::ListAssociatedApprovalRuleTemplatesForRepositoryResult()
{
}

ListAssociatedApprovalRuleTemplatesForRepositoryResult::ListAssociatedApprovalRuleTemplatesForRepositoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssociatedApprovalRuleTemplatesForRepositoryResult& ListAssociatedApprovalRuleTemplatesForRepositoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("approvalRuleTemplateNames"))
  {
    Aws::Utils::Array<JsonView> approvalRuleTemplateNamesJsonList = jsonValue.GetArray("approvalRuleTemplateNames");
    for(unsigned approvalRuleTemplateNamesIndex = 0; approvalRuleTemplateNamesIndex < approvalRuleTemplateNamesJsonList.GetLength(); ++approvalRuleTemplateNamesIndex)
    {
      m_approvalRuleTemplateNames.push_back(approvalRuleTemplateNamesJsonList[approvalRuleTemplateNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
