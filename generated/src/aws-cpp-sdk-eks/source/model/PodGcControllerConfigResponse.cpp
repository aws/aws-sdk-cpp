/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/PodGcControllerConfigResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

PodGcControllerConfigResponse::PodGcControllerConfigResponse(JsonView jsonValue) { *this = jsonValue; }

PodGcControllerConfigResponse& PodGcControllerConfigResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("terminatedPodGcThreshold")) {
    m_terminatedPodGcThreshold = jsonValue.GetInteger("terminatedPodGcThreshold");
    m_terminatedPodGcThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue PodGcControllerConfigResponse::Jsonize() const {
  JsonValue payload;

  if (m_terminatedPodGcThresholdHasBeenSet) {
    payload.WithInteger("terminatedPodGcThreshold", m_terminatedPodGcThreshold);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
