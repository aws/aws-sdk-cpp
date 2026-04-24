/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Information about a daemon deployment rollback.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonRollback">AWS
 * API Reference</a></p>
 */
class DaemonRollback {
 public:
  AWS_ECS_API DaemonRollback() = default;
  AWS_ECS_API DaemonRollback(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonRollback& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason the rollback happened. For example, the circuit breaker initiated
   * the rollback operation.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  DaemonRollback& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time that the rollback started. The format is yyyy-MM-dd
   * HH:mm:ss.SSSSSS.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  DaemonRollback& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the daemon revision deployed as part of the rollback.</p>
   */
  inline const Aws::String& GetRollbackTargetDaemonRevisionArn() const { return m_rollbackTargetDaemonRevisionArn; }
  inline bool RollbackTargetDaemonRevisionArnHasBeenSet() const { return m_rollbackTargetDaemonRevisionArnHasBeenSet; }
  template <typename RollbackTargetDaemonRevisionArnT = Aws::String>
  void SetRollbackTargetDaemonRevisionArn(RollbackTargetDaemonRevisionArnT&& value) {
    m_rollbackTargetDaemonRevisionArnHasBeenSet = true;
    m_rollbackTargetDaemonRevisionArn = std::forward<RollbackTargetDaemonRevisionArnT>(value);
  }
  template <typename RollbackTargetDaemonRevisionArnT = Aws::String>
  DaemonRollback& WithRollbackTargetDaemonRevisionArn(RollbackTargetDaemonRevisionArnT&& value) {
    SetRollbackTargetDaemonRevisionArn(std::forward<RollbackTargetDaemonRevisionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity providers involved in the rollback.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRollbackCapacityProviders() const { return m_rollbackCapacityProviders; }
  inline bool RollbackCapacityProvidersHasBeenSet() const { return m_rollbackCapacityProvidersHasBeenSet; }
  template <typename RollbackCapacityProvidersT = Aws::Vector<Aws::String>>
  void SetRollbackCapacityProviders(RollbackCapacityProvidersT&& value) {
    m_rollbackCapacityProvidersHasBeenSet = true;
    m_rollbackCapacityProviders = std::forward<RollbackCapacityProvidersT>(value);
  }
  template <typename RollbackCapacityProvidersT = Aws::Vector<Aws::String>>
  DaemonRollback& WithRollbackCapacityProviders(RollbackCapacityProvidersT&& value) {
    SetRollbackCapacityProviders(std::forward<RollbackCapacityProvidersT>(value));
    return *this;
  }
  template <typename RollbackCapacityProvidersT = Aws::String>
  DaemonRollback& AddRollbackCapacityProviders(RollbackCapacityProvidersT&& value) {
    m_rollbackCapacityProvidersHasBeenSet = true;
    m_rollbackCapacityProviders.emplace_back(std::forward<RollbackCapacityProvidersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reason;

  Aws::Utils::DateTime m_startedAt{};

  Aws::String m_rollbackTargetDaemonRevisionArn;

  Aws::Vector<Aws::String> m_rollbackCapacityProviders;
  bool m_reasonHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_rollbackTargetDaemonRevisionArnHasBeenSet = false;
  bool m_rollbackCapacityProvidersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
