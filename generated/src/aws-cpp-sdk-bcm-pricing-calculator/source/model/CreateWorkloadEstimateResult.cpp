/**
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

CreateWorkloadEstimateResult::CreateWorkloadEstimateResult() : 
    m_rateType(WorkloadEstimateRateType::NOT_SET),
    m_status(WorkloadEstimateStatus::NOT_SET),
    m_totalCost(0.0),
    m_costCurrency(CurrencyCode::NOT_SET)
{
}

CreateWorkloadEstimateResult::CreateWorkloadEstimateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateWorkloadEstimateResult()
{
  *this = result;
}

CreateWorkloadEstimateResult& CreateWorkloadEstimateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");

  }

  if(jsonValue.ValueExists("rateType"))
  {
    m_rateType = WorkloadEstimateRateTypeMapper::GetWorkloadEstimateRateTypeForName(jsonValue.GetString("rateType"));

  }

  if(jsonValue.ValueExists("rateTimestamp"))
  {
    m_rateTimestamp = jsonValue.GetDouble("rateTimestamp");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkloadEstimateStatusMapper::GetWorkloadEstimateStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("totalCost"))
  {
    m_totalCost = jsonValue.GetDouble("totalCost");

  }

  if(jsonValue.ValueExists("costCurrency"))
  {
    m_costCurrency = CurrencyCodeMapper::GetCurrencyCodeForName(jsonValue.GetString("costCurrency"));

  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
