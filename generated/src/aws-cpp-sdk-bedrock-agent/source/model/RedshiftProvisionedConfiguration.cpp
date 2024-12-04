/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftProvisionedConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

RedshiftProvisionedConfiguration::RedshiftProvisionedConfiguration() : 
    m_authConfigurationHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false)
{
}

RedshiftProvisionedConfiguration::RedshiftProvisionedConfiguration(JsonView jsonValue)
  : RedshiftProvisionedConfiguration()
{
  *this = jsonValue;
}

RedshiftProvisionedConfiguration& RedshiftProvisionedConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authConfiguration"))
  {
    m_authConfiguration = jsonValue.GetObject("authConfiguration");

    m_authConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterIdentifier"))
  {
    m_clusterIdentifier = jsonValue.GetString("clusterIdentifier");

    m_clusterIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftProvisionedConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authConfigurationHasBeenSet)
  {
   payload.WithObject("authConfiguration", m_authConfiguration.Jsonize());

  }

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("clusterIdentifier", m_clusterIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
