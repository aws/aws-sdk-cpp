/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AssetZipContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

AssetZipContent::AssetZipContent(JsonView jsonValue) { *this = jsonValue; }

AssetZipContent& AssetZipContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("zipFile")) {
    m_zipFile = HashingUtils::Base64Decode(jsonValue.GetString("zipFile"));
    m_zipFileHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetZipContent::Jsonize() const {
  JsonValue payload;

  if (m_zipFileHasBeenSet) {
    payload.WithString("zipFile", HashingUtils::Base64Encode(m_zipFile));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
