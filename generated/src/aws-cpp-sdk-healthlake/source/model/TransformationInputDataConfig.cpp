/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/TransformationInputDataConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

TransformationInputDataConfig::TransformationInputDataConfig(JsonView jsonValue) { *this = jsonValue; }

TransformationInputDataConfig& TransformationInputDataConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3Uri")) {
    m_s3Uri = jsonValue.GetString("S3Uri");
    m_s3UriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceFormat")) {
    m_sourceFormat = SourceFormatMapper::GetSourceFormatForName(jsonValue.GetString("SourceFormat"));
    m_sourceFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformationInputDataConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3UriHasBeenSet) {
    payload.WithString("S3Uri", m_s3Uri);
  }

  if (m_sourceFormatHasBeenSet) {
    payload.WithString("SourceFormat", SourceFormatMapper::GetNameForSourceFormat(m_sourceFormat));
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
