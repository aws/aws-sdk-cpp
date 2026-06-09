/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelPackageArnDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Bedrock {
namespace Model {

ModelPackageArnDataSource::ModelPackageArnDataSource(JsonView jsonValue) { *this = jsonValue; }

ModelPackageArnDataSource& ModelPackageArnDataSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("modelPackageArn")) {
    m_modelPackageArn = jsonValue.GetString("modelPackageArn");
    m_modelPackageArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelPackageArnDataSource::Jsonize() const {
  JsonValue payload;

  if (m_modelPackageArnHasBeenSet) {
    payload.WithString("modelPackageArn", m_modelPackageArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
