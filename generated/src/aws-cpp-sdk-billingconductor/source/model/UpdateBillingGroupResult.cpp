/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateBillingGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateBillingGroupResult::UpdateBillingGroupResult() : 
    m_size(0),
    m_lastModifiedTime(0),
    m_status(BillingGroupStatus::NOT_SET)
{
}

UpdateBillingGroupResult::UpdateBillingGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_size(0),
    m_lastModifiedTime(0),
    m_status(BillingGroupStatus::NOT_SET)
{
  *this = result;
}

UpdateBillingGroupResult& UpdateBillingGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("PrimaryAccountId"))
  {
    m_primaryAccountId = jsonValue.GetString("PrimaryAccountId");

  }

  if(jsonValue.ValueExists("PricingPlanArn"))
  {
    m_pricingPlanArn = jsonValue.GetString("PricingPlanArn");

  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("LastModifiedTime");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = BillingGroupStatusMapper::GetBillingGroupStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

  }

  if(jsonValue.ValueExists("AccountGrouping"))
  {
    m_accountGrouping = jsonValue.GetObject("AccountGrouping");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
