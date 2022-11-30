/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/WorkGroupConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

WorkGroupConfiguration::WorkGroupConfiguration() : 
    m_resultConfigurationHasBeenSet(false),
    m_enforceWorkGroupConfiguration(false),
    m_enforceWorkGroupConfigurationHasBeenSet(false),
    m_publishCloudWatchMetricsEnabled(false),
    m_publishCloudWatchMetricsEnabledHasBeenSet(false),
    m_bytesScannedCutoffPerQuery(0),
    m_bytesScannedCutoffPerQueryHasBeenSet(false),
    m_requesterPaysEnabled(false),
    m_requesterPaysEnabledHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_additionalConfigurationHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_customerContentEncryptionConfigurationHasBeenSet(false)
{
}

WorkGroupConfiguration::WorkGroupConfiguration(JsonView jsonValue) : 
    m_resultConfigurationHasBeenSet(false),
    m_enforceWorkGroupConfiguration(false),
    m_enforceWorkGroupConfigurationHasBeenSet(false),
    m_publishCloudWatchMetricsEnabled(false),
    m_publishCloudWatchMetricsEnabledHasBeenSet(false),
    m_bytesScannedCutoffPerQuery(0),
    m_bytesScannedCutoffPerQueryHasBeenSet(false),
    m_requesterPaysEnabled(false),
    m_requesterPaysEnabledHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_additionalConfigurationHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_customerContentEncryptionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

WorkGroupConfiguration& WorkGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultConfiguration"))
  {
    m_resultConfiguration = jsonValue.GetObject("ResultConfiguration");

    m_resultConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnforceWorkGroupConfiguration"))
  {
    m_enforceWorkGroupConfiguration = jsonValue.GetBool("EnforceWorkGroupConfiguration");

    m_enforceWorkGroupConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishCloudWatchMetricsEnabled"))
  {
    m_publishCloudWatchMetricsEnabled = jsonValue.GetBool("PublishCloudWatchMetricsEnabled");

    m_publishCloudWatchMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BytesScannedCutoffPerQuery"))
  {
    m_bytesScannedCutoffPerQuery = jsonValue.GetInt64("BytesScannedCutoffPerQuery");

    m_bytesScannedCutoffPerQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequesterPaysEnabled"))
  {
    m_requesterPaysEnabled = jsonValue.GetBool("RequesterPaysEnabled");

    m_requesterPaysEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetObject("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalConfiguration"))
  {
    m_additionalConfiguration = jsonValue.GetString("AdditionalConfiguration");

    m_additionalConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionRole"))
  {
    m_executionRole = jsonValue.GetString("ExecutionRole");

    m_executionRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomerContentEncryptionConfiguration"))
  {
    m_customerContentEncryptionConfiguration = jsonValue.GetObject("CustomerContentEncryptionConfiguration");

    m_customerContentEncryptionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkGroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_resultConfigurationHasBeenSet)
  {
   payload.WithObject("ResultConfiguration", m_resultConfiguration.Jsonize());

  }

  if(m_enforceWorkGroupConfigurationHasBeenSet)
  {
   payload.WithBool("EnforceWorkGroupConfiguration", m_enforceWorkGroupConfiguration);

  }

  if(m_publishCloudWatchMetricsEnabledHasBeenSet)
  {
   payload.WithBool("PublishCloudWatchMetricsEnabled", m_publishCloudWatchMetricsEnabled);

  }

  if(m_bytesScannedCutoffPerQueryHasBeenSet)
  {
   payload.WithInt64("BytesScannedCutoffPerQuery", m_bytesScannedCutoffPerQuery);

  }

  if(m_requesterPaysEnabledHasBeenSet)
  {
   payload.WithBool("RequesterPaysEnabled", m_requesterPaysEnabled);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithObject("EngineVersion", m_engineVersion.Jsonize());

  }

  if(m_additionalConfigurationHasBeenSet)
  {
   payload.WithString("AdditionalConfiguration", m_additionalConfiguration);

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("ExecutionRole", m_executionRole);

  }

  if(m_customerContentEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("CustomerContentEncryptionConfiguration", m_customerContentEncryptionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
