/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/File.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

File::File(JsonView jsonValue) { *this = jsonValue; }

File& File::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucket")) {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("alias")) {
    m_alias = jsonValue.GetString("alias");
    m_aliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetObject("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileFormat")) {
    m_fileFormat = jsonValue.GetObject("fileFormat");
    m_fileFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue File::Jsonize() const {
  JsonValue payload;

  if (m_bucketHasBeenSet) {
    payload.WithString("bucket", m_bucket);
  }

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_versionIdHasBeenSet) {
    payload.WithString("versionId", m_versionId);
  }

  if (m_aliasHasBeenSet) {
    payload.WithString("alias", m_alias);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithObject("startTime", m_startTime.Jsonize());
  }

  if (m_fileFormatHasBeenSet) {
    payload.WithObject("fileFormat", m_fileFormat.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
