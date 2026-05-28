/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/BatchPutProfileObjectRequestItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

BatchPutProfileObjectRequestItem::BatchPutProfileObjectRequestItem(JsonView jsonValue) { *this = jsonValue; }

BatchPutProfileObjectRequestItem& BatchPutProfileObjectRequestItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Object")) {
    m_object = jsonValue.GetString("Object");
    m_objectHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchPutProfileObjectRequestItem::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_objectHasBeenSet) {
    payload.WithString("Object", m_object);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
