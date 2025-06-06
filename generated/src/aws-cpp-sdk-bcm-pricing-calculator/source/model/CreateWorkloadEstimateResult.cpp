﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/CreateWorkloadEstimateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateWorkloadEstimateResult::CreateWorkloadEstimateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateWorkloadEstimateResult& CreateWorkloadEstimateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateType"))
  {
    m_rateType = WorkloadEstimateRateTypeMapper::GetWorkloadEstimateRateTypeForName(jsonValue.GetString("rateType"));
    m_rateTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rateTimestamp"))
  {
    m_rateTimestamp = jsonValue.GetDouble("rateTimestamp");
    m_rateTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkloadEstimateStatusMapper::GetWorkloadEstimateStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalCost"))
  {
    m_totalCost = jsonValue.GetDouble("totalCost");
    m_totalCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("costCurrency"))
  {
    m_costCurrency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("costCurrency"));
    m_costCurrencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
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
