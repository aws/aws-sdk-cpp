/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/UpdatePreferencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostOptimizationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdatePreferencesResult::UpdatePreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdatePreferencesResult& UpdatePreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("savingsEstimationMode"))
  {
    m_savingsEstimationMode = SavingsEstimationModeMapper::GetSavingsEstimationModeForName(jsonValue.GetString("savingsEstimationMode"));
    m_savingsEstimationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memberAccountDiscountVisibility"))
  {
    m_memberAccountDiscountVisibility = MemberAccountDiscountVisibilityMapper::GetMemberAccountDiscountVisibilityForName(jsonValue.GetString("memberAccountDiscountVisibility"));
    m_memberAccountDiscountVisibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("preferredCommitment"))
  {
    m_preferredCommitment = jsonValue.GetObject("preferredCommitment");
    m_preferredCommitmentHasBeenSet = true;
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
