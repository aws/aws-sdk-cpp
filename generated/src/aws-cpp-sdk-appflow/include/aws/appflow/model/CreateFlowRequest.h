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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateFlowRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API CreateFlowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlow"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline const Aws::String& GetFlowName() const { return m_flowName; }
    inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
    template<typename FlowNameT = Aws::String>
    void SetFlowName(FlowNameT&& value) { m_flowNameHasBeenSet = true; m_flowName = std::forward<FlowNameT>(value); }
    template<typename FlowNameT = Aws::String>
    CreateFlowRequest& WithFlowName(FlowNameT&& value) { SetFlowName(std::forward<FlowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateFlowRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline const Aws::String& GetKmsArn() const { return m_kmsArn; }
    inline bool KmsArnHasBeenSet() const { return m_kmsArnHasBeenSet; }
    template<typename KmsArnT = Aws::String>
    void SetKmsArn(KmsArnT&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::forward<KmsArnT>(value); }
    template<typename KmsArnT = Aws::String>
    CreateFlowRequest& WithKmsArn(KmsArnT&& value) { SetKmsArn(std::forward<KmsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline const TriggerConfig& GetTriggerConfig() const { return m_triggerConfig; }
    inline bool TriggerConfigHasBeenSet() const { return m_triggerConfigHasBeenSet; }
    template<typename TriggerConfigT = TriggerConfig>
    void SetTriggerConfig(TriggerConfigT&& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = std::forward<TriggerConfigT>(value); }
    template<typename TriggerConfigT = TriggerConfig>
    CreateFlowRequest& WithTriggerConfig(TriggerConfigT&& value) { SetTriggerConfig(std::forward<TriggerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline const SourceFlowConfig& GetSourceFlowConfig() const { return m_sourceFlowConfig; }
    inline bool SourceFlowConfigHasBeenSet() const { return m_sourceFlowConfigHasBeenSet; }
    template<typename SourceFlowConfigT = SourceFlowConfig>
    void SetSourceFlowConfig(SourceFlowConfigT&& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = std::forward<SourceFlowConfigT>(value); }
    template<typename SourceFlowConfigT = SourceFlowConfig>
    CreateFlowRequest& WithSourceFlowConfig(SourceFlowConfigT&& value) { SetSourceFlowConfig(std::forward<SourceFlowConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline const Aws::Vector<DestinationFlowConfig>& GetDestinationFlowConfigList() const { return m_destinationFlowConfigList; }
    inline bool DestinationFlowConfigListHasBeenSet() const { return m_destinationFlowConfigListHasBeenSet; }
    template<typename DestinationFlowConfigListT = Aws::Vector<DestinationFlowConfig>>
    void SetDestinationFlowConfigList(DestinationFlowConfigListT&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList = std::forward<DestinationFlowConfigListT>(value); }
    template<typename DestinationFlowConfigListT = Aws::Vector<DestinationFlowConfig>>
    CreateFlowRequest& WithDestinationFlowConfigList(DestinationFlowConfigListT&& value) { SetDestinationFlowConfigList(std::forward<DestinationFlowConfigListT>(value)); return *this;}
    template<typename DestinationFlowConfigListT = DestinationFlowConfig>
    CreateFlowRequest& AddDestinationFlowConfigList(DestinationFlowConfigListT&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList.emplace_back(std::forward<DestinationFlowConfigListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline const Aws::Vector<Task>& GetTasks() const { return m_tasks; }
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }
    template<typename TasksT = Aws::Vector<Task>>
    void SetTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks = std::forward<TasksT>(value); }
    template<typename TasksT = Aws::Vector<Task>>
    CreateFlowRequest& WithTasks(TasksT&& value) { SetTasks(std::forward<TasksT>(value)); return *this;}
    template<typename TasksT = Task>
    CreateFlowRequest& AddTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks.emplace_back(std::forward<TasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateFlowRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateFlowRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline const MetadataCatalogConfig& GetMetadataCatalogConfig() const { return m_metadataCatalogConfig; }
    inline bool MetadataCatalogConfigHasBeenSet() const { return m_metadataCatalogConfigHasBeenSet; }
    template<typename MetadataCatalogConfigT = MetadataCatalogConfig>
    void SetMetadataCatalogConfig(MetadataCatalogConfigT&& value) { m_metadataCatalogConfigHasBeenSet = true; m_metadataCatalogConfig = std::forward<MetadataCatalogConfigT>(value); }
    template<typename MetadataCatalogConfigT = MetadataCatalogConfig>
    CreateFlowRequest& WithMetadataCatalogConfig(MetadataCatalogConfigT&& value) { SetMetadataCatalogConfig(std::forward<MetadataCatalogConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>clientToken</code> parameter is an idempotency token. It ensures
     * that your <code>CreateFlow</code> request completes only once. You choose the
     * value to pass. For example, if you don't receive a response from your request,
     * you can safely retry the request with the same <code>clientToken</code>
     * parameter value.</p> <p>If you omit a <code>clientToken</code> value, the Amazon
     * Web Services SDK that you are using inserts a value for you. This way, the SDK
     * can safely retry requests multiple times after a network error. You must provide
     * your own value for other use cases.</p> <p>If you specify input parameters that
     * differ from your first request, an error occurs. If you use a different value
     * for <code>clientToken</code>, Amazon AppFlow considers it a new call to
     * <code>CreateFlow</code>. The token is active for 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateFlowRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsArn;
    bool m_kmsArnHasBeenSet = false;

    TriggerConfig m_triggerConfig;
    bool m_triggerConfigHasBeenSet = false;

    SourceFlowConfig m_sourceFlowConfig;
    bool m_sourceFlowConfigHasBeenSet = false;

    Aws::Vector<DestinationFlowConfig> m_destinationFlowConfigList;
    bool m_destinationFlowConfigListHasBeenSet = false;

    Aws::Vector<Task> m_tasks;
    bool m_tasksHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    MetadataCatalogConfig m_metadataCatalogConfig;
    bool m_metadataCatalogConfigHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
