/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomModelDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

CustomModelDataSource::CustomModelDataSource(JsonView jsonValue) { *this = jsonValue; }

CustomModelDataSource& CustomModelDataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelPackageArnDataSource")) {
    m_modelPackageArnDataSource = jsonValue.GetObject("modelPackageArnDataSource");
    m_modelPackageArnDataSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomModelDataSource::Jsonize() const {
  JsonValue payload;

  if (m_modelPackageArnDataSourceHasBeenSet) {
    payload.WithObject("modelPackageArnDataSource", m_modelPackageArnDataSource.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
