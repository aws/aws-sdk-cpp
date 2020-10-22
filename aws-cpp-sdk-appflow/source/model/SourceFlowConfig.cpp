/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SourceFlowConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SourceFlowConfig::SourceFlowConfig() : 
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false),
    m_sourceConnectorPropertiesHasBeenSet(false),
    m_incrementalPullConfigHasBeenSet(false)
{
}

SourceFlowConfig::SourceFlowConfig(JsonView jsonValue) : 
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false),
    m_sourceConnectorPropertiesHasBeenSet(false),
    m_incrementalPullConfigHasBeenSet(false)
{
  *this = jsonValue;
}

SourceFlowConfig& SourceFlowConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectorType"))
  {
    m_connectorType = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("connectorType"));

    m_connectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorProfileName"))
  {
    m_connectorProfileName = jsonValue.GetString("connectorProfileName");

    m_connectorProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceConnectorProperties"))
  {
    m_sourceConnectorProperties = jsonValue.GetObject("sourceConnectorProperties");

    m_sourceConnectorPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("incrementalPullConfig"))
  {
    m_incrementalPullConfig = jsonValue.GetObject("incrementalPullConfig");

    m_incrementalPullConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceFlowConfig::Jsonize() const
{
  JsonValue payload;

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("connectorType", ConnectorTypeMapper::GetNameForConnectorType(m_connectorType));
  }

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("connectorProfileName", m_connectorProfileName);

  }

  if(m_sourceConnectorPropertiesHasBeenSet)
  {
   payload.WithObject("sourceConnectorProperties", m_sourceConnectorProperties.Jsonize());

  }

  if(m_incrementalPullConfigHasBeenSet)
  {
   payload.WithObject("incrementalPullConfig", m_incrementalPullConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
