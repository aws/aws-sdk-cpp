/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dsql/model/MetricGroupResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {

MetricGroupResponse::MetricGroupResponse(JsonView jsonValue) { *this = jsonValue; }

MetricGroupResponse& MetricGroupResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metricGroup")) {
    m_metricGroup = MetricGroupMapper::GetMetricGroupForName(jsonValue.GetString("metricGroup"));
    m_metricGroupHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricGroupResponse::Jsonize() const {
  JsonValue payload;

  if (m_metricGroupHasBeenSet) {
    payload.WithString("metricGroup", MetricGroupMapper::GetNameForMetricGroup(m_metricGroup));
  }

  return payload;
}

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
