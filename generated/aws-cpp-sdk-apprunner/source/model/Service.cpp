/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/Service.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

Service::Service() : 
    m_serviceNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_serviceUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false),
    m_status(ServiceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false),
    m_instanceConfigurationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_healthCheckConfigurationHasBeenSet(false),
    m_autoScalingConfigurationSummaryHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_observabilityConfigurationHasBeenSet(false)
{
}

Service::Service(JsonView jsonValue) : 
    m_serviceNameHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_serviceUrlHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false),
    m_status(ServiceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false),
    m_instanceConfigurationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_healthCheckConfigurationHasBeenSet(false),
    m_autoScalingConfigurationSummaryHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_observabilityConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Service& Service::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceName"))
  {
    m_serviceName = jsonValue.GetString("ServiceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceId"))
  {
    m_serviceId = jsonValue.GetString("ServiceId");

    m_serviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceArn"))
  {
    m_serviceArn = jsonValue.GetString("ServiceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceUrl"))
  {
    m_serviceUrl = jsonValue.GetString("ServiceUrl");

    m_serviceUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletedAt"))
  {
    m_deletedAt = jsonValue.GetDouble("DeletedAt");

    m_deletedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ServiceStatusMapper::GetServiceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceConfiguration"))
  {
    m_sourceConfiguration = jsonValue.GetObject("SourceConfiguration");

    m_sourceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceConfiguration"))
  {
    m_instanceConfiguration = jsonValue.GetObject("InstanceConfiguration");

    m_instanceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckConfiguration"))
  {
    m_healthCheckConfiguration = jsonValue.GetObject("HealthCheckConfiguration");

    m_healthCheckConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingConfigurationSummary"))
  {
    m_autoScalingConfigurationSummary = jsonValue.GetObject("AutoScalingConfigurationSummary");

    m_autoScalingConfigurationSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("NetworkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObservabilityConfiguration"))
  {
    m_observabilityConfiguration = jsonValue.GetObject("ObservabilityConfiguration");

    m_observabilityConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Service::Jsonize() const
{
  JsonValue payload;

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("ServiceName", m_serviceName);

  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("ServiceId", m_serviceId);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("ServiceArn", m_serviceArn);

  }

  if(m_serviceUrlHasBeenSet)
  {
   payload.WithString("ServiceUrl", m_serviceUrl);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_deletedAtHasBeenSet)
  {
   payload.WithDouble("DeletedAt", m_deletedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ServiceStatusMapper::GetNameForServiceStatus(m_status));
  }

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("SourceConfiguration", m_sourceConfiguration.Jsonize());

  }

  if(m_instanceConfigurationHasBeenSet)
  {
   payload.WithObject("InstanceConfiguration", m_instanceConfiguration.Jsonize());

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_healthCheckConfigurationHasBeenSet)
  {
   payload.WithObject("HealthCheckConfiguration", m_healthCheckConfiguration.Jsonize());

  }

  if(m_autoScalingConfigurationSummaryHasBeenSet)
  {
   payload.WithObject("AutoScalingConfigurationSummary", m_autoScalingConfigurationSummary.Jsonize());

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("NetworkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_observabilityConfigurationHasBeenSet)
  {
   payload.WithObject("ObservabilityConfiguration", m_observabilityConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
