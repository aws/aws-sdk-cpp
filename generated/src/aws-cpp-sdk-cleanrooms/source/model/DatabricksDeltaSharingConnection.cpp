/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/DatabricksDeltaSharingConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

DatabricksDeltaSharingConnection::DatabricksDeltaSharingConnection(JsonView jsonValue) { *this = jsonValue; }

DatabricksDeltaSharingConnection& DatabricksDeltaSharingConnection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("deltaShareEndpoint")) {
    m_deltaShareEndpoint = jsonValue.GetString("deltaShareEndpoint");
    m_deltaShareEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shareName")) {
    m_shareName = jsonValue.GetString("shareName");
    m_shareNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabricksDeltaSharingConnection::Jsonize() const {
  JsonValue payload;

  if (m_deltaShareEndpointHasBeenSet) {
    payload.WithString("deltaShareEndpoint", m_deltaShareEndpoint);
  }

  if (m_shareNameHasBeenSet) {
    payload.WithString("shareName", m_shareName);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
