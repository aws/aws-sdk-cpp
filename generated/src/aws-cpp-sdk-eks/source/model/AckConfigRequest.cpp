/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/AckConfigRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

AckConfigRequest::AckConfigRequest(JsonView jsonValue) { *this = jsonValue; }

AckConfigRequest& AckConfigRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableCrossNamespace")) {
    m_enableCrossNamespace = jsonValue.GetBool("enableCrossNamespace");
    m_enableCrossNamespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disabledServices")) {
    Aws::Utils::Array<JsonView> disabledServicesJsonList = jsonValue.GetArray("disabledServices");
    for (unsigned disabledServicesIndex = 0; disabledServicesIndex < disabledServicesJsonList.GetLength(); ++disabledServicesIndex) {
      m_disabledServices.push_back(disabledServicesJsonList[disabledServicesIndex].AsString());
    }
    m_disabledServicesHasBeenSet = true;
  }
  return *this;
}

JsonValue AckConfigRequest::Jsonize() const {
  JsonValue payload;

  if (m_enableCrossNamespaceHasBeenSet) {
    payload.WithBool("enableCrossNamespace", m_enableCrossNamespace);
  }

  if (m_disabledServicesHasBeenSet) {
    Aws::Utils::Array<JsonValue> disabledServicesJsonList(m_disabledServices.size());
    for (unsigned disabledServicesIndex = 0; disabledServicesIndex < disabledServicesJsonList.GetLength(); ++disabledServicesIndex) {
      disabledServicesJsonList[disabledServicesIndex].AsString(m_disabledServices[disabledServicesIndex]);
    }
    payload.WithArray("disabledServices", std::move(disabledServicesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
