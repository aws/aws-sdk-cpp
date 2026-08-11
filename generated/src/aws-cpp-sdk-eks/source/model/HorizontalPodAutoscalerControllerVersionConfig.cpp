/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/HorizontalPodAutoscalerControllerVersionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

HorizontalPodAutoscalerControllerVersionConfig::HorizontalPodAutoscalerControllerVersionConfig(JsonView jsonValue) { *this = jsonValue; }

HorizontalPodAutoscalerControllerVersionConfig& HorizontalPodAutoscalerControllerVersionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("horizontalPodAutoscalerSyncPeriod")) {
    m_horizontalPodAutoscalerSyncPeriod = jsonValue.GetObject("horizontalPodAutoscalerSyncPeriod");
    m_horizontalPodAutoscalerSyncPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue HorizontalPodAutoscalerControllerVersionConfig::Jsonize() const {
  JsonValue payload;

  if (m_horizontalPodAutoscalerSyncPeriodHasBeenSet) {
    payload.WithObject("horizontalPodAutoscalerSyncPeriod", m_horizontalPodAutoscalerSyncPeriod.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
