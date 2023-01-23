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
    AWS_APPFLOW_API CreateFlowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlow"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


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
    inline CreateFlowRequest& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline CreateFlowRequest& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline CreateFlowRequest& WithFlowName(const char* value) { SetFlowName(value); return *this;}


    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline CreateFlowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline CreateFlowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the flow you want to create. </p>
     */
    inline CreateFlowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline const Aws::String& GetKmsArn() const{ return m_kmsArn; }

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline bool KmsArnHasBeenSet() const { return m_kmsArnHasBeenSet; }

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline void SetKmsArn(const Aws::String& value) { m_kmsArnHasBeenSet = true; m_kmsArn = value; }

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline void SetKmsArn(Aws::String&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::move(value); }

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline void SetKmsArn(const char* value) { m_kmsArnHasBeenSet = true; m_kmsArn.assign(value); }

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline CreateFlowRequest& WithKmsArn(const Aws::String& value) { SetKmsArn(value); return *this;}

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline CreateFlowRequest& WithKmsArn(Aws::String&& value) { SetKmsArn(std::move(value)); return *this;}

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline CreateFlowRequest& WithKmsArn(const char* value) { SetKmsArn(value); return *this;}


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
    inline CreateFlowRequest& WithTriggerConfig(const TriggerConfig& value) { SetTriggerConfig(value); return *this;}

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline CreateFlowRequest& WithTriggerConfig(TriggerConfig&& value) { SetTriggerConfig(std::move(value)); return *this;}


    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline const SourceFlowConfig& GetSourceFlowConfig() const{ return m_sourceFlowConfig; }

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline bool SourceFlowConfigHasBeenSet() const { return m_sourceFlowConfigHasBeenSet; }

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline void SetSourceFlowConfig(const SourceFlowConfig& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = value; }

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline void SetSourceFlowConfig(SourceFlowConfig&& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = std::move(value); }

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline CreateFlowRequest& WithSourceFlowConfig(const SourceFlowConfig& value) { SetSourceFlowConfig(value); return *this;}

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline CreateFlowRequest& WithSourceFlowConfig(SourceFlowConfig&& value) { SetSourceFlowConfig(std::move(value)); return *this;}


    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline const Aws::Vector<DestinationFlowConfig>& GetDestinationFlowConfigList() const{ return m_destinationFlowConfigList; }

    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline bool DestinationFlowConfigListHasBeenSet() const { return m_destinationFlowConfigListHasBeenSet; }

    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline void SetDestinationFlowConfigList(const Aws::Vector<DestinationFlowConfig>& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList = value; }

    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline void SetDestinationFlowConfigList(Aws::Vector<DestinationFlowConfig>&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList = std::move(value); }

    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline CreateFlowRequest& WithDestinationFlowConfigList(const Aws::Vector<DestinationFlowConfig>& value) { SetDestinationFlowConfigList(value); return *this;}

    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline CreateFlowRequest& WithDestinationFlowConfigList(Aws::Vector<DestinationFlowConfig>&& value) { SetDestinationFlowConfigList(std::move(value)); return *this;}

    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline CreateFlowRequest& AddDestinationFlowConfigList(const DestinationFlowConfig& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList.push_back(value); return *this; }

    /**
     * <p> The configuration that controls how Amazon AppFlow places data in the
     * destination connector. </p>
     */
    inline CreateFlowRequest& AddDestinationFlowConfigList(DestinationFlowConfig&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList.push_back(std::move(value)); return *this; }


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
    inline CreateFlowRequest& WithTasks(const Aws::Vector<Task>& value) { SetTasks(value); return *this;}

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline CreateFlowRequest& WithTasks(Aws::Vector<Task>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline CreateFlowRequest& AddTasks(const Task& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline CreateFlowRequest& AddTasks(Task&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline CreateFlowRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline const MetadataCatalogConfig& GetMetadataCatalogConfig() const{ return m_metadataCatalogConfig; }

    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline bool MetadataCatalogConfigHasBeenSet() const { return m_metadataCatalogConfigHasBeenSet; }

    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline void SetMetadataCatalogConfig(const MetadataCatalogConfig& value) { m_metadataCatalogConfigHasBeenSet = true; m_metadataCatalogConfig = value; }

    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline void SetMetadataCatalogConfig(MetadataCatalogConfig&& value) { m_metadataCatalogConfigHasBeenSet = true; m_metadataCatalogConfig = std::move(value); }

    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline CreateFlowRequest& WithMetadataCatalogConfig(const MetadataCatalogConfig& value) { SetMetadataCatalogConfig(value); return *this;}

    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline CreateFlowRequest& WithMetadataCatalogConfig(MetadataCatalogConfig&& value) { SetMetadataCatalogConfig(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
