/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ControlPlaneConfigInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ControlPlaneConfigInfo::ControlPlaneConfigInfo(JsonView jsonValue) { *this = jsonValue; }

ControlPlaneConfigInfo& ControlPlaneConfigInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kubeApiServerConfig")) {
    m_kubeApiServerConfig = jsonValue.GetObject("kubeApiServerConfig");
    m_kubeApiServerConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kubeSchedulerConfig")) {
    m_kubeSchedulerConfig = jsonValue.GetObject("kubeSchedulerConfig");
    m_kubeSchedulerConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kubeControllerManagerConfig")) {
    m_kubeControllerManagerConfig = jsonValue.GetObject("kubeControllerManagerConfig");
    m_kubeControllerManagerConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlPlaneConfigInfo::Jsonize() const {
  JsonValue payload;

  if (m_kubeApiServerConfigHasBeenSet) {
    payload.WithObject("kubeApiServerConfig", m_kubeApiServerConfig.Jsonize());
  }

  if (m_kubeSchedulerConfigHasBeenSet) {
    payload.WithObject("kubeSchedulerConfig", m_kubeSchedulerConfig.Jsonize());
  }

  if (m_kubeControllerManagerConfigHasBeenSet) {
    payload.WithObject("kubeControllerManagerConfig", m_kubeControllerManagerConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
