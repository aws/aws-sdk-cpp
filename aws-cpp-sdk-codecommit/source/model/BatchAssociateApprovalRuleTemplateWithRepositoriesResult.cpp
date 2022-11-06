/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchAssociateApprovalRuleTemplateWithRepositoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchAssociateApprovalRuleTemplateWithRepositoriesResult::BatchAssociateApprovalRuleTemplateWithRepositoriesResult()
{
}

BatchAssociateApprovalRuleTemplateWithRepositoriesResult::BatchAssociateApprovalRuleTemplateWithRepositoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchAssociateApprovalRuleTemplateWithRepositoriesResult& BatchAssociateApprovalRuleTemplateWithRepositoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("associatedRepositoryNames"))
  {
    Aws::Utils::Array<JsonView> associatedRepositoryNamesJsonList = jsonValue.GetArray("associatedRepositoryNames");
    for(unsigned associatedRepositoryNamesIndex = 0; associatedRepositoryNamesIndex < associatedRepositoryNamesJsonList.GetLength(); ++associatedRepositoryNamesIndex)
    {
      m_associatedRepositoryNames.push_back(associatedRepositoryNamesJsonList[associatedRepositoryNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
