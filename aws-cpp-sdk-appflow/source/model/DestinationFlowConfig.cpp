/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DestinationFlowConfig.h>
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

DestinationFlowConfig::DestinationFlowConfig() : 
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false),
    m_destinationConnectorPropertiesHasBeenSet(false)
{
}

DestinationFlowConfig::DestinationFlowConfig(JsonView jsonValue) : 
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorProfileNameHasBeenSet(false),
    m_destinationConnectorPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationFlowConfig& DestinationFlowConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("destinationConnectorProperties"))
  {
    m_destinationConnectorProperties = jsonValue.GetObject("destinationConnectorProperties");

    m_destinationConnectorPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationFlowConfig::Jsonize() const
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

  if(m_destinationConnectorPropertiesHasBeenSet)
  {
   payload.WithObject("destinationConnectorProperties", m_destinationConnectorProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
