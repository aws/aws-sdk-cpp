/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_bytesScannedCutoffPerQueryHasBeenSet(false)
{
}

WorkGroupConfiguration::WorkGroupConfiguration(JsonView jsonValue) : 
    m_resultConfigurationHasBeenSet(false),
    m_enforceWorkGroupConfiguration(false),
    m_enforceWorkGroupConfigurationHasBeenSet(false),
    m_publishCloudWatchMetricsEnabled(false),
    m_publishCloudWatchMetricsEnabledHasBeenSet(false),
    m_bytesScannedCutoffPerQuery(0),
    m_bytesScannedCutoffPerQueryHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
