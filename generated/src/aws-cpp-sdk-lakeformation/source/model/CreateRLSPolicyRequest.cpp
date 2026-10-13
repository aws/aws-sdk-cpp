/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/model/CreateRLSPolicyRequest.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRLSPolicyRequest::SerializePayload() const {
  JsonValue payload;

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

  return payload.View().WriteReadable();
}
