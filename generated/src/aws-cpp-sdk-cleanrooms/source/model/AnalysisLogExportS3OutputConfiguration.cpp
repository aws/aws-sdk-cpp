/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisLogExportS3OutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

AnalysisLogExportS3OutputConfiguration::AnalysisLogExportS3OutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

AnalysisLogExportS3OutputConfiguration& AnalysisLogExportS3OutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucket")) {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyPrefix")) {
    m_keyPrefix = jsonValue.GetString("keyPrefix");
    m_keyPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisLogExportS3OutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bucketHasBeenSet) {
    payload.WithString("bucket", m_bucket);
  }

  if (m_keyPrefixHasBeenSet) {
    payload.WithString("keyPrefix", m_keyPrefix);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
