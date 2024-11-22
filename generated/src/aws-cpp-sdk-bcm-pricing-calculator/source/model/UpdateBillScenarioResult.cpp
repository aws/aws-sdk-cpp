/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/UpdateBillScenarioResult.h>
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

UpdateBillScenarioResult::UpdateBillScenarioResult() : 
    m_status(BillScenarioStatus::NOT_SET)
{
}

UpdateBillScenarioResult::UpdateBillScenarioResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateBillScenarioResult()
{
  *this = result;
}

UpdateBillScenarioResult& UpdateBillScenarioResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("billInterval"))
  {
    m_billInterval = jsonValue.GetObject("billInterval");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = BillScenarioStatusMapper::GetBillScenarioStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("expiresAt"))
  {
    m_expiresAt = jsonValue.GetDouble("expiresAt");

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
