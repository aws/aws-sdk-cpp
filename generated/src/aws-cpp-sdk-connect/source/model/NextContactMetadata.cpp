/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NextContactMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

NextContactMetadata::NextContactMetadata(JsonView jsonValue) { *this = jsonValue; }

NextContactMetadata& NextContactMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuickConnectContactData")) {
    m_quickConnectContactData = jsonValue.GetObject("QuickConnectContactData");
    m_quickConnectContactDataHasBeenSet = true;
  }
  return *this;
}

JsonValue NextContactMetadata::Jsonize() const {
  JsonValue payload;

  if (m_quickConnectContactDataHasBeenSet) {
    payload.WithObject("QuickConnectContactData", m_quickConnectContactData.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
