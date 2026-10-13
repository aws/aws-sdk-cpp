/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/RLSPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {

RLSPolicy::RLSPolicy(JsonView jsonValue) { *this = jsonValue; }

RLSPolicy& RLSPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CatalogId")) {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttachmentColumns")) {
    Aws::Utils::Array<JsonView> attachmentColumnsJsonList = jsonValue.GetArray("AttachmentColumns");
    for (unsigned attachmentColumnsIndex = 0; attachmentColumnsIndex < attachmentColumnsJsonList.GetLength(); ++attachmentColumnsIndex) {
      m_attachmentColumns.push_back(attachmentColumnsJsonList[attachmentColumnsIndex].AsObject());
    }
    m_attachmentColumnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FilterExpression")) {
    m_filterExpression = jsonValue.GetString("FilterExpression");
    m_filterExpressionHasBeenSet = true;
  }
  return *this;
}

JsonValue RLSPolicy::Jsonize() const {
  JsonValue payload;

  if (m_catalogIdHasBeenSet) {
    payload.WithString("CatalogId", m_catalogId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_attachmentColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> attachmentColumnsJsonList(m_attachmentColumns.size());
    for (unsigned attachmentColumnsIndex = 0; attachmentColumnsIndex < attachmentColumnsJsonList.GetLength(); ++attachmentColumnsIndex) {
      attachmentColumnsJsonList[attachmentColumnsIndex].AsObject(m_attachmentColumns[attachmentColumnsIndex].Jsonize());
    }
    payload.WithArray("AttachmentColumns", std::move(attachmentColumnsJsonList));
  }

  if (m_filterExpressionHasBeenSet) {
    payload.WithString("FilterExpression", m_filterExpression);
  }

  return payload;
}

}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
