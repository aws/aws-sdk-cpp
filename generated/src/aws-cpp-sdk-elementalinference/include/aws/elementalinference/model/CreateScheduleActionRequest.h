/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ScheduleActionOperation.h>
#include <aws/elementalinference/model/ScheduleActionStartConfiguration.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class CreateScheduleActionRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API CreateScheduleActionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateScheduleAction"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Specifies the ID of the feed that you want to add the schedule action to.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateScheduleActionRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name for the schedule action. The name must be unique within the feed. You
   * can reuse the name of an action that you deleted. </p>
   */
  inline const Aws::String& GetActionName() const { return m_actionName; }
  inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
  template <typename ActionNameT = Aws::String>
  void SetActionName(ActionNameT&& value) {
    m_actionNameHasBeenSet = true;
    m_actionName = std::forward<ActionNameT>(value);
  }
  template <typename ActionNameT = Aws::String>
  CreateScheduleActionRequest& WithActionName(ActionNameT&& value) {
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
  CreateScheduleActionRequest& WithStartConfiguration(StartConfigurationT&& value) {
    SetStartConfiguration(std::forward<StartConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the list of configuration changes that you want to make to the
   * feed. Elemental Inference applies all the operations in an action together, in
   * the order that you specify them. If any operation fails, Elemental Inference
   * doesn't apply any of them. </p>
   */
  inline const Aws::Vector<ScheduleActionOperation>& GetOperations() const { return m_operations; }
  inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
  template <typename OperationsT = Aws::Vector<ScheduleActionOperation>>
  void SetOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations = std::forward<OperationsT>(value);
  }
  template <typename OperationsT = Aws::Vector<ScheduleActionOperation>>
  CreateScheduleActionRequest& WithOperations(OperationsT&& value) {
    SetOperations(std::forward<OperationsT>(value));
    return *this;
  }
  template <typename OperationsT = ScheduleActionOperation>
  CreateScheduleActionRequest& AddOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations.emplace_back(std::forward<OperationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_actionName;

  ScheduleActionStartConfiguration m_startConfiguration;

  Aws::Vector<ScheduleActionOperation> m_operations;
  bool m_idHasBeenSet = false;
  bool m_actionNameHasBeenSet = false;
  bool m_startConfigurationHasBeenSet = false;
  bool m_operationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
