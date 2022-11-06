/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetPullRequestApprovalStatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPullRequestApprovalStatesResult::GetPullRequestApprovalStatesResult()
{
}

GetPullRequestApprovalStatesResult::GetPullRequestApprovalStatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPullRequestApprovalStatesResult& GetPullRequestApprovalStatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("approvals"))
  {
    Aws::Utils::Array<JsonView> approvalsJsonList = jsonValue.GetArray("approvals");
    for(unsigned approvalsIndex = 0; approvalsIndex < approvalsJsonList.GetLength(); ++approvalsIndex)
    {
      m_approvals.push_back(approvalsJsonList[approvalsIndex].AsObject());
    }
  }



  return *this;
}
