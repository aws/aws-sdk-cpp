/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/JobReport.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {

JobReport::JobReport(JsonView jsonValue) { *this = jsonValue; }

JobReport& JobReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metrics")) {
    m_metrics = jsonValue.GetObject("metrics");
    m_metricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobDetailsUrl")) {
    m_jobDetailsUrl = jsonValue.GetString("jobDetailsUrl");
    m_jobDetailsUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue JobReport::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_metricsHasBeenSet) {
    payload.WithObject("metrics", m_metrics.Jsonize());
  }

  if (m_jobDetailsUrlHasBeenSet) {
    payload.WithString("jobDetailsUrl", m_jobDetailsUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
