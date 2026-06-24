/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CaptureConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

CaptureConfiguration::CaptureConfiguration(JsonView jsonValue) { *this = jsonValue; }

CaptureConfiguration& CaptureConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CodeCapture")) {
    m_codeCapture = jsonValue.GetObject("CodeCapture");
    m_codeCaptureHasBeenSet = true;
  }
  return *this;
}

JsonValue CaptureConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_codeCaptureHasBeenSet) {
    payload.WithObject("CodeCapture", m_codeCapture.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
