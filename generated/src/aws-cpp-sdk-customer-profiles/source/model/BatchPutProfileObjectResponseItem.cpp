/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/BatchPutProfileObjectResponseItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

BatchPutProfileObjectResponseItem::BatchPutProfileObjectResponseItem(JsonView jsonValue) { *this = jsonValue; }

BatchPutProfileObjectResponseItem& BatchPutProfileObjectResponseItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProfileObjectUniqueKey")) {
    m_profileObjectUniqueKey = jsonValue.GetString("ProfileObjectUniqueKey");
    m_profileObjectUniqueKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchPutProfileObjectResponseItem::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_profileObjectUniqueKeyHasBeenSet) {
    payload.WithString("ProfileObjectUniqueKey", m_profileObjectUniqueKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
