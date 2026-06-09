/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/StartNotebookExportRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartNotebookExportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_notebookIdentifierHasBeenSet) {
    payload.WithString("notebookIdentifier", m_notebookIdentifier);
  }

  if (m_owningProjectIdentifierHasBeenSet) {
    payload.WithString("owningProjectIdentifier", m_owningProjectIdentifier);
  }

  if (m_fileFormatHasBeenSet) {
    payload.WithString("fileFormat", FileFormatMapper::GetNameForFileFormat(m_fileFormat));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
