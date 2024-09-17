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
#include <aws/appflow/model/MetadataCatalogConfig.h>
#include <aws/appflow/model/DestinationFlowConfig.h>
#include <aws/appflow/model/Task.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class UpdateFlowRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API UpdateFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlow"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
    inline void SetFlowName(const Aws::String& value) { m_flowNameHasBeenSet = true; m_flowName = value; }
    inline void SetFlowName(Aws::String&& value) { m_flowNameHasBeenSet = true; m_flowName = std::move(value); }
    inline void SetFlowName(const char* value) { m_flowNameHasBeenSet = true; m_flowName.assign(value); }
    inline UpdateFlowRequest& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}
    inline UpdateFlowRequest& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}
    inline UpdateFlowRequest& WithFlowName(const char* value) { SetFlowName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the flow. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateFlowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFlowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFlowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline const TriggerConfig& GetTriggerConfig() const{ return m_triggerConfig; }
    inline bool TriggerConfigHasBeenSet() const { return m_triggerConfigHasBeenSet; }
    inline void SetTriggerConfig(const TriggerConfig& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = value; }
    inline void SetTriggerConfig(TriggerConfig&& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = std::move(value); }
    inline UpdateFlowRequest& WithTriggerConfig(const TriggerConfig& value) { SetTriggerConfig(value); return *this;}
    inline UpdateFlowRequest& WithTriggerConfig(TriggerConfig&& value) { SetTriggerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SourceFlowConfig& GetSourceFlowConfig() const{ return m_sourceFlowConfig; }
    inline bool SourceFlowConfigHasBeenSet() const { return m_sourceFlowConfigHasBeenSet; }
    inline void SetSourceFlowConfig(const SourceFlowConfig& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = value; }
    inline void SetSourceFlowConfig(SourceFlowConfig&& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = std::move(value); }
    inline UpdateFlowRequest& WithSourceFlowConfig(const SourceFlowConfig& value) { SetSourceFlowConfig(value); return *this;}
    inline UpdateFlowRequest& WithSourceFlowConfig(SourceFlowConfig&& value) { SetSourceFlowConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline const Aws::Vector<DestinationFlowConfig>& GetDestinationFlowConfigList() const{ return m_destinationFlowConfigList; }
    inline bool DestinationFlowConfigListHasBeenSet() const { return m_destinationFlowConfigListHasBeenSet; }
    inline void SetDestinationFlowConfigList(const Aws::Vector<DestinationFlowConfig>& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList = value; }
    inline void SetDestinationFlowConfigList(Aws::Vector<DestinationFlowConfig>&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList = std::move(value); }
    inline UpdateFlowRequest& WithDestinationFlowConfigList(const Aws::Vector<DestinationFlowConfig>& value) { SetDestinationFlowConfigList(value); return *this;}
    inline UpdateFlowRequest& WithDestinationFlowConfigList(Aws::Vector<DestinationFlowConfig>&& value) { SetDestinationFlowConfigList(std::move(value)); return *this;}
    inline UpdateFlowRequest& AddDestinationFlowConfigList(const DestinationFlowConfig& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList.push_back(value); return *this; }
    inline UpdateFlowRequest& AddDestinationFlowConfigList(DestinationFlowConfig&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline const Aws::Vector<Task>& GetTasks() const{ return m_tasks; }
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }
    inline void SetTasks(const Aws::Vector<Task>& value) { m_tasksHasBeenSet = true; m_tasks = value; }
    inline void SetTasks(Aws::Vector<Task>&& value) { m_tasksHasBeenSet = true; m_tasks = std::move(value); }
    inline UpdateFlowRequest& WithTasks(const Aws::Vector<Task>& value) { SetTasks(value); return *this;}
    inline UpdateFlowRequest& WithTasks(Aws::Vector<Task>&& value) { SetTasks(std::move(value)); return *this;}
    inline UpdateFlowRequest& AddTasks(const Task& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }
    inline UpdateFlowRequest& AddTasks(Task&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline const MetadataCatalogConfig& GetMetadataCatalogConfig() const{ return m_metadataCatalogConfig; }
    inline bool MetadataCatalogConfigHasBeenSet() const { return m_metadataCatalogConfigHasBeenSet; }
    inline void SetMetadataCatalogConfig(const MetadataCatalogConfig& value) { m_metadataCatalogConfigHasBeenSet = true; m_metadataCatalogConfig = value; }
    inline void SetMetadataCatalogConfig(MetadataCatalogConfig&& value) { m_metadataCatalogConfigHasBeenSet = true; m_metadataCatalogConfig = std::move(value); }
    inline UpdateFlowRequest& WithMetadataCatalogConfig(const MetadataCatalogConfig& value) { SetMetadataCatalogConfig(value); return *this;}
    inline UpdateFlowRequest& WithMetadataCatalogConfig(MetadataCatalogConfig&& value) { SetMetadataCatalogConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>UpdateFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>UpdateFlow</code>. The token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateFlowRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateFlowRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateFlowRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TriggerConfig m_triggerConfig;
    bool m_triggerConfigHasBeenSet = false;

    SourceFlowConfig m_sourceFlowConfig;
    bool m_sourceFlowConfigHasBeenSet = false;

    Aws::Vector<DestinationFlowConfig> m_destinationFlowConfigList;
    bool m_destinationFlowConfigListHasBeenSet = false;

    Aws::Vector<Task> m_tasks;
    bool m_tasksHasBeenSet = false;

    MetadataCatalogConfig m_metadataCatalogConfig;
    bool m_metadataCatalogConfigHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
