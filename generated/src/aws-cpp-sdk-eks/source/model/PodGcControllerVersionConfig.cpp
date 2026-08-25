/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/PodGcControllerVersionConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

PodGcControllerVersionConfig::PodGcControllerVersionConfig(JsonView jsonValue) { *this = jsonValue; }

PodGcControllerVersionConfig& PodGcControllerVersionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("terminatedPodGcThreshold")) {
    m_terminatedPodGcThreshold = jsonValue.GetObject("terminatedPodGcThreshold");
    m_terminatedPodGcThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue PodGcControllerVersionConfig::Jsonize() const {
  JsonValue payload;

  if (m_terminatedPodGcThresholdHasBeenSet) {
    payload.WithObject("terminatedPodGcThreshold", m_terminatedPodGcThreshold.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
