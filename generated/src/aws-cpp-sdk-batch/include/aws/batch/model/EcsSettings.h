/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/ContainerInsights.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The Amazon ECS settings for a compute environment, including the CloudWatch
 * Container Insights mode. Use this structure with
 * <code>CreateComputeEnvironment</code> and
 * <code>UpdateComputeEnvironment</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EcsSettings">AWS
 * API Reference</a></p>
 */
class EcsSettings {
 public:
  AWS_BATCH_API EcsSettings() = default;
  AWS_BATCH_API EcsSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API EcsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the CloudWatch Container Insights mode for the compute environment.
   * Valid values are:</p> <dl> <dt>ENABLED</dt> <dd> <p>Turns on standard Container
   * Insights, which collects CPU, memory, disk, and network utilization metrics for
   * the compute environment.</p> </dd> <dt>ENHANCED</dt> <dd> <p>Turns on enhanced
   * Container Insights, which collects the standard metrics along with additional
   * per-task observability metrics.</p> </dd> <dt>DISABLED</dt> <dd> <p>Turns off
   * Container Insights for the compute environment.</p> </dd> </dl> <p>If you don't
   * specify a value, the default is <code>DISABLED</code>. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/cloudwatch-container-insights.html">Container
   * Insights</a> in the <i>Batch User Guide</i>.</p>
   */
  inline ContainerInsights GetContainerInsights() const { return m_containerInsights; }
  inline bool ContainerInsightsHasBeenSet() const { return m_containerInsightsHasBeenSet; }
  inline void SetContainerInsights(ContainerInsights value) {
    m_containerInsightsHasBeenSet = true;
    m_containerInsights = value;
  }
  inline EcsSettings& WithContainerInsights(ContainerInsights value) {
    SetContainerInsights(value);
    return *this;
  }
  ///@}
 private:
  ContainerInsights m_containerInsights{ContainerInsights::NOT_SET};
  bool m_containerInsightsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
