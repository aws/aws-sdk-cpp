/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/S3FilesLocation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

S3FilesLocation::S3FilesLocation(JsonView jsonValue) { *this = jsonValue; }

S3FilesLocation& S3FilesLocation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucket")) {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileList")) {
    Aws::Utils::Array<JsonView> fileListJsonList = jsonValue.GetArray("fileList");
    for (unsigned fileListIndex = 0; fileListIndex < fileListJsonList.GetLength(); ++fileListIndex) {
      m_fileList.push_back(fileListJsonList[fileListIndex].AsObject());
    }
    m_fileListHasBeenSet = true;
  }
  return *this;
}

JsonValue S3FilesLocation::Jsonize() const {
  JsonValue payload;

  if (m_bucketHasBeenSet) {
    payload.WithString("bucket", m_bucket);
  }

  if (m_fileListHasBeenSet) {
    Aws::Utils::Array<JsonValue> fileListJsonList(m_fileList.size());
    for (unsigned fileListIndex = 0; fileListIndex < fileListJsonList.GetLength(); ++fileListIndex) {
      fileListJsonList[fileListIndex].AsObject(m_fileList[fileListIndex].Jsonize());
    }
    payload.WithArray("fileList", std::move(fileListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
