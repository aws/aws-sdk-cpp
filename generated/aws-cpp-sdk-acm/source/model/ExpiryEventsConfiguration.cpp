/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ExpiryEventsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace Model
{

ExpiryEventsConfiguration::ExpiryEventsConfiguration() : 
    m_daysBeforeExpiry(0),
    m_daysBeforeExpiryHasBeenSet(false)
{
}

ExpiryEventsConfiguration::ExpiryEventsConfiguration(JsonView jsonValue) : 
    m_daysBeforeExpiry(0),
    m_daysBeforeExpiryHasBeenSet(false)
{
  *this = jsonValue;
}

ExpiryEventsConfiguration& ExpiryEventsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DaysBeforeExpiry"))
  {
    m_daysBeforeExpiry = jsonValue.GetInteger("DaysBeforeExpiry");

    m_daysBeforeExpiryHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpiryEventsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_daysBeforeExpiryHasBeenSet)
  {
   payload.WithInteger("DaysBeforeExpiry", m_daysBeforeExpiry);

  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
