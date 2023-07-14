/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails::AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails() : 
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_hostPort(0),
    m_hostPortHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails::AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails(JsonView jsonValue) : 
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_hostPort(0),
    m_hostPortHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerPort"))
  {
    m_containerPort = jsonValue.GetInteger("ContainerPort");

    m_containerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostPort"))
  {
    m_hostPort = jsonValue.GetInteger("HostPort");

    m_hostPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerPortHasBeenSet)
  {
   payload.WithInteger("ContainerPort", m_containerPort);

  }

  if(m_hostPortHasBeenSet)
  {
   payload.WithInteger("HostPort", m_hostPort);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
