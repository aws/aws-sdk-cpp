/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/ClusterOperationV2Serverless.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

ClusterOperationV2Serverless::ClusterOperationV2Serverless(JsonView jsonValue) { *this = jsonValue; }

ClusterOperationV2Serverless& ClusterOperationV2Serverless::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceClusterInfo")) {
    m_sourceClusterInfo = jsonValue.GetObject("sourceClusterInfo");
    m_sourceClusterInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetClusterInfo")) {
    m_targetClusterInfo = jsonValue.GetObject("targetClusterInfo");
    m_targetClusterInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcConnectionInfo")) {
    m_vpcConnectionInfo = jsonValue.GetObject("vpcConnectionInfo");
    m_vpcConnectionInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterOperationV2Serverless::Jsonize() const {
  JsonValue payload;

  if (m_sourceClusterInfoHasBeenSet) {
    payload.WithObject("sourceClusterInfo", m_sourceClusterInfo.Jsonize());
  }

  if (m_targetClusterInfoHasBeenSet) {
    payload.WithObject("targetClusterInfo", m_targetClusterInfo.Jsonize());
  }

  if (m_vpcConnectionInfoHasBeenSet) {
    payload.WithObject("vpcConnectionInfo", m_vpcConnectionInfo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
