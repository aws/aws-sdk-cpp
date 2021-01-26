/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorConfiguration.h>
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

ConnectorConfiguration::ConnectorConfiguration() : 
    m_canUseAsSource(false),
    m_canUseAsSourceHasBeenSet(false),
    m_canUseAsDestination(false),
    m_canUseAsDestinationHasBeenSet(false),
    m_supportedDestinationConnectorsHasBeenSet(false),
    m_supportedSchedulingFrequenciesHasBeenSet(false),
    m_isPrivateLinkEnabled(false),
    m_isPrivateLinkEnabledHasBeenSet(false),
    m_isPrivateLinkEndpointUrlRequired(false),
    m_isPrivateLinkEndpointUrlRequiredHasBeenSet(false),
    m_supportedTriggerTypesHasBeenSet(false),
    m_connectorMetadataHasBeenSet(false)
{
}

ConnectorConfiguration::ConnectorConfiguration(JsonView jsonValue) : 
    m_canUseAsSource(false),
    m_canUseAsSourceHasBeenSet(false),
    m_canUseAsDestination(false),
    m_canUseAsDestinationHasBeenSet(false),
    m_supportedDestinationConnectorsHasBeenSet(false),
    m_supportedSchedulingFrequenciesHasBeenSet(false),
    m_isPrivateLinkEnabled(false),
    m_isPrivateLinkEnabledHasBeenSet(false),
    m_isPrivateLinkEndpointUrlRequired(false),
    m_isPrivateLinkEndpointUrlRequiredHasBeenSet(false),
    m_supportedTriggerTypesHasBeenSet(false),
    m_connectorMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorConfiguration& ConnectorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("canUseAsSource"))
  {
    m_canUseAsSource = jsonValue.GetBool("canUseAsSource");

    m_canUseAsSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canUseAsDestination"))
  {
    m_canUseAsDestination = jsonValue.GetBool("canUseAsDestination");

    m_canUseAsDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedDestinationConnectors"))
  {
    Array<JsonView> supportedDestinationConnectorsJsonList = jsonValue.GetArray("supportedDestinationConnectors");
    for(unsigned supportedDestinationConnectorsIndex = 0; supportedDestinationConnectorsIndex < supportedDestinationConnectorsJsonList.GetLength(); ++supportedDestinationConnectorsIndex)
    {
      m_supportedDestinationConnectors.push_back(ConnectorTypeMapper::GetConnectorTypeForName(supportedDestinationConnectorsJsonList[supportedDestinationConnectorsIndex].AsString()));
    }
    m_supportedDestinationConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedSchedulingFrequencies"))
  {
    Array<JsonView> supportedSchedulingFrequenciesJsonList = jsonValue.GetArray("supportedSchedulingFrequencies");
    for(unsigned supportedSchedulingFrequenciesIndex = 0; supportedSchedulingFrequenciesIndex < supportedSchedulingFrequenciesJsonList.GetLength(); ++supportedSchedulingFrequenciesIndex)
    {
      m_supportedSchedulingFrequencies.push_back(ScheduleFrequencyTypeMapper::GetScheduleFrequencyTypeForName(supportedSchedulingFrequenciesJsonList[supportedSchedulingFrequenciesIndex].AsString()));
    }
    m_supportedSchedulingFrequenciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPrivateLinkEnabled"))
  {
    m_isPrivateLinkEnabled = jsonValue.GetBool("isPrivateLinkEnabled");

    m_isPrivateLinkEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPrivateLinkEndpointUrlRequired"))
  {
    m_isPrivateLinkEndpointUrlRequired = jsonValue.GetBool("isPrivateLinkEndpointUrlRequired");

    m_isPrivateLinkEndpointUrlRequiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedTriggerTypes"))
  {
    Array<JsonView> supportedTriggerTypesJsonList = jsonValue.GetArray("supportedTriggerTypes");
    for(unsigned supportedTriggerTypesIndex = 0; supportedTriggerTypesIndex < supportedTriggerTypesJsonList.GetLength(); ++supportedTriggerTypesIndex)
    {
      m_supportedTriggerTypes.push_back(TriggerTypeMapper::GetTriggerTypeForName(supportedTriggerTypesJsonList[supportedTriggerTypesIndex].AsString()));
    }
    m_supportedTriggerTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorMetadata"))
  {
    m_connectorMetadata = jsonValue.GetObject("connectorMetadata");

    m_connectorMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_canUseAsSourceHasBeenSet)
  {
   payload.WithBool("canUseAsSource", m_canUseAsSource);

  }

  if(m_canUseAsDestinationHasBeenSet)
  {
   payload.WithBool("canUseAsDestination", m_canUseAsDestination);

  }

  if(m_supportedDestinationConnectorsHasBeenSet)
  {
   Array<JsonValue> supportedDestinationConnectorsJsonList(m_supportedDestinationConnectors.size());
   for(unsigned supportedDestinationConnectorsIndex = 0; supportedDestinationConnectorsIndex < supportedDestinationConnectorsJsonList.GetLength(); ++supportedDestinationConnectorsIndex)
   {
     supportedDestinationConnectorsJsonList[supportedDestinationConnectorsIndex].AsString(ConnectorTypeMapper::GetNameForConnectorType(m_supportedDestinationConnectors[supportedDestinationConnectorsIndex]));
   }
   payload.WithArray("supportedDestinationConnectors", std::move(supportedDestinationConnectorsJsonList));

  }

  if(m_supportedSchedulingFrequenciesHasBeenSet)
  {
   Array<JsonValue> supportedSchedulingFrequenciesJsonList(m_supportedSchedulingFrequencies.size());
   for(unsigned supportedSchedulingFrequenciesIndex = 0; supportedSchedulingFrequenciesIndex < supportedSchedulingFrequenciesJsonList.GetLength(); ++supportedSchedulingFrequenciesIndex)
   {
     supportedSchedulingFrequenciesJsonList[supportedSchedulingFrequenciesIndex].AsString(ScheduleFrequencyTypeMapper::GetNameForScheduleFrequencyType(m_supportedSchedulingFrequencies[supportedSchedulingFrequenciesIndex]));
   }
   payload.WithArray("supportedSchedulingFrequencies", std::move(supportedSchedulingFrequenciesJsonList));

  }

  if(m_isPrivateLinkEnabledHasBeenSet)
  {
   payload.WithBool("isPrivateLinkEnabled", m_isPrivateLinkEnabled);

  }

  if(m_isPrivateLinkEndpointUrlRequiredHasBeenSet)
  {
   payload.WithBool("isPrivateLinkEndpointUrlRequired", m_isPrivateLinkEndpointUrlRequired);

  }

  if(m_supportedTriggerTypesHasBeenSet)
  {
   Array<JsonValue> supportedTriggerTypesJsonList(m_supportedTriggerTypes.size());
   for(unsigned supportedTriggerTypesIndex = 0; supportedTriggerTypesIndex < supportedTriggerTypesJsonList.GetLength(); ++supportedTriggerTypesIndex)
   {
     supportedTriggerTypesJsonList[supportedTriggerTypesIndex].AsString(TriggerTypeMapper::GetNameForTriggerType(m_supportedTriggerTypes[supportedTriggerTypesIndex]));
   }
   payload.WithArray("supportedTriggerTypes", std::move(supportedTriggerTypesJsonList));

  }

  if(m_connectorMetadataHasBeenSet)
  {
   payload.WithObject("connectorMetadata", m_connectorMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
