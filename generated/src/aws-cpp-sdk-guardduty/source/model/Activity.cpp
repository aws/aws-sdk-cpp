/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Activity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Activity::Activity(JsonView jsonValue) { *this = jsonValue; }

Activity& Activity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = ActivityTypeMapper::GetActivityTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("api")) {
    m_api = jsonValue.GetObject("api");
    m_apiHasBeenSet = true;
  }
  return *this;
}

JsonValue Activity::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", ActivityTypeMapper::GetNameForActivityType(m_type));
  }

  if (m_apiHasBeenSet) {
    payload.WithObject("api", m_api.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
