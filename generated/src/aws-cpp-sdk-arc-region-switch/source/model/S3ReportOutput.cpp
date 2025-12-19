/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/S3ReportOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ARCRegionswitch {
namespace Model {

S3ReportOutput::S3ReportOutput(JsonView jsonValue) { *this = jsonValue; }

S3ReportOutput& S3ReportOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3ObjectKey")) {
    m_s3ObjectKey = jsonValue.GetString("s3ObjectKey");
    m_s3ObjectKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue S3ReportOutput::Jsonize() const {
  JsonValue payload;

  if (m_s3ObjectKeyHasBeenSet) {
    payload.WithString("s3ObjectKey", m_s3ObjectKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
