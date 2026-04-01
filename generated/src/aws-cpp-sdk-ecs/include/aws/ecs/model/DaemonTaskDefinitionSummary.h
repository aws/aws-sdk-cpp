/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonTaskDefinitionStatus.h>

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
 * <p>A summary of a daemon task definition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonTaskDefinitionSummary">AWS
 * API Reference</a></p>
 */
class DaemonTaskDefinitionSummary {
 public:
  AWS_ECS_API DaemonTaskDefinitionSummary() = default;
  AWS_ECS_API DaemonTaskDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonTaskDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon task definition.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DaemonTaskDefinitionSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon task definition was
   * registered.</p>
   */
  inline const Aws::Utils::DateTime& GetRegisteredAt() const { return m_registeredAt; }
  inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
  template <typename RegisteredAtT = Aws::Utils::DateTime>
  void SetRegisteredAt(RegisteredAtT&& value) {
    m_registeredAtHasBeenSet = true;
    m_registeredAt = std::forward<RegisteredAtT>(value);
  }
  template <typename RegisteredAtT = Aws::Utils::DateTime>
  DaemonTaskDefinitionSummary& WithRegisteredAt(RegisteredAtT&& value) {
    SetRegisteredAt(std::forward<RegisteredAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal that registered the daemon task definition.</p>
   */
  inline const Aws::String& GetRegisteredBy() const { return m_registeredBy; }
  inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }
  template <typename RegisteredByT = Aws::String>
  void SetRegisteredBy(RegisteredByT&& value) {
    m_registeredByHasBeenSet = true;
    m_registeredBy = std::forward<RegisteredByT>(value);
  }
  template <typename RegisteredByT = Aws::String>
  DaemonTaskDefinitionSummary& WithRegisteredBy(RegisteredByT&& value) {
    SetRegisteredBy(std::forward<RegisteredByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon task definition delete was
   * requested.</p>
   */
  inline const Aws::Utils::DateTime& GetDeleteRequestedAt() const { return m_deleteRequestedAt; }
  inline bool DeleteRequestedAtHasBeenSet() const { return m_deleteRequestedAtHasBeenSet; }
  template <typename DeleteRequestedAtT = Aws::Utils::DateTime>
  void SetDeleteRequestedAt(DeleteRequestedAtT&& value) {
    m_deleteRequestedAtHasBeenSet = true;
    m_deleteRequestedAt = std::forward<DeleteRequestedAtT>(value);
  }
  template <typename DeleteRequestedAtT = Aws::Utils::DateTime>
  DaemonTaskDefinitionSummary& WithDeleteRequestedAt(DeleteRequestedAtT&& value) {
    SetDeleteRequestedAt(std::forward<DeleteRequestedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the daemon task definition.</p>
   */
  inline DaemonTaskDefinitionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DaemonTaskDefinitionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DaemonTaskDefinitionSummary& WithStatus(DaemonTaskDefinitionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::Utils::DateTime m_registeredAt{};

  Aws::String m_registeredBy;

  Aws::Utils::DateTime m_deleteRequestedAt{};

  DaemonTaskDefinitionStatus m_status{DaemonTaskDefinitionStatus::NOT_SET};
  bool m_arnHasBeenSet = false;
  bool m_registeredAtHasBeenSet = false;
  bool m_registeredByHasBeenSet = false;
  bool m_deleteRequestedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
