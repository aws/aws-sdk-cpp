/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RestorePreviewType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

RestorePreviewType::RestorePreviewType(JsonView jsonValue) { *this = jsonValue; }

RestorePreviewType& RestorePreviewType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Entity")) {
    m_entity = jsonValue.GetString("Entity");
    m_entityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateCount")) {
    m_createCount = jsonValue.GetInt64("CreateCount");
    m_createCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdateCount")) {
    m_updateCount = jsonValue.GetInt64("UpdateCount");
    m_updateCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeleteCount")) {
    m_deleteCount = jsonValue.GetInt64("DeleteCount");
    m_deleteCountHasBeenSet = true;
  }
  return *this;
}

JsonValue RestorePreviewType::Jsonize() const {
  JsonValue payload;

  if (m_entityHasBeenSet) {
    payload.WithString("Entity", m_entity);
  }

  if (m_createCountHasBeenSet) {
    payload.WithInt64("CreateCount", m_createCount);
  }

  if (m_updateCountHasBeenSet) {
    payload.WithInt64("UpdateCount", m_updateCount);
  }

  if (m_deleteCountHasBeenSet) {
    payload.WithInt64("DeleteCount", m_deleteCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
