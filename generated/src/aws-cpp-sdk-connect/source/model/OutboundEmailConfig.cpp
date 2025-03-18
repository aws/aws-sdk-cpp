/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OutboundEmailConfig.h>
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

OutboundEmailConfig::OutboundEmailConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OutboundEmailConfig& OutboundEmailConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutboundEmailAddressId"))
  {
    m_outboundEmailAddressId = jsonValue.GetString("OutboundEmailAddressId");
    m_outboundEmailAddressIdHasBeenSet = true;
  }
  return *this;
}

JsonValue OutboundEmailConfig::Jsonize() const
{
  JsonValue payload;

  if(m_outboundEmailAddressIdHasBeenSet)
  {
   payload.WithString("OutboundEmailAddressId", m_outboundEmailAddressId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
