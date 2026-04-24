/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ResponseExtractionMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ResponseExtractionMapping::ResponseExtractionMapping(JsonView jsonValue) { *this = jsonValue; }

ResponseExtractionMapping& ResponseExtractionMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContentPath")) {
    m_contentPath = jsonValue.GetString("ContentPath");
    m_contentPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HeaderKey")) {
    m_headerKey = jsonValue.GetString("HeaderKey");
    m_headerKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponseExtractionMapping::Jsonize() const {
  JsonValue payload;

  if (m_contentPathHasBeenSet) {
    payload.WithString("ContentPath", m_contentPath);
  }

  if (m_headerKeyHasBeenSet) {
    payload.WithString("HeaderKey", m_headerKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
