/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/WorkGroupConfigurationUpdates.h>
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

WorkGroupConfigurationUpdates::WorkGroupConfigurationUpdates() : 
    m_enforceWorkGroupConfiguration(false),
    m_enforceWorkGroupConfigurationHasBeenSet(false),
    m_resultConfigurationUpdatesHasBeenSet(false),
    m_publishCloudWatchMetricsEnabled(false),
    m_publishCloudWatchMetricsEnabledHasBeenSet(false),
    m_bytesScannedCutoffPerQuery(0),
    m_bytesScannedCutoffPerQueryHasBeenSet(false),
    m_removeBytesScannedCutoffPerQuery(false),
    m_removeBytesScannedCutoffPerQueryHasBeenSet(false),
    m_requesterPaysEnabled(false),
    m_requesterPaysEnabledHasBeenSet(false)
{
}

WorkGroupConfigurationUpdates::WorkGroupConfigurationUpdates(JsonView jsonValue) : 
    m_enforceWorkGroupConfiguration(false),
    m_enforceWorkGroupConfigurationHasBeenSet(false),
    m_resultConfigurationUpdatesHasBeenSet(false),
    m_publishCloudWatchMetricsEnabled(false),
    m_publishCloudWatchMetricsEnabledHasBeenSet(false),
    m_bytesScannedCutoffPerQuery(0),
    m_bytesScannedCutoffPerQueryHasBeenSet(false),
    m_removeBytesScannedCutoffPerQuery(false),
    m_removeBytesScannedCutoffPerQueryHasBeenSet(false),
    m_requesterPaysEnabled(false),
    m_requesterPaysEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

WorkGroupConfigurationUpdates& WorkGroupConfigurationUpdates::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnforceWorkGroupConfiguration"))
  {
    m_enforceWorkGroupConfiguration = jsonValue.GetBool("EnforceWorkGroupConfiguration");

    m_enforceWorkGroupConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultConfigurationUpdates"))
  {
    m_resultConfigurationUpdates = jsonValue.GetObject("ResultConfigurationUpdates");

    m_resultConfigurationUpdatesHasBeenSet = true;
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

  if(jsonValue.ValueExists("RemoveBytesScannedCutoffPerQuery"))
  {
    m_removeBytesScannedCutoffPerQuery = jsonValue.GetBool("RemoveBytesScannedCutoffPerQuery");

    m_removeBytesScannedCutoffPerQueryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequesterPaysEnabled"))
  {
    m_requesterPaysEnabled = jsonValue.GetBool("RequesterPaysEnabled");

    m_requesterPaysEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkGroupConfigurationUpdates::Jsonize() const
{
  JsonValue payload;

  if(m_enforceWorkGroupConfigurationHasBeenSet)
  {
   payload.WithBool("EnforceWorkGroupConfiguration", m_enforceWorkGroupConfiguration);

  }

  if(m_resultConfigurationUpdatesHasBeenSet)
  {
   payload.WithObject("ResultConfigurationUpdates", m_resultConfigurationUpdates.Jsonize());

  }

  if(m_publishCloudWatchMetricsEnabledHasBeenSet)
  {
   payload.WithBool("PublishCloudWatchMetricsEnabled", m_publishCloudWatchMetricsEnabled);

  }

  if(m_bytesScannedCutoffPerQueryHasBeenSet)
  {
   payload.WithInt64("BytesScannedCutoffPerQuery", m_bytesScannedCutoffPerQuery);

  }

  if(m_removeBytesScannedCutoffPerQueryHasBeenSet)
  {
   payload.WithBool("RemoveBytesScannedCutoffPerQuery", m_removeBytesScannedCutoffPerQuery);

  }

  if(m_requesterPaysEnabledHasBeenSet)
  {
   payload.WithBool("RequesterPaysEnabled", m_requesterPaysEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
