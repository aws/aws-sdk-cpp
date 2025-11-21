/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/MonitoringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Athena {
namespace Model {

MonitoringConfiguration::MonitoringConfiguration(JsonView jsonValue) { *this = jsonValue; }

MonitoringConfiguration& MonitoringConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CloudWatchLoggingConfiguration")) {
    m_cloudWatchLoggingConfiguration = jsonValue.GetObject("CloudWatchLoggingConfiguration");
    m_cloudWatchLoggingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedLoggingConfiguration")) {
    m_managedLoggingConfiguration = jsonValue.GetObject("ManagedLoggingConfiguration");
    m_managedLoggingConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3LoggingConfiguration")) {
    m_s3LoggingConfiguration = jsonValue.GetObject("S3LoggingConfiguration");
    m_s3LoggingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitoringConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_cloudWatchLoggingConfigurationHasBeenSet) {
    payload.WithObject("CloudWatchLoggingConfiguration", m_cloudWatchLoggingConfiguration.Jsonize());
  }

  if (m_managedLoggingConfigurationHasBeenSet) {
    payload.WithObject("ManagedLoggingConfiguration", m_managedLoggingConfiguration.Jsonize());
  }

  if (m_s3LoggingConfigurationHasBeenSet) {
    payload.WithObject("S3LoggingConfiguration", m_s3LoggingConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
