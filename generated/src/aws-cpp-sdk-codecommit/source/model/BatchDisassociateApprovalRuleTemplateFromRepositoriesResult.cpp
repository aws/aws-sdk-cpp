/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchDisassociateApprovalRuleTemplateFromRepositoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDisassociateApprovalRuleTemplateFromRepositoriesResult::BatchDisassociateApprovalRuleTemplateFromRepositoriesResult()
{
}

BatchDisassociateApprovalRuleTemplateFromRepositoriesResult::BatchDisassociateApprovalRuleTemplateFromRepositoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDisassociateApprovalRuleTemplateFromRepositoriesResult& BatchDisassociateApprovalRuleTemplateFromRepositoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("disassociatedRepositoryNames"))
  {
    Aws::Utils::Array<JsonView> disassociatedRepositoryNamesJsonList = jsonValue.GetArray("disassociatedRepositoryNames");
    for(unsigned disassociatedRepositoryNamesIndex = 0; disassociatedRepositoryNamesIndex < disassociatedRepositoryNamesJsonList.GetLength(); ++disassociatedRepositoryNamesIndex)
    {
      m_disassociatedRepositoryNames.push_back(disassociatedRepositoryNamesJsonList[disassociatedRepositoryNamesIndex].AsString());
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
