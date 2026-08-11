/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/KubeControllerManagerConfigRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

KubeControllerManagerConfigRequest::KubeControllerManagerConfigRequest(JsonView jsonValue) { *this = jsonValue; }

KubeControllerManagerConfigRequest& KubeControllerManagerConfigRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("horizontalPodAutoscalerControllerConfig")) {
    m_horizontalPodAutoscalerControllerConfig = jsonValue.GetObject("horizontalPodAutoscalerControllerConfig");
    m_horizontalPodAutoscalerControllerConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue KubeControllerManagerConfigRequest::Jsonize() const {
  JsonValue payload;

  if (m_horizontalPodAutoscalerControllerConfigHasBeenSet) {
    payload.WithObject("horizontalPodAutoscalerControllerConfig", m_horizontalPodAutoscalerControllerConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
