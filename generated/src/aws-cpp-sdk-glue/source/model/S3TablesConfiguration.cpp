/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/S3TablesConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

S3TablesConfiguration::S3TablesConfiguration(JsonView jsonValue) { *this = jsonValue; }

S3TablesConfiguration& S3TablesConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EncryptionConfiguration")) {
    m_encryptionConfiguration = jsonValue.GetObject("EncryptionConfiguration");
    m_encryptionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TablesConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
