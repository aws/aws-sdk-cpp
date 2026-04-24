/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ArgoCdNetworkAccessConfigRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ArgoCdNetworkAccessConfigRequest::ArgoCdNetworkAccessConfigRequest(JsonView jsonValue) { *this = jsonValue; }

ArgoCdNetworkAccessConfigRequest& ArgoCdNetworkAccessConfigRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vpceIds")) {
    Aws::Utils::Array<JsonView> vpceIdsJsonList = jsonValue.GetArray("vpceIds");
    for (unsigned vpceIdsIndex = 0; vpceIdsIndex < vpceIdsJsonList.GetLength(); ++vpceIdsIndex) {
      m_vpceIds.push_back(vpceIdsJsonList[vpceIdsIndex].AsString());
    }
    m_vpceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue ArgoCdNetworkAccessConfigRequest::Jsonize() const {
  JsonValue payload;

  if (m_vpceIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpceIdsJsonList(m_vpceIds.size());
    for (unsigned vpceIdsIndex = 0; vpceIdsIndex < vpceIdsJsonList.GetLength(); ++vpceIdsIndex) {
      vpceIdsJsonList[vpceIdsIndex].AsString(m_vpceIds[vpceIdsIndex]);
    }
    payload.WithArray("vpceIds", std::move(vpceIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
