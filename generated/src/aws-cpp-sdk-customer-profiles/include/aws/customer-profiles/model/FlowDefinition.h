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
    AWS_CUSTOMERPROFILES_API FlowDefinition();
    AWS_CUSTOMERPROFILES_API FlowDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API FlowDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline FlowDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline FlowDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the flow you want to create.</p>
     */
    inline FlowDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }

    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }

    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline void SetFlowName(const Aws::String& value) { m_flowNameHasBeenSet = true; m_flowName = value; }

    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline void SetFlowName(Aws::String&& value) { m_flowNameHasBeenSet = true; m_flowName = std::move(value); }

    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline void SetFlowName(const char* value) { m_flowNameHasBeenSet = true; m_flowName.assign(value); }

    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline FlowDefinition& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline FlowDefinition& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p>The specified name of the flow. Use underscores (_) or hyphens (-) only.
     * Spaces are not allowed.</p>
     */
    inline FlowDefinition& WithFlowName(const char* value) { SetFlowName(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline const Aws::String& GetKmsArn() const{ return m_kmsArn; }

    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline bool KmsArnHasBeenSet() const { return m_kmsArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline void SetKmsArn(const Aws::String& value) { m_kmsArnHasBeenSet = true; m_kmsArn = value; }

    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline void SetKmsArn(Aws::String&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline void SetKmsArn(const char* value) { m_kmsArnHasBeenSet = true; m_kmsArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline FlowDefinition& WithKmsArn(const Aws::String& value) { SetKmsArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline FlowDefinition& WithKmsArn(Aws::String&& value) { SetKmsArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the AWS Key Management Service (KMS) key you
     * provide for encryption.</p>
     */
    inline FlowDefinition& WithKmsArn(const char* value) { SetKmsArn(value); return *this;}


    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline const SourceFlowConfig& GetSourceFlowConfig() const{ return m_sourceFlowConfig; }

    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline bool SourceFlowConfigHasBeenSet() const { return m_sourceFlowConfigHasBeenSet; }

    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline void SetSourceFlowConfig(const SourceFlowConfig& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = value; }

    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline void SetSourceFlowConfig(SourceFlowConfig&& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = std::move(value); }

    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline FlowDefinition& WithSourceFlowConfig(const SourceFlowConfig& value) { SetSourceFlowConfig(value); return *this;}

    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline FlowDefinition& WithSourceFlowConfig(SourceFlowConfig&& value) { SetSourceFlowConfig(std::move(value)); return *this;}


    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline const Aws::Vector<Task>& GetTasks() const{ return m_tasks; }

    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }

    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline void SetTasks(const Aws::Vector<Task>& value) { m_tasksHasBeenSet = true; m_tasks = value; }

    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline void SetTasks(Aws::Vector<Task>&& value) { m_tasksHasBeenSet = true; m_tasks = std::move(value); }

    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline FlowDefinition& WithTasks(const Aws::Vector<Task>& value) { SetTasks(value); return *this;}

    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline FlowDefinition& WithTasks(Aws::Vector<Task>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline FlowDefinition& AddTasks(const Task& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }

    /**
     * <p>A list of tasks that Customer Profiles performs while transferring the data
     * in the flow run.</p>
     */
    inline FlowDefinition& AddTasks(Task&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>The trigger settings that determine how and when the flow runs.</p>
     */
    inline const TriggerConfig& GetTriggerConfig() const{ return m_triggerConfig; }

    /**
     * <p>The trigger settings that determine how and when the flow runs.</p>
     */
    inline bool TriggerConfigHasBeenSet() const { return m_triggerConfigHasBeenSet; }

    /**
     * <p>The trigger settings that determine how and when the flow runs.</p>
     */
    inline void SetTriggerConfig(const TriggerConfig& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = value; }

    /**
     * <p>The trigger settings that determine how and when the flow runs.</p>
     */
    inline void SetTriggerConfig(TriggerConfig&& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = std::move(value); }

    /**
     * <p>The trigger settings that determine how and when the flow runs.</p>
     */
    inline FlowDefinition& WithTriggerConfig(const TriggerConfig& value) { SetTriggerConfig(value); return *this;}

    /**
     * <p>The trigger settings that determine how and when the flow runs.</p>
     */
    inline FlowDefinition& WithTriggerConfig(TriggerConfig&& value) { SetTriggerConfig(std::move(value)); return *this;}

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
