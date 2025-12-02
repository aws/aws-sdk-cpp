/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/LogFieldType.h>
#include <aws/logs/model/LogFieldsListItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

LogFieldsListItem::LogFieldsListItem(JsonView jsonValue) { *this = jsonValue; }

LogFieldsListItem& LogFieldsListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logFieldName")) {
    m_logFieldName = jsonValue.GetString("logFieldName");
    m_logFieldNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logFieldType")) {
    m_logFieldType = Aws::MakeShared<LogFieldType>("LogFieldsListItem", jsonValue.GetObject("logFieldType"));
    m_logFieldTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue LogFieldsListItem::Jsonize() const {
  JsonValue payload;

  if (m_logFieldNameHasBeenSet) {
    payload.WithString("logFieldName", m_logFieldName);
  }

  if (m_logFieldTypeHasBeenSet) {
    payload.WithObject("logFieldType", m_logFieldType->Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
