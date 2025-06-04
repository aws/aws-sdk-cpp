/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/BillingPeriod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

BillingPeriod::BillingPeriod(JsonView jsonValue)
{
  *this = jsonValue;
}

BillingPeriod& BillingPeriod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Month"))
  {
    m_month = jsonValue.GetInteger("Month");
    m_monthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Year"))
  {
    m_year = jsonValue.GetInteger("Year");
    m_yearHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingPeriod::Jsonize() const
{
  JsonValue payload;

  if(m_monthHasBeenSet)
  {
   payload.WithInteger("Month", m_month);

  }

  if(m_yearHasBeenSet)
  {
   payload.WithInteger("Year", m_year);

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
