/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/PublicCertificateAuthority.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

PublicCertificateAuthority::PublicCertificateAuthority(JsonView jsonValue) { *this = jsonValue; }

PublicCertificateAuthority& PublicCertificateAuthority::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AllowedKeyAlgorithms")) {
    Aws::Utils::Array<JsonView> allowedKeyAlgorithmsJsonList = jsonValue.GetArray("AllowedKeyAlgorithms");
    for (unsigned allowedKeyAlgorithmsIndex = 0; allowedKeyAlgorithmsIndex < allowedKeyAlgorithmsJsonList.GetLength();
         ++allowedKeyAlgorithmsIndex) {
      m_allowedKeyAlgorithms.push_back(
          PublicKeyAlgorithmMapper::GetPublicKeyAlgorithmForName(allowedKeyAlgorithmsJsonList[allowedKeyAlgorithmsIndex].AsString()));
    }
    m_allowedKeyAlgorithmsHasBeenSet = true;
  }
  return *this;
}

JsonValue PublicCertificateAuthority::Jsonize() const {
  JsonValue payload;

  if (m_allowedKeyAlgorithmsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedKeyAlgorithmsJsonList(m_allowedKeyAlgorithms.size());
    for (unsigned allowedKeyAlgorithmsIndex = 0; allowedKeyAlgorithmsIndex < allowedKeyAlgorithmsJsonList.GetLength();
         ++allowedKeyAlgorithmsIndex) {
      allowedKeyAlgorithmsJsonList[allowedKeyAlgorithmsIndex].AsString(
          PublicKeyAlgorithmMapper::GetNameForPublicKeyAlgorithm(m_allowedKeyAlgorithms[allowedKeyAlgorithmsIndex]));
    }
    payload.WithArray("AllowedKeyAlgorithms", std::move(allowedKeyAlgorithmsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
