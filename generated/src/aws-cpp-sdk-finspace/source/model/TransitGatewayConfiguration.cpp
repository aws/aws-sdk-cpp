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
    m_routableCIDRSpaceHasBeenSet(false),
    m_attachmentNetworkAclConfigurationHasBeenSet(false)
{
}

TransitGatewayConfiguration::TransitGatewayConfiguration(JsonView jsonValue) : 
    m_transitGatewayIDHasBeenSet(false),
    m_routableCIDRSpaceHasBeenSet(false),
    m_attachmentNetworkAclConfigurationHasBeenSet(false)
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

  if(jsonValue.ValueExists("attachmentNetworkAclConfiguration"))
  {
    Aws::Utils::Array<JsonView> attachmentNetworkAclConfigurationJsonList = jsonValue.GetArray("attachmentNetworkAclConfiguration");
    for(unsigned attachmentNetworkAclConfigurationIndex = 0; attachmentNetworkAclConfigurationIndex < attachmentNetworkAclConfigurationJsonList.GetLength(); ++attachmentNetworkAclConfigurationIndex)
    {
      m_attachmentNetworkAclConfiguration.push_back(attachmentNetworkAclConfigurationJsonList[attachmentNetworkAclConfigurationIndex].AsObject());
    }
    m_attachmentNetworkAclConfigurationHasBeenSet = true;
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

  if(m_attachmentNetworkAclConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentNetworkAclConfigurationJsonList(m_attachmentNetworkAclConfiguration.size());
   for(unsigned attachmentNetworkAclConfigurationIndex = 0; attachmentNetworkAclConfigurationIndex < attachmentNetworkAclConfigurationJsonList.GetLength(); ++attachmentNetworkAclConfigurationIndex)
   {
     attachmentNetworkAclConfigurationJsonList[attachmentNetworkAclConfigurationIndex].AsObject(m_attachmentNetworkAclConfiguration[attachmentNetworkAclConfigurationIndex].Jsonize());
   }
   payload.WithArray("attachmentNetworkAclConfiguration", std::move(attachmentNetworkAclConfigurationJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
