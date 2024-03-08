/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/GetPreferencesResult.h>
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

GetPreferencesResult::GetPreferencesResult() : 
    m_memberAccountDiscountVisibility(MemberAccountDiscountVisibility::NOT_SET),
    m_savingsEstimationMode(SavingsEstimationMode::NOT_SET)
{
}

GetPreferencesResult::GetPreferencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_memberAccountDiscountVisibility(MemberAccountDiscountVisibility::NOT_SET),
    m_savingsEstimationMode(SavingsEstimationMode::NOT_SET)
{
  *this = result;
}

GetPreferencesResult& GetPreferencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("memberAccountDiscountVisibility"))
  {
    m_memberAccountDiscountVisibility = MemberAccountDiscountVisibilityMapper::GetMemberAccountDiscountVisibilityForName(jsonValue.GetString("memberAccountDiscountVisibility"));

  }

  if(jsonValue.ValueExists("savingsEstimationMode"))
  {
    m_savingsEstimationMode = SavingsEstimationModeMapper::GetSavingsEstimationModeForName(jsonValue.GetString("savingsEstimationMode"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
