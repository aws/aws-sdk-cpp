/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/EvaluatePullRequestApprovalRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EvaluatePullRequestApprovalRulesResult::EvaluatePullRequestApprovalRulesResult()
{
}

EvaluatePullRequestApprovalRulesResult::EvaluatePullRequestApprovalRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

EvaluatePullRequestApprovalRulesResult& EvaluatePullRequestApprovalRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evaluation"))
  {
    m_evaluation = jsonValue.GetObject("evaluation");

  }



  return *this;
}
