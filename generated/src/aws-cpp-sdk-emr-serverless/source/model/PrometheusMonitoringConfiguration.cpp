/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/PrometheusMonitoringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

PrometheusMonitoringConfiguration::PrometheusMonitoringConfiguration() : 
    m_remoteWriteUrlHasBeenSet(false)
{
}

PrometheusMonitoringConfiguration::PrometheusMonitoringConfiguration(JsonView jsonValue) : 
    m_remoteWriteUrlHasBeenSet(false)
{
  *this = jsonValue;
}

PrometheusMonitoringConfiguration& PrometheusMonitoringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("remoteWriteUrl"))
  {
    m_remoteWriteUrl = jsonValue.GetString("remoteWriteUrl");

    m_remoteWriteUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue PrometheusMonitoringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_remoteWriteUrlHasBeenSet)
  {
   payload.WithString("remoteWriteUrl", m_remoteWriteUrl);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
