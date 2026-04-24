/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ContentRedirection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

ContentRedirection::ContentRedirection(JsonView jsonValue) { *this = jsonValue; }

ContentRedirection& ContentRedirection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("HostToClient")) {
    m_hostToClient = jsonValue.GetObject("HostToClient");
    m_hostToClientHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentRedirection::Jsonize() const {
  JsonValue payload;

  if (m_hostToClientHasBeenSet) {
    payload.WithObject("HostToClient", m_hostToClient.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
