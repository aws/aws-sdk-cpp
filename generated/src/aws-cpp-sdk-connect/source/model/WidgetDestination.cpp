/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WidgetDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WidgetDestination::WidgetDestination(JsonView jsonValue) { *this = jsonValue; }

WidgetDestination& WidgetDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WidgetId")) {
    m_widgetId = jsonValue.GetString("WidgetId");
    m_widgetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileId")) {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  return *this;
}

JsonValue WidgetDestination::Jsonize() const {
  JsonValue payload;

  if (m_widgetIdHasBeenSet) {
    payload.WithString("WidgetId", m_widgetId);
  }

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
