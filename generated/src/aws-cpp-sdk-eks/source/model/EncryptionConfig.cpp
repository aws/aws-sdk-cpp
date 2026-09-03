/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/EncryptionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

EncryptionConfig::EncryptionConfig(JsonView jsonValue) { *this = jsonValue; }

EncryptionConfig& EncryptionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("provider")) {
    m_provider = jsonValue.GetObject("provider");
    m_providerHasBeenSet = true;
  }
  return *this;
}

JsonValue EncryptionConfig::Jsonize() const {
  JsonValue payload;

  if (m_providerHasBeenSet) {
    payload.WithObject("provider", m_provider.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
