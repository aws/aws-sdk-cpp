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
    m_connectorMetadataHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorLabelHasBeenSet(false),
    m_connectorDescriptionHasBeenSet(false),
    m_connectorOwnerHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectorVersionHasBeenSet(false),
    m_connectorArnHasBeenSet(false),
    m_connectorModesHasBeenSet(false),
    m_authenticationConfigHasBeenSet(false),
    m_connectorRuntimeSettingsHasBeenSet(false),
    m_supportedApiVersionsHasBeenSet(false),
    m_supportedOperatorsHasBeenSet(false),
    m_supportedWriteOperationsHasBeenSet(false),
    m_connectorProvisioningType(ConnectorProvisioningType::NOT_SET),
    m_connectorProvisioningTypeHasBeenSet(false),
    m_connectorProvisioningConfigHasBeenSet(false),
    m_logoURLHasBeenSet(false),
    m_registeredAtHasBeenSet(false),
    m_registeredByHasBeenSet(false)
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
    m_connectorMetadataHasBeenSet(false),
    m_connectorType(ConnectorType::NOT_SET),
    m_connectorTypeHasBeenSet(false),
    m_connectorLabelHasBeenSet(false),
    m_connectorDescriptionHasBeenSet(false),
    m_connectorOwnerHasBeenSet(false),
    m_connectorNameHasBeenSet(false),
    m_connectorVersionHasBeenSet(false),
    m_connectorArnHasBeenSet(false),
    m_connectorModesHasBeenSet(false),
    m_authenticationConfigHasBeenSet(false),
    m_connectorRuntimeSettingsHasBeenSet(false),
    m_supportedApiVersionsHasBeenSet(false),
    m_supportedOperatorsHasBeenSet(false),
    m_supportedWriteOperationsHasBeenSet(false),
    m_connectorProvisioningType(ConnectorProvisioningType::NOT_SET),
    m_connectorProvisioningTypeHasBeenSet(false),
    m_connectorProvisioningConfigHasBeenSet(false),
    m_logoURLHasBeenSet(false),
    m_registeredAtHasBeenSet(false),
    m_registeredByHasBeenSet(false)
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
    Aws::Utils::Array<JsonView> supportedDestinationConnectorsJsonList = jsonValue.GetArray("supportedDestinationConnectors");
    for(unsigned supportedDestinationConnectorsIndex = 0; supportedDestinationConnectorsIndex < supportedDestinationConnectorsJsonList.GetLength(); ++supportedDestinationConnectorsIndex)
    {
      m_supportedDestinationConnectors.push_back(ConnectorTypeMapper::GetConnectorTypeForName(supportedDestinationConnectorsJsonList[supportedDestinationConnectorsIndex].AsString()));
    }
    m_supportedDestinationConnectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedSchedulingFrequencies"))
  {
    Aws::Utils::Array<JsonView> supportedSchedulingFrequenciesJsonList = jsonValue.GetArray("supportedSchedulingFrequencies");
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
    Aws::Utils::Array<JsonView> supportedTriggerTypesJsonList = jsonValue.GetArray("supportedTriggerTypes");
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

  if(jsonValue.ValueExists("connectorType"))
  {
    m_connectorType = ConnectorTypeMapper::GetConnectorTypeForName(jsonValue.GetString("connectorType"));

    m_connectorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorLabel"))
  {
    m_connectorLabel = jsonValue.GetString("connectorLabel");

    m_connectorLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorDescription"))
  {
    m_connectorDescription = jsonValue.GetString("connectorDescription");

    m_connectorDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorOwner"))
  {
    m_connectorOwner = jsonValue.GetString("connectorOwner");

    m_connectorOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorName"))
  {
    m_connectorName = jsonValue.GetString("connectorName");

    m_connectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorVersion"))
  {
    m_connectorVersion = jsonValue.GetString("connectorVersion");

    m_connectorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorArn"))
  {
    m_connectorArn = jsonValue.GetString("connectorArn");

    m_connectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorModes"))
  {
    Aws::Utils::Array<JsonView> connectorModesJsonList = jsonValue.GetArray("connectorModes");
    for(unsigned connectorModesIndex = 0; connectorModesIndex < connectorModesJsonList.GetLength(); ++connectorModesIndex)
    {
      m_connectorModes.push_back(connectorModesJsonList[connectorModesIndex].AsString());
    }
    m_connectorModesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authenticationConfig"))
  {
    m_authenticationConfig = jsonValue.GetObject("authenticationConfig");

    m_authenticationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorRuntimeSettings"))
  {
    Aws::Utils::Array<JsonView> connectorRuntimeSettingsJsonList = jsonValue.GetArray("connectorRuntimeSettings");
    for(unsigned connectorRuntimeSettingsIndex = 0; connectorRuntimeSettingsIndex < connectorRuntimeSettingsJsonList.GetLength(); ++connectorRuntimeSettingsIndex)
    {
      m_connectorRuntimeSettings.push_back(connectorRuntimeSettingsJsonList[connectorRuntimeSettingsIndex].AsObject());
    }
    m_connectorRuntimeSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedApiVersions"))
  {
    Aws::Utils::Array<JsonView> supportedApiVersionsJsonList = jsonValue.GetArray("supportedApiVersions");
    for(unsigned supportedApiVersionsIndex = 0; supportedApiVersionsIndex < supportedApiVersionsJsonList.GetLength(); ++supportedApiVersionsIndex)
    {
      m_supportedApiVersions.push_back(supportedApiVersionsJsonList[supportedApiVersionsIndex].AsString());
    }
    m_supportedApiVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedOperators"))
  {
    Aws::Utils::Array<JsonView> supportedOperatorsJsonList = jsonValue.GetArray("supportedOperators");
    for(unsigned supportedOperatorsIndex = 0; supportedOperatorsIndex < supportedOperatorsJsonList.GetLength(); ++supportedOperatorsIndex)
    {
      m_supportedOperators.push_back(OperatorsMapper::GetOperatorsForName(supportedOperatorsJsonList[supportedOperatorsIndex].AsString()));
    }
    m_supportedOperatorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedWriteOperations"))
  {
    Aws::Utils::Array<JsonView> supportedWriteOperationsJsonList = jsonValue.GetArray("supportedWriteOperations");
    for(unsigned supportedWriteOperationsIndex = 0; supportedWriteOperationsIndex < supportedWriteOperationsJsonList.GetLength(); ++supportedWriteOperationsIndex)
    {
      m_supportedWriteOperations.push_back(WriteOperationTypeMapper::GetWriteOperationTypeForName(supportedWriteOperationsJsonList[supportedWriteOperationsIndex].AsString()));
    }
    m_supportedWriteOperationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorProvisioningType"))
  {
    m_connectorProvisioningType = ConnectorProvisioningTypeMapper::GetConnectorProvisioningTypeForName(jsonValue.GetString("connectorProvisioningType"));

    m_connectorProvisioningTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorProvisioningConfig"))
  {
    m_connectorProvisioningConfig = jsonValue.GetObject("connectorProvisioningConfig");

    m_connectorProvisioningConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logoURL"))
  {
    m_logoURL = jsonValue.GetString("logoURL");

    m_logoURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredAt"))
  {
    m_registeredAt = jsonValue.GetDouble("registeredAt");

    m_registeredAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredBy"))
  {
    m_registeredBy = jsonValue.GetString("registeredBy");

    m_registeredByHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> supportedDestinationConnectorsJsonList(m_supportedDestinationConnectors.size());
   for(unsigned supportedDestinationConnectorsIndex = 0; supportedDestinationConnectorsIndex < supportedDestinationConnectorsJsonList.GetLength(); ++supportedDestinationConnectorsIndex)
   {
     supportedDestinationConnectorsJsonList[supportedDestinationConnectorsIndex].AsString(ConnectorTypeMapper::GetNameForConnectorType(m_supportedDestinationConnectors[supportedDestinationConnectorsIndex]));
   }
   payload.WithArray("supportedDestinationConnectors", std::move(supportedDestinationConnectorsJsonList));

  }

  if(m_supportedSchedulingFrequenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedSchedulingFrequenciesJsonList(m_supportedSchedulingFrequencies.size());
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
   Aws::Utils::Array<JsonValue> supportedTriggerTypesJsonList(m_supportedTriggerTypes.size());
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

  if(m_connectorTypeHasBeenSet)
  {
   payload.WithString("connectorType", ConnectorTypeMapper::GetNameForConnectorType(m_connectorType));
  }

  if(m_connectorLabelHasBeenSet)
  {
   payload.WithString("connectorLabel", m_connectorLabel);

  }

  if(m_connectorDescriptionHasBeenSet)
  {
   payload.WithString("connectorDescription", m_connectorDescription);

  }

  if(m_connectorOwnerHasBeenSet)
  {
   payload.WithString("connectorOwner", m_connectorOwner);

  }

  if(m_connectorNameHasBeenSet)
  {
   payload.WithString("connectorName", m_connectorName);

  }

  if(m_connectorVersionHasBeenSet)
  {
   payload.WithString("connectorVersion", m_connectorVersion);

  }

  if(m_connectorArnHasBeenSet)
  {
   payload.WithString("connectorArn", m_connectorArn);

  }

  if(m_connectorModesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorModesJsonList(m_connectorModes.size());
   for(unsigned connectorModesIndex = 0; connectorModesIndex < connectorModesJsonList.GetLength(); ++connectorModesIndex)
   {
     connectorModesJsonList[connectorModesIndex].AsString(m_connectorModes[connectorModesIndex]);
   }
   payload.WithArray("connectorModes", std::move(connectorModesJsonList));

  }

  if(m_authenticationConfigHasBeenSet)
  {
   payload.WithObject("authenticationConfig", m_authenticationConfig.Jsonize());

  }

  if(m_connectorRuntimeSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> connectorRuntimeSettingsJsonList(m_connectorRuntimeSettings.size());
   for(unsigned connectorRuntimeSettingsIndex = 0; connectorRuntimeSettingsIndex < connectorRuntimeSettingsJsonList.GetLength(); ++connectorRuntimeSettingsIndex)
   {
     connectorRuntimeSettingsJsonList[connectorRuntimeSettingsIndex].AsObject(m_connectorRuntimeSettings[connectorRuntimeSettingsIndex].Jsonize());
   }
   payload.WithArray("connectorRuntimeSettings", std::move(connectorRuntimeSettingsJsonList));

  }

  if(m_supportedApiVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedApiVersionsJsonList(m_supportedApiVersions.size());
   for(unsigned supportedApiVersionsIndex = 0; supportedApiVersionsIndex < supportedApiVersionsJsonList.GetLength(); ++supportedApiVersionsIndex)
   {
     supportedApiVersionsJsonList[supportedApiVersionsIndex].AsString(m_supportedApiVersions[supportedApiVersionsIndex]);
   }
   payload.WithArray("supportedApiVersions", std::move(supportedApiVersionsJsonList));

  }

  if(m_supportedOperatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedOperatorsJsonList(m_supportedOperators.size());
   for(unsigned supportedOperatorsIndex = 0; supportedOperatorsIndex < supportedOperatorsJsonList.GetLength(); ++supportedOperatorsIndex)
   {
     supportedOperatorsJsonList[supportedOperatorsIndex].AsString(OperatorsMapper::GetNameForOperators(m_supportedOperators[supportedOperatorsIndex]));
   }
   payload.WithArray("supportedOperators", std::move(supportedOperatorsJsonList));

  }

  if(m_supportedWriteOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedWriteOperationsJsonList(m_supportedWriteOperations.size());
   for(unsigned supportedWriteOperationsIndex = 0; supportedWriteOperationsIndex < supportedWriteOperationsJsonList.GetLength(); ++supportedWriteOperationsIndex)
   {
     supportedWriteOperationsJsonList[supportedWriteOperationsIndex].AsString(WriteOperationTypeMapper::GetNameForWriteOperationType(m_supportedWriteOperations[supportedWriteOperationsIndex]));
   }
   payload.WithArray("supportedWriteOperations", std::move(supportedWriteOperationsJsonList));

  }

  if(m_connectorProvisioningTypeHasBeenSet)
  {
   payload.WithString("connectorProvisioningType", ConnectorProvisioningTypeMapper::GetNameForConnectorProvisioningType(m_connectorProvisioningType));
  }

  if(m_connectorProvisioningConfigHasBeenSet)
  {
   payload.WithObject("connectorProvisioningConfig", m_connectorProvisioningConfig.Jsonize());

  }

  if(m_logoURLHasBeenSet)
  {
   payload.WithString("logoURL", m_logoURL);

  }

  if(m_registeredAtHasBeenSet)
  {
   payload.WithDouble("registeredAt", m_registeredAt.SecondsWithMSPrecision());
  }

  if(m_registeredByHasBeenSet)
  {
   payload.WithString("registeredBy", m_registeredBy);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
