/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingViewHealthStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Billing
{
namespace Model
{

BillingViewHealthStatus::BillingViewHealthStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

BillingViewHealthStatus& BillingViewHealthStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = BillingViewStatusMapper::GetBillingViewStatusForName(jsonValue.GetString("statusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReasons"))
  {
    Aws::Utils::Array<JsonView> statusReasonsJsonList = jsonValue.GetArray("statusReasons");
    for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
    {
      m_statusReasons.push_back(BillingViewStatusReasonMapper::GetBillingViewStatusReasonForName(statusReasonsJsonList[statusReasonsIndex].AsString()));
    }
    m_statusReasonsHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingViewHealthStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", BillingViewStatusMapper::GetNameForBillingViewStatus(m_statusCode));
  }

  if(m_statusReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statusReasonsJsonList(m_statusReasons.size());
   for(unsigned statusReasonsIndex = 0; statusReasonsIndex < statusReasonsJsonList.GetLength(); ++statusReasonsIndex)
   {
     statusReasonsJsonList[statusReasonsIndex].AsString(BillingViewStatusReasonMapper::GetNameForBillingViewStatusReason(m_statusReasons[statusReasonsIndex]));
   }
   payload.WithArray("statusReasons", std::move(statusReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Billing
} // namespace Aws
