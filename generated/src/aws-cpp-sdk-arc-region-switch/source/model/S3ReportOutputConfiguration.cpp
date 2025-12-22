/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/S3ReportOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

S3ReportOutputConfiguration::S3ReportOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3ReportOutputConfiguration& S3ReportOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bucketPath")) {
    m_bucketPath = jsonValue.GetString("bucketPath");
    m_bucketPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bucketOwner")) {
    m_bucketOwner = jsonValue.GetString("bucketOwner");
    m_bucketOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ReportOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_bucketPathHasBeenSet) {
    payload.WithString("bucketPath", m_bucketPath);
  }

  if (m_bucketOwnerHasBeenSet) {
    payload.WithString("bucketOwner", m_bucketOwner);
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
