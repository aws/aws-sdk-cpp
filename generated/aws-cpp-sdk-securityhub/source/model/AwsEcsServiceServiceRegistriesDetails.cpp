/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceServiceRegistriesDetails.h>
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

AwsEcsServiceServiceRegistriesDetails::AwsEcsServiceServiceRegistriesDetails() : 
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_registryArnHasBeenSet(false)
{
}

AwsEcsServiceServiceRegistriesDetails::AwsEcsServiceServiceRegistriesDetails(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_registryArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceServiceRegistriesDetails& AwsEcsServiceServiceRegistriesDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerName"))
  {
    m_containerName = jsonValue.GetString("ContainerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerPort"))
  {
    m_containerPort = jsonValue.GetInteger("ContainerPort");

    m_containerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistryArn"))
  {
    m_registryArn = jsonValue.GetString("RegistryArn");

    m_registryArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceServiceRegistriesDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_containerPortHasBeenSet)
  {
   payload.WithInteger("ContainerPort", m_containerPort);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_registryArnHasBeenSet)
  {
   payload.WithString("RegistryArn", m_registryArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
