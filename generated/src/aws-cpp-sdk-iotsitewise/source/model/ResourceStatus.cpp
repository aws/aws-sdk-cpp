/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ResourceStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ResourceStatus::ResourceStatus(JsonView jsonValue) { *this = jsonValue; }

ResourceStatus& ResourceStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ResourceStateMapper::GetResourceStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceStatus::Jsonize() const {
  JsonValue payload;

  if (m_errorHasBeenSet) {
    payload.WithObject("error", m_error.Jsonize());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", ResourceStateMapper::GetNameForResourceState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
