/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ObservabilityConfiguration.h>
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

ObservabilityConfiguration::ObservabilityConfiguration() : 
    m_observabilityConfigurationArnHasBeenSet(false),
    m_observabilityConfigurationNameHasBeenSet(false),
    m_traceConfigurationHasBeenSet(false),
    m_observabilityConfigurationRevision(0),
    m_observabilityConfigurationRevisionHasBeenSet(false),
    m_latest(false),
    m_latestHasBeenSet(false),
    m_status(ObservabilityConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false)
{
}

ObservabilityConfiguration::ObservabilityConfiguration(JsonView jsonValue) : 
    m_observabilityConfigurationArnHasBeenSet(false),
    m_observabilityConfigurationNameHasBeenSet(false),
    m_traceConfigurationHasBeenSet(false),
    m_observabilityConfigurationRevision(0),
    m_observabilityConfigurationRevisionHasBeenSet(false),
    m_latest(false),
    m_latestHasBeenSet(false),
    m_status(ObservabilityConfigurationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ObservabilityConfiguration& ObservabilityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObservabilityConfigurationArn"))
  {
    m_observabilityConfigurationArn = jsonValue.GetString("ObservabilityConfigurationArn");

    m_observabilityConfigurationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObservabilityConfigurationName"))
  {
    m_observabilityConfigurationName = jsonValue.GetString("ObservabilityConfigurationName");

    m_observabilityConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TraceConfiguration"))
  {
    m_traceConfiguration = jsonValue.GetObject("TraceConfiguration");

    m_traceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObservabilityConfigurationRevision"))
  {
    m_observabilityConfigurationRevision = jsonValue.GetInteger("ObservabilityConfigurationRevision");

    m_observabilityConfigurationRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Latest"))
  {
    m_latest = jsonValue.GetBool("Latest");

    m_latestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ObservabilityConfigurationStatusMapper::GetObservabilityConfigurationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletedAt"))
  {
    m_deletedAt = jsonValue.GetDouble("DeletedAt");

    m_deletedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ObservabilityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_observabilityConfigurationArnHasBeenSet)
  {
   payload.WithString("ObservabilityConfigurationArn", m_observabilityConfigurationArn);

  }

  if(m_observabilityConfigurationNameHasBeenSet)
  {
   payload.WithString("ObservabilityConfigurationName", m_observabilityConfigurationName);

  }

  if(m_traceConfigurationHasBeenSet)
  {
   payload.WithObject("TraceConfiguration", m_traceConfiguration.Jsonize());

  }

  if(m_observabilityConfigurationRevisionHasBeenSet)
  {
   payload.WithInteger("ObservabilityConfigurationRevision", m_observabilityConfigurationRevision);

  }

  if(m_latestHasBeenSet)
  {
   payload.WithBool("Latest", m_latest);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ObservabilityConfigurationStatusMapper::GetNameForObservabilityConfigurationStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_deletedAtHasBeenSet)
  {
   payload.WithDouble("DeletedAt", m_deletedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
