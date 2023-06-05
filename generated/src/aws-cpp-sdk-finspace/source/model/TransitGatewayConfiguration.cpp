/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/TransitGatewayConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

TransitGatewayConfiguration::TransitGatewayConfiguration() : 
    m_transitGatewayIDHasBeenSet(false),
    m_routableCIDRSpaceHasBeenSet(false)
{
}

TransitGatewayConfiguration::TransitGatewayConfiguration(JsonView jsonValue) : 
    m_transitGatewayIDHasBeenSet(false),
    m_routableCIDRSpaceHasBeenSet(false)
{
  *this = jsonValue;
}

TransitGatewayConfiguration& TransitGatewayConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transitGatewayID"))
  {
    m_transitGatewayID = jsonValue.GetString("transitGatewayID");

    m_transitGatewayIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routableCIDRSpace"))
  {
    m_routableCIDRSpace = jsonValue.GetString("routableCIDRSpace");

    m_routableCIDRSpaceHasBeenSet = true;
  }

  return *this;
}

JsonValue TransitGatewayConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_transitGatewayIDHasBeenSet)
  {
   payload.WithString("transitGatewayID", m_transitGatewayID);

  }

  if(m_routableCIDRSpaceHasBeenSet)
  {
   payload.WithString("routableCIDRSpace", m_routableCIDRSpace);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
