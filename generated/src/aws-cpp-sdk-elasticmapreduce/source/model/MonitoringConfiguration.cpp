/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/MonitoringConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

MonitoringConfiguration::MonitoringConfiguration(JsonView jsonValue) { *this = jsonValue; }

MonitoringConfiguration& MonitoringConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CloudWatchLogConfiguration")) {
    m_cloudWatchLogConfiguration = jsonValue.GetObject("CloudWatchLogConfiguration");
    m_cloudWatchLogConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3LoggingConfiguration")) {
    m_s3LoggingConfiguration = jsonValue.GetObject("S3LoggingConfiguration");
    m_s3LoggingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue MonitoringConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_cloudWatchLogConfigurationHasBeenSet) {
    payload.WithObject("CloudWatchLogConfiguration", m_cloudWatchLogConfiguration.Jsonize());
  }

  if (m_s3LoggingConfigurationHasBeenSet) {
    payload.WithObject("S3LoggingConfiguration", m_s3LoggingConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
