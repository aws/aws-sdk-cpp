/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/StepMonitoringConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

StepMonitoringConfiguration::StepMonitoringConfiguration(JsonView jsonValue) { *this = jsonValue; }

StepMonitoringConfiguration& StepMonitoringConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3MonitoringConfiguration")) {
    m_s3MonitoringConfiguration = jsonValue.GetObject("S3MonitoringConfiguration");
    m_s3MonitoringConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue StepMonitoringConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_s3MonitoringConfigurationHasBeenSet) {
    payload.WithObject("S3MonitoringConfiguration", m_s3MonitoringConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
