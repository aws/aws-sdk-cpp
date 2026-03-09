/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/InsightsOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

InsightsOutput::InsightsOutput(JsonView jsonValue) { *this = jsonValue; }

InsightsOutput& InsightsOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uri")) {
    m_uri = jsonValue.GetString("uri");
    m_uriHasBeenSet = true;
  }
  return *this;
}

JsonValue InsightsOutput::Jsonize() const {
  JsonValue payload;

  if (m_uriHasBeenSet) {
    payload.WithString("uri", m_uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
