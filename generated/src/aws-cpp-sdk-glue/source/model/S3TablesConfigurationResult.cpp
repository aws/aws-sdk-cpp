/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/S3TablesConfigurationResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

S3TablesConfigurationResult::S3TablesConfigurationResult(JsonView jsonValue) { *this = jsonValue; }

S3TablesConfigurationResult& S3TablesConfigurationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TableBucketArn")) {
    m_tableBucketArn = jsonValue.GetString("TableBucketArn");
    m_tableBucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TablesConfigurationResult::Jsonize() const {
  JsonValue payload;

  if (m_tableBucketArnHasBeenSet) {
    payload.WithString("TableBucketArn", m_tableBucketArn);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
