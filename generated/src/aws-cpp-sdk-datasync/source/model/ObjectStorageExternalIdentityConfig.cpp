/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datasync/model/ObjectStorageExternalIdentityConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

ObjectStorageExternalIdentityConfig::ObjectStorageExternalIdentityConfig(JsonView jsonValue) { *this = jsonValue; }

ObjectStorageExternalIdentityConfig& ObjectStorageExternalIdentityConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("GoogleOidc")) {
    m_googleOidc = jsonValue.GetObject("GoogleOidc");
    m_googleOidcHasBeenSet = true;
  }
  return *this;
}

JsonValue ObjectStorageExternalIdentityConfig::Jsonize() const {
  JsonValue payload;

  if (m_googleOidcHasBeenSet) {
    payload.WithObject("GoogleOidc", m_googleOidc.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws
