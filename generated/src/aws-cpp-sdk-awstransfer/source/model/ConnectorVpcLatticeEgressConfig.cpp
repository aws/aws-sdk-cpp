/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ConnectorVpcLatticeEgressConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ConnectorVpcLatticeEgressConfig::ConnectorVpcLatticeEgressConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectorVpcLatticeEgressConfig& ConnectorVpcLatticeEgressConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceConfigurationArn"))
  {
    m_resourceConfigurationArn = jsonValue.GetString("ResourceConfigurationArn");
    m_resourceConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PortNumber"))
  {
    m_portNumber = jsonValue.GetInteger("PortNumber");
    m_portNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorVpcLatticeEgressConfig::Jsonize() const
{
  JsonValue payload;

  if(m_resourceConfigurationArnHasBeenSet)
  {
   payload.WithString("ResourceConfigurationArn", m_resourceConfigurationArn);

  }

  if(m_portNumberHasBeenSet)
  {
   payload.WithInteger("PortNumber", m_portNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
