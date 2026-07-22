/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/CloudWatchConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

CloudWatchConfiguration::CloudWatchConfiguration(JsonView jsonValue) { *this = jsonValue; }

CloudWatchConfiguration& CloudWatchConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasetArn")) {
    m_datasetArn = jsonValue.GetString("datasetArn");
    m_datasetArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_datasetArnHasBeenSet) {
    payload.WithString("datasetArn", m_datasetArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
