/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactMetricValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ContactMetricValue::ContactMetricValue(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactMetricValue& ContactMetricValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Number"))
  {
    m_number = jsonValue.GetDouble("Number");
    m_numberHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactMetricValue::Jsonize() const
{
  JsonValue payload;

  if(m_numberHasBeenSet)
  {
   payload.WithDouble("Number", m_number);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
