/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/model/IdentityStore.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {

IdentityStore::IdentityStore(JsonView jsonValue) { *this = jsonValue; }

IdentityStore& IdentityStore::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IdentityStoreId")) {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IdentityStoreArn")) {
    m_identityStoreArn = jsonValue.GetString("IdentityStoreArn");
    m_identityStoreArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityStore::Jsonize() const {
  JsonValue payload;

  if (m_identityStoreIdHasBeenSet) {
    payload.WithString("IdentityStoreId", m_identityStoreId);
  }

  if (m_identityStoreArnHasBeenSet) {
    payload.WithString("IdentityStoreArn", m_identityStoreArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
