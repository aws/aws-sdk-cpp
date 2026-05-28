/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/BatchPutProfileObjectErrorItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

BatchPutProfileObjectErrorItem::BatchPutProfileObjectErrorItem(JsonView jsonValue) { *this = jsonValue; }

BatchPutProfileObjectErrorItem& BatchPutProfileObjectErrorItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Code")) {
    m_code = jsonValue.GetInteger("Code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchPutProfileObjectErrorItem::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_codeHasBeenSet) {
    payload.WithInteger("Code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
