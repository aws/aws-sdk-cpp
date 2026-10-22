/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ScheduleActionError.h>
#include <aws/elementalinference/model/ScheduleActionOperation.h>
#include <aws/elementalinference/model/ScheduleActionStartConfiguration.h>
#include <aws/elementalinference/model/ScheduleActionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Describes one schedule action on a feed, including the changes it makes and
 * whether it has run yet. Elemental Inference returns this structure in the
 * ListScheduleActions operation. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ScheduleAction">AWS
 * API Reference</a></p>
 */
class ScheduleAction {
 public:
  AWS_ELEMENTALINFERENCE_API ScheduleAction() = default;
  AWS_ELEMENTALINFERENCE_API ScheduleAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ScheduleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the schedule action. The name is unique within the feed.</p>
   */
  inline const Aws::String& GetActionName() const { return m_actionName; }
  inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
  template <typename ActionNameT = Aws::String>
  void SetActionName(ActionNameT&& value) {
    m_actionNameHasBeenSet = true;
    m_actionName = std::forward<ActionNameT>(value);
  }
  template <typename ActionNameT = Aws::String>
  ScheduleAction& WithActionName(ActionNameT&& value) {
    SetActionName(std::forward<ActionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies when the action runs.</p>
   */
  inline const ScheduleActionStartConfiguration& GetStartConfiguration() const { return m_startConfiguration; }
  inline bool StartConfigurationHasBeenSet() const { return m_startConfigurationHasBeenSet; }
  template <typename StartConfigurationT = ScheduleActionStartConfiguration>
  void SetStartConfiguration(StartConfigurationT&& value) {
    m_startConfigurationHasBeenSet = true;
    m_startConfiguration = std::forward<StartConfigurationT>(value);
  }
  template <typename StartConfigurationT = ScheduleActionStartConfiguration>
  ScheduleAction& WithStartConfiguration(StartConfigurationT&& value) {
    SetStartConfiguration(std::forward<StartConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration changes that the action makes to the feed.</p>
   */
  inline const Aws::Vector<ScheduleActionOperation>& GetOperations() const { return m_operations; }
  inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
  template <typename OperationsT = Aws::Vector<ScheduleActionOperation>>
  void SetOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations = std::forward<OperationsT>(value);
  }
  template <typename OperationsT = Aws::Vector<ScheduleActionOperation>>
  ScheduleAction& WithOperations(OperationsT&& value) {
    SetOperations(std::forward<OperationsT>(value));
    return *this;
  }
  template <typename OperationsT = ScheduleActionOperation>
  ScheduleAction& AddOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations.emplace_back(std::forward<OperationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the action. Valid values are the following:</p> <dl>
   * <dt>PENDING</dt> <dd> <p>The action is waiting for its scheduled time.</p> </dd>
   * <dt>COMPLETED</dt> <dd> <p>Elemental Inference applied all the action's
   * operations to the feed.</p> </dd> <dt>FAILED</dt> <dd> <p>Elemental Inference
   * couldn't apply the action.</p> </dd> </dl>
   */
  inline ScheduleActionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ScheduleActionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ScheduleAction& WithStatus(ScheduleActionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of why the action failed. Elemental Inference returns this
   * property only when the status is FAILED. </p>
   */
  inline const ScheduleActionError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = ScheduleActionError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ScheduleActionError>
  ScheduleAction& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_actionName;

  ScheduleActionStartConfiguration m_startConfiguration;

  Aws::Vector<ScheduleActionOperation> m_operations;

  ScheduleActionStatus m_status{ScheduleActionStatus::NOT_SET};

  ScheduleActionError m_error;
  bool m_actionNameHasBeenSet = false;
  bool m_startConfigurationHasBeenSet = false;
  bool m_operationsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
