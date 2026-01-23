/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateTestCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTestCaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_contentHasBeenSet) {
    payload.WithString("Content", m_content);
  }

  if (m_entryPointHasBeenSet) {
    payload.WithObject("EntryPoint", m_entryPoint.Jsonize());
  }

  if (m_initializationDataHasBeenSet) {
    payload.WithString("InitializationData", m_initializationData);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", TestCaseStatusMapper::GetNameForTestCaseStatus(m_status));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTestCaseRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_lastModifiedTimeHasBeenSet) {
    headers.emplace("x-amz-last-modified-time", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::RFC822));
  }

  if (m_lastModifiedRegionHasBeenSet) {
    ss << m_lastModifiedRegion;
    headers.emplace("x-amz-last-modified-region", ss.str());
    ss.str("");
  }

  return headers;
}
