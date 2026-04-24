/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ItemDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ItemDetails::ItemDetails(JsonView jsonValue) { *this = jsonValue; }

ItemDetails& ItemDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resourceArn")) {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("itemPath")) {
    m_itemPath = jsonValue.GetString("itemPath");
    m_itemPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hash")) {
    m_hash = jsonValue.GetString("hash");
    m_hashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalInfo")) {
    m_additionalInfo = jsonValue.GetObject("additionalInfo");
    m_additionalInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue ItemDetails::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("resourceArn", m_resourceArn);
  }

  if (m_itemPathHasBeenSet) {
    payload.WithString("itemPath", m_itemPath);
  }

  if (m_hashHasBeenSet) {
    payload.WithString("hash", m_hash);
  }

  if (m_additionalInfoHasBeenSet) {
    payload.WithObject("additionalInfo", m_additionalInfo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
