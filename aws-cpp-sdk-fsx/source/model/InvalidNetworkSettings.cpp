/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/InvalidNetworkSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

InvalidNetworkSettings::InvalidNetworkSettings() : 
    m_messageHasBeenSet(false),
    m_invalidSubnetIdHasBeenSet(false),
    m_invalidSecurityGroupIdHasBeenSet(false),
    m_invalidRouteTableIdHasBeenSet(false)
{
}

InvalidNetworkSettings::InvalidNetworkSettings(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_invalidSubnetIdHasBeenSet(false),
    m_invalidSecurityGroupIdHasBeenSet(false),
    m_invalidRouteTableIdHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidNetworkSettings& InvalidNetworkSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidSubnetId"))
  {
    m_invalidSubnetId = jsonValue.GetString("InvalidSubnetId");

    m_invalidSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidSecurityGroupId"))
  {
    m_invalidSecurityGroupId = jsonValue.GetString("InvalidSecurityGroupId");

    m_invalidSecurityGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvalidRouteTableId"))
  {
    m_invalidRouteTableId = jsonValue.GetString("InvalidRouteTableId");

    m_invalidRouteTableIdHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidNetworkSettings::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_invalidSubnetIdHasBeenSet)
  {
   payload.WithString("InvalidSubnetId", m_invalidSubnetId);

  }

  if(m_invalidSecurityGroupIdHasBeenSet)
  {
   payload.WithString("InvalidSecurityGroupId", m_invalidSecurityGroupId);

  }

  if(m_invalidRouteTableIdHasBeenSet)
  {
   payload.WithString("InvalidRouteTableId", m_invalidRouteTableId);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
