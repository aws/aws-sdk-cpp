/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/TransformationOutputDataConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

TransformationOutputDataConfig::TransformationOutputDataConfig(JsonView jsonValue) { *this = jsonValue; }

TransformationOutputDataConfig& TransformationOutputDataConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3Configuration")) {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");
    m_s3ConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformationOutputDataConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3ConfigurationHasBeenSet) {
    payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
