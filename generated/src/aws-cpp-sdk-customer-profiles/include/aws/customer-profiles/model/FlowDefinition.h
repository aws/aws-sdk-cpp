/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/SourceFlowConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/model/TriggerConfig.h>
#include <aws/customer-profiles/model/Task.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The configurations that control how Customer Profiles retrieves data from the
   * source, Amazon AppFlow. Customer Profiles uses this information to create an
   * AppFlow flow on behalf of customers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/FlowDefinition">AWS
   * API Reference</a></p>
   */
  class FlowDefinition
  {
  public:
    AWS_CUSTOMERPROFILES_API FlowDefinition() = default;
    AWS_CUSTOMERPROFILES_API FlowDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API FlowDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FlowDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline const Aws::String& GetFlowName() const { return m_flowName; }
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
    template<typename FlowNameT = Aws::String>
    void SetFlowName(FlowNameT&& value) { m_flowNameHasBeenSet = true; m_flowName = std::forward<FlowNameT>(value); }
    template<typename FlowNameT = Aws::String>
    FlowDefinition& WithFlowName(FlowNameT&& value) { SetFlowName(std::forward<FlowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline const Aws::String& GetKmsArn() const { return m_kmsArn; }
    inline bool KmsArnHasBeenSet() const { return m_kmsArnHasBeenSet; }
    template<typename KmsArnT = Aws::String>
    void SetKmsArn(KmsArnT&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::forward<KmsArnT>(value); }
    template<typename KmsArnT = Aws::String>
    FlowDefinition& WithKmsArn(KmsArnT&& value) { SetKmsArn(std::forward<KmsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline const SourceFlowConfig& GetSourceFlowConfig() const { return m_sourceFlowConfig; }
    inline bool SourceFlowConfigHasBeenSet() const { return m_sourceFlowConfigHasBeenSet; }
    template<typename SourceFlowConfigT = SourceFlowConfig>
    void SetSourceFlowConfig(SourceFlowConfigT&& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = std::forward<SourceFlowConfigT>(value); }
    template<typename SourceFlowConfigT = SourceFlowConfig>
    FlowDefinition& WithSourceFlowConfig(SourceFlowConfigT&& value) { SetSourceFlowConfig(std::forward<SourceFlowConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline const Aws::Vector<Task>& GetTasks() const { return m_tasks; }
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }
    template<typename TasksT = Aws::Vector<Task>>
    void SetTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks = std::forward<TasksT>(value); }
    template<typename TasksT = Aws::Vector<Task>>
    FlowDefinition& WithTasks(TasksT&& value) { SetTasks(std::forward<TasksT>(value)); return *this;}
    template<typename TasksT = Task>
    FlowDefinition& AddTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks.emplace_back(std::forward<TasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The trigger settings that determine how and when the flow runs.</p>
     */
    inline const TriggerConfig& GetTriggerConfig() const { return m_triggerConfig; }
    inline bool TriggerConfigHasBeenSet() const { return m_triggerConfigHasBeenSet; }
    template<typename TriggerConfigT = TriggerConfig>
    void SetTriggerConfig(TriggerConfigT&& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = std::forward<TriggerConfigT>(value); }
    template<typename TriggerConfigT = TriggerConfig>
    FlowDefinition& WithTriggerConfig(TriggerConfigT&& value) { SetTriggerConfig(std::forward<TriggerConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Aws::String m_kmsArn;
    bool m_kmsArnHasBeenSet = false;

    SourceFlowConfig m_sourceFlowConfig;
    bool m_sourceFlowConfigHasBeenSet = false;

    Aws::Vector<Task> m_tasks;
    bool m_tasksHasBeenSet = false;

    TriggerConfig m_triggerConfig;
    bool m_triggerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
