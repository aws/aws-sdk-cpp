/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BillingModeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

BillingModeSummary::BillingModeSummary() : 
    m_billingMode(BillingMode::NOT_SET),
    m_billingModeHasBeenSet(false),
    m_lastUpdateToPayPerRequestDateTimeHasBeenSet(false)
{
}

BillingModeSummary::BillingModeSummary(JsonView jsonValue) : 
    m_billingMode(BillingMode::NOT_SET),
    m_billingModeHasBeenSet(false),
    m_lastUpdateToPayPerRequestDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

BillingModeSummary& BillingModeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BillingMode"))
  {
    m_billingMode = BillingModeMapper::GetBillingModeForName(jsonValue.GetString("BillingMode"));

    m_billingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateToPayPerRequestDateTime"))
  {
    m_lastUpdateToPayPerRequestDateTime = jsonValue.GetDouble("LastUpdateToPayPerRequestDateTime");

    m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue BillingModeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_billingModeHasBeenSet)
  {
   payload.WithString("BillingMode", BillingModeMapper::GetNameForBillingMode(m_billingMode));
  }

  if(m_lastUpdateToPayPerRequestDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateToPayPerRequestDateTime", m_lastUpdateToPayPerRequestDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
