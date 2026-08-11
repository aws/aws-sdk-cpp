/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/KubeSchedulerConfigRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

KubeSchedulerConfigRequest::KubeSchedulerConfigRequest(JsonView jsonValue) { *this = jsonValue; }

KubeSchedulerConfigRequest& KubeSchedulerConfigRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("nodeResourcesFit")) {
    m_nodeResourcesFit = jsonValue.GetObject("nodeResourcesFit");
    m_nodeResourcesFitHasBeenSet = true;
  }
  return *this;
}

JsonValue KubeSchedulerConfigRequest::Jsonize() const {
  JsonValue payload;

  if (m_nodeResourcesFitHasBeenSet) {
    payload.WithObject("nodeResourcesFit", m_nodeResourcesFit.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
