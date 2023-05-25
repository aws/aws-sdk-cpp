/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/SourceFlowConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

SourceFlowConfig::SourceFlowConfig() : 
    m_connectorProfileNameHasBeenSet(false),
    m_connectorType(SourceConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_incrementalPullConfigHasBeenSet(false),
    m_sourceConnectorPropertiesHasBeenSet(false)
{
}

SourceFlowConfig::SourceFlowConfig(JsonView jsonValue) : 
    m_connectorProfileNameHasBeenSet(false),
    m_connectorType(SourceConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_incrementalPullConfigHasBeenSet(false),
    m_sourceConnectorPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

SourceFlowConfig& SourceFlowConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectorProfileName"))
  {
    m_connectorProfileName = jsonValue.GetString("ConnectorProfileName");

    m_connectorProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectorType"))
  {
    m_connectorType = SourceConnectorTypeMapper::GetSourceConnectorTypeForName(jsonValue.GetString("ConnectorType"));

    m_connectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncrementalPullConfig"))
  {
    m_incrementalPullConfig = jsonValue.GetObject("IncrementalPullConfig");

    m_incrementalPullConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceConnectorProperties"))
  {
    m_sourceConnectorProperties = jsonValue.GetObject("SourceConnectorProperties");

    m_sourceConnectorPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceFlowConfig::Jsonize() const
{
  JsonValue payload;

  if(m_connectorProfileNameHasBeenSet)
  {
   payload.WithString("ConnectorProfileName", m_connectorProfileName);

  }

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("ConnectorType", SourceConnectorTypeMapper::GetNameForSourceConnectorType(m_connectorType));
  }

  if(m_incrementalPullConfigHasBeenSet)
  {
   payload.WithObject("IncrementalPullConfig", m_incrementalPullConfig.Jsonize());

  }

  if(m_sourceConnectorPropertiesHasBeenSet)
  {
   payload.WithObject("SourceConnectorProperties", m_sourceConnectorProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
