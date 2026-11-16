/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/model/MetricGroup.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DSQL {
namespace Model {

/**
 * <p>A metric group that you enabled for advanced monitoring on a
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/MetricGroupResponse">AWS
 * API Reference</a></p>
 */
class MetricGroupResponse {
 public:
  AWS_DSQL_API MetricGroupResponse() = default;
  AWS_DSQL_API MetricGroupResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API MetricGroupResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DSQL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the metric group that you enabled.</p>
   */
  inline MetricGroup GetMetricGroup() const { return m_metricGroup; }
  inline bool MetricGroupHasBeenSet() const { return m_metricGroupHasBeenSet; }
  inline void SetMetricGroup(MetricGroup value) {
    m_metricGroupHasBeenSet = true;
    m_metricGroup = value;
  }
  inline MetricGroupResponse& WithMetricGroup(MetricGroup value) {
    SetMetricGroup(value);
    return *this;
  }
  ///@}
 private:
  MetricGroup m_metricGroup{MetricGroup::NOT_SET};
  bool m_metricGroupHasBeenSet = false;
};

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
