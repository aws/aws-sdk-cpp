/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/WindowsFsrmConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {

WindowsFsrmConfiguration::WindowsFsrmConfiguration(JsonView jsonValue) { *this = jsonValue; }

WindowsFsrmConfiguration& WindowsFsrmConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FsrmServiceEnabled")) {
    m_fsrmServiceEnabled = jsonValue.GetBool("FsrmServiceEnabled");
    m_fsrmServiceEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EventLogDestination")) {
    m_eventLogDestination = jsonValue.GetString("EventLogDestination");
    m_eventLogDestinationHasBeenSet = true;
  }
  return *this;
}

JsonValue WindowsFsrmConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_fsrmServiceEnabledHasBeenSet) {
    payload.WithBool("FsrmServiceEnabled", m_fsrmServiceEnabled);
  }

  if (m_eventLogDestinationHasBeenSet) {
    payload.WithString("EventLogDestination", m_eventLogDestination);
  }

  return payload;
}

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
