/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/HorizontalPodAutoscalerControllerConfigRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

HorizontalPodAutoscalerControllerConfigRequest::HorizontalPodAutoscalerControllerConfigRequest(JsonView jsonValue) { *this = jsonValue; }

HorizontalPodAutoscalerControllerConfigRequest& HorizontalPodAutoscalerControllerConfigRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("horizontalPodAutoscalerSyncPeriod")) {
    m_horizontalPodAutoscalerSyncPeriod = jsonValue.GetString("horizontalPodAutoscalerSyncPeriod");
    m_horizontalPodAutoscalerSyncPeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue HorizontalPodAutoscalerControllerConfigRequest::Jsonize() const {
  JsonValue payload;

  if (m_horizontalPodAutoscalerSyncPeriodHasBeenSet) {
    payload.WithString("horizontalPodAutoscalerSyncPeriod", m_horizontalPodAutoscalerSyncPeriod);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
