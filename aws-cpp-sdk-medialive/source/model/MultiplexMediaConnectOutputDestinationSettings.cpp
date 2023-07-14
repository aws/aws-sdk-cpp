/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MultiplexMediaConnectOutputDestinationSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

MultiplexMediaConnectOutputDestinationSettings::MultiplexMediaConnectOutputDestinationSettings() : 
    m_entitlementArnHasBeenSet(false)
{
}

MultiplexMediaConnectOutputDestinationSettings::MultiplexMediaConnectOutputDestinationSettings(JsonView jsonValue) : 
    m_entitlementArnHasBeenSet(false)
{
  *this = jsonValue;
}

MultiplexMediaConnectOutputDestinationSettings& MultiplexMediaConnectOutputDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entitlementArn"))
  {
    m_entitlementArn = jsonValue.GetString("entitlementArn");

    m_entitlementArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiplexMediaConnectOutputDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_entitlementArnHasBeenSet)
  {
   payload.WithString("entitlementArn", m_entitlementArn);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
