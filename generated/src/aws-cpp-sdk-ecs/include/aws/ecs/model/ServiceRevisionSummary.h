/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The information about the number of requested, pending, and running tasks for
 * a service revision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceRevisionSummary">AWS
 * API Reference</a></p>
 */
class ServiceRevisionSummary {
 public:
  AWS_ECS_API ServiceRevisionSummary() = default;
  AWS_ECS_API ServiceRevisionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ServiceRevisionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the service revision.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ServiceRevisionSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of requested tasks for the service revision.</p>
   */
  inline int GetRequestedTaskCount() const { return m_requestedTaskCount; }
  inline bool RequestedTaskCountHasBeenSet() const { return m_requestedTaskCountHasBeenSet; }
  inline void SetRequestedTaskCount(int value) {
    m_requestedTaskCountHasBeenSet = true;
    m_requestedTaskCount = value;
  }
  inline ServiceRevisionSummary& WithRequestedTaskCount(int value) {
    SetRequestedTaskCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of running tasks for the service revision.</p>
   */
  inline int GetRunningTaskCount() const { return m_runningTaskCount; }
  inline bool RunningTaskCountHasBeenSet() const { return m_runningTaskCountHasBeenSet; }
  inline void SetRunningTaskCount(int value) {
    m_runningTaskCountHasBeenSet = true;
    m_runningTaskCount = value;
  }
  inline ServiceRevisionSummary& WithRunningTaskCount(int value) {
    SetRunningTaskCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of pending tasks for the service revision.</p>
   */
  inline int GetPendingTaskCount() const { return m_pendingTaskCount; }
  inline bool PendingTaskCountHasBeenSet() const { return m_pendingTaskCountHasBeenSet; }
  inline void SetPendingTaskCount(int value) {
    m_pendingTaskCountHasBeenSet = true;
    m_pendingTaskCount = value;
  }
  inline ServiceRevisionSummary& WithPendingTaskCount(int value) {
    SetPendingTaskCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of test traffic that is directed to this service revision.
   * This value represents a snapshot of the traffic distribution and may not reflect
   * real-time changes during active deployments. Valid values are 0.0 to 100.0.</p>
   */
  inline double GetRequestedTestTrafficWeight() const { return m_requestedTestTrafficWeight; }
  inline bool RequestedTestTrafficWeightHasBeenSet() const { return m_requestedTestTrafficWeightHasBeenSet; }
  inline void SetRequestedTestTrafficWeight(double value) {
    m_requestedTestTrafficWeightHasBeenSet = true;
    m_requestedTestTrafficWeight = value;
  }
  inline ServiceRevisionSummary& WithRequestedTestTrafficWeight(double value) {
    SetRequestedTestTrafficWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of production traffic that is directed to this service
   * revision. This value represents a snapshot of the traffic distribution and may
   * not reflect real-time changes during active deployments. Valid values are 0.0 to
   * 100.0.</p>
   */
  inline double GetRequestedProductionTrafficWeight() const { return m_requestedProductionTrafficWeight; }
  inline bool RequestedProductionTrafficWeightHasBeenSet() const { return m_requestedProductionTrafficWeightHasBeenSet; }
  inline void SetRequestedProductionTrafficWeight(double value) {
    m_requestedProductionTrafficWeightHasBeenSet = true;
    m_requestedProductionTrafficWeight = value;
  }
  inline ServiceRevisionSummary& WithRequestedProductionTrafficWeight(double value) {
    SetRequestedProductionTrafficWeight(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  int m_requestedTaskCount{0};

  int m_runningTaskCount{0};

  int m_pendingTaskCount{0};

  double m_requestedTestTrafficWeight{0.0};

  double m_requestedProductionTrafficWeight{0.0};
  bool m_arnHasBeenSet = false;
  bool m_requestedTaskCountHasBeenSet = false;
  bool m_runningTaskCountHasBeenSet = false;
  bool m_pendingTaskCountHasBeenSet = false;
  bool m_requestedTestTrafficWeightHasBeenSet = false;
  bool m_requestedProductionTrafficWeightHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
