/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WebNotificationContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WebNotificationContent::WebNotificationContent(JsonView jsonValue) { *this = jsonValue; }

WebNotificationContent& WebNotificationContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = NotificationTypeMapper::GetNotificationTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ViewArn")) {
    m_viewArn = jsonValue.GetString("ViewArn");
    m_viewArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Attributes")) {
    m_attributes = jsonValue.GetObject("Attributes");
    m_attributesHasBeenSet = true;
  }
  return *this;
}

JsonValue WebNotificationContent::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", NotificationTypeMapper::GetNameForNotificationType(m_type));
  }

  if (m_viewArnHasBeenSet) {
    payload.WithString("ViewArn", m_viewArn);
  }

  if (m_attributesHasBeenSet) {
    payload.WithObject("Attributes", m_attributes.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
