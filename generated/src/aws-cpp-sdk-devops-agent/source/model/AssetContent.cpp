/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AssetContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AssetContent::AssetContent(JsonView jsonValue) { *this = jsonValue; }

AssetContent& AssetContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("file")) {
    m_file = jsonValue.GetObject("file");
    m_fileHasBeenSet = true;
  }
  if (jsonValue.ValueExists("zip")) {
    m_zip = jsonValue.GetObject("zip");
    m_zipHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceUrl")) {
    m_sourceUrl = jsonValue.GetObject("sourceUrl");
    m_sourceUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetContent::Jsonize() const {
  JsonValue payload;

  if (m_fileHasBeenSet) {
    payload.WithObject("file", m_file.Jsonize());
  }

  if (m_zipHasBeenSet) {
    payload.WithObject("zip", m_zip.Jsonize());
  }

  if (m_sourceUrlHasBeenSet) {
    payload.WithObject("sourceUrl", m_sourceUrl.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
