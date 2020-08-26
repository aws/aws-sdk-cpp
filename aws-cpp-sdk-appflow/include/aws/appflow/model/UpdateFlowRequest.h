/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/TriggerConfig.h>
#include <aws/appflow/model/SourceFlowConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/DestinationFlowConfig.h>
#include <aws/appflow/model/Task.h>
#include <utility>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class AWS_APPFLOW_API UpdateFlowRequest : public AppflowRequest
  {
  public:
    UpdateFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlow"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(const Aws::String& value) { m_flowNameHasBeenSet = true; m_flowName = value; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(Aws::String&& value) { m_flowNameHasBeenSet = true; m_flowName = std::move(value); }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(const char* value) { m_flowNameHasBeenSet = true; m_flowName.assign(value); }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline UpdateFlowRequest& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline UpdateFlowRequest& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline UpdateFlowRequest& WithFlowName(const char* value) { SetFlowName(value); return *this;}


    /**
     * <p> A description of the flow. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the flow. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the flow. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the flow. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the flow. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the flow. </p>
     */
    inline UpdateFlowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the flow. </p>
     */
    inline UpdateFlowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the flow. </p>
     */
    inline UpdateFlowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline const TriggerConfig& GetTriggerConfig() const{ return m_triggerConfig; }

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline bool TriggerConfigHasBeenSet() const { return m_triggerConfigHasBeenSet; }

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline void SetTriggerConfig(const TriggerConfig& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = value; }

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline void SetTriggerConfig(TriggerConfig&& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = std::move(value); }

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline UpdateFlowRequest& WithTriggerConfig(const TriggerConfig& value) { SetTriggerConfig(value); return *this;}

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline UpdateFlowRequest& WithTriggerConfig(TriggerConfig&& value) { SetTriggerConfig(std::move(value)); return *this;}


    
    inline const SourceFlowConfig& GetSourceFlowConfig() const{ return m_sourceFlowConfig; }

    
    inline bool SourceFlowConfigHasBeenSet() const { return m_sourceFlowConfigHasBeenSet; }

    
    inline void SetSourceFlowConfig(const SourceFlowConfig& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = value; }

    
    inline void SetSourceFlowConfig(SourceFlowConfig&& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = std::move(value); }

    
    inline UpdateFlowRequest& WithSourceFlowConfig(const SourceFlowConfig& value) { SetSourceFlowConfig(value); return *this;}

    
    inline UpdateFlowRequest& WithSourceFlowConfig(SourceFlowConfig&& value) { SetSourceFlowConfig(std::move(value)); return *this;}


    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline const Aws::Vector<DestinationFlowConfig>& GetDestinationFlowConfigList() const{ return m_destinationFlowConfigList; }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline bool DestinationFlowConfigListHasBeenSet() const { return m_destinationFlowConfigListHasBeenSet; }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline void SetDestinationFlowConfigList(const Aws::Vector<DestinationFlowConfig>& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList = value; }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline void SetDestinationFlowConfigList(Aws::Vector<DestinationFlowConfig>&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList = std::move(value); }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline UpdateFlowRequest& WithDestinationFlowConfigList(const Aws::Vector<DestinationFlowConfig>& value) { SetDestinationFlowConfigList(value); return *this;}

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline UpdateFlowRequest& WithDestinationFlowConfigList(Aws::Vector<DestinationFlowConfig>&& value) { SetDestinationFlowConfigList(std::move(value)); return *this;}

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline UpdateFlowRequest& AddDestinationFlowConfigList(const DestinationFlowConfig& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList.push_back(value); return *this; }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline UpdateFlowRequest& AddDestinationFlowConfigList(DestinationFlowConfig&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline const Aws::Vector<Task>& GetTasks() const{ return m_tasks; }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline void SetTasks(const Aws::Vector<Task>& value) { m_tasksHasBeenSet = true; m_tasks = value; }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline void SetTasks(Aws::Vector<Task>&& value) { m_tasksHasBeenSet = true; m_tasks = std::move(value); }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline UpdateFlowRequest& WithTasks(const Aws::Vector<Task>& value) { SetTasks(value); return *this;}

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline UpdateFlowRequest& WithTasks(Aws::Vector<Task>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline UpdateFlowRequest& AddTasks(const Task& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline UpdateFlowRequest& AddTasks(Task&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    TriggerConfig m_triggerConfig;
    bool m_triggerConfigHasBeenSet;

    SourceFlowConfig m_sourceFlowConfig;
    bool m_sourceFlowConfigHasBeenSet;

    Aws::Vector<DestinationFlowConfig> m_destinationFlowConfigList;
    bool m_destinationFlowConfigListHasBeenSet;

    Aws::Vector<Task> m_tasks;
    bool m_tasksHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
