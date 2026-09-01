/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/S3FilesConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

S3FilesConfig::S3FilesConfig(JsonView jsonValue) { *this = jsonValue; }

S3FilesConfig& S3FilesConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DirectS3Read")) {
    m_directS3Read = DirectS3ReadMapper::GetDirectS3ReadForName(jsonValue.GetString("DirectS3Read"));
    m_directS3ReadHasBeenSet = true;
  }
  return *this;
}

JsonValue S3FilesConfig::Jsonize() const {
  JsonValue payload;

  if (m_directS3ReadHasBeenSet) {
    payload.WithString("DirectS3Read", DirectS3ReadMapper::GetNameForDirectS3Read(m_directS3Read));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
