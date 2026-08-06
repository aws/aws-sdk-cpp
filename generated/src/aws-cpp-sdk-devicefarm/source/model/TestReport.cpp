/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/TestReport.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {

TestReport::TestReport(JsonView jsonValue) { *this = jsonValue; }

TestReport& TestReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metrics")) {
    m_metrics = jsonValue.GetObject("metrics");
    m_metricsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testDetailsUrl")) {
    m_testDetailsUrl = jsonValue.GetString("testDetailsUrl");
    m_testDetailsUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue TestReport::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_metricsHasBeenSet) {
    payload.WithObject("metrics", m_metrics.Jsonize());
  }

  if (m_testDetailsUrlHasBeenSet) {
    payload.WithString("testDetailsUrl", m_testDetailsUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
