﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdatePullRequestApprovalRuleContentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePullRequestApprovalRuleContentResult::UpdatePullRequestApprovalRuleContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePullRequestApprovalRuleContentResult& UpdatePullRequestApprovalRuleContentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("approvalRule"))
  {
    m_approvalRule = jsonValue.GetObject("approvalRule");
    m_approvalRuleHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
