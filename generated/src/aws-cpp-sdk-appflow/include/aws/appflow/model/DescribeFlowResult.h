/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/FlowStatus.h>
#include <aws/appflow/model/SourceFlowConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/ExecutionDetails.h>
#include <aws/appflow/model/TriggerConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appflow/model/MetadataCatalogConfig.h>
#include <aws/appflow/model/DestinationFlowConfig.h>
#include <aws/appflow/model/Task.h>
#include <aws/appflow/model/MetadataCatalogDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{
  class DescribeFlowResult
  {
  public:
    AWS_APPFLOW_API DescribeFlowResult() = default;
    AWS_APPFLOW_API DescribeFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    DescribeFlowResult& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the flow. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeFlowResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline const Aws::String& GetFlowName() const { return m_flowName; }
    template<typename FlowNameT = Aws::String>
    void SetFlowName(FlowNameT&& value) { m_flowNameHasBeenSet = true; m_flowName = std::forward<FlowNameT>(value); }
    template<typename FlowNameT = Aws::String>
    DescribeFlowResult& WithFlowName(FlowNameT&& value) { SetFlowName(std::forward<FlowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline const Aws::String& GetKmsArn() const { return m_kmsArn; }
    template<typename KmsArnT = Aws::String>
    void SetKmsArn(KmsArnT&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::forward<KmsArnT>(value); }
    template<typename KmsArnT = Aws::String>
    DescribeFlowResult& WithKmsArn(KmsArnT&& value) { SetKmsArn(std::forward<KmsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline FlowStatus GetFlowStatus() const { return m_flowStatus; }
    inline void SetFlowStatus(FlowStatus value) { m_flowStatusHasBeenSet = true; m_flowStatus = value; }
    inline DescribeFlowResult& WithFlowStatus(FlowStatus value) { SetFlowStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains an error message if the flow status is in a suspended or error
     * state. This applies only to scheduled or event-triggered flows. </p>
     */
    inline const Aws::String& GetFlowStatusMessage() const { return m_flowStatusMessage; }
    template<typename FlowStatusMessageT = Aws::String>
    void SetFlowStatusMessage(FlowStatusMessageT&& value) { m_flowStatusMessageHasBeenSet = true; m_flowStatusMessage = std::forward<FlowStatusMessageT>(value); }
    template<typename FlowStatusMessageT = Aws::String>
    DescribeFlowResult& WithFlowStatusMessage(FlowStatusMessageT&& value) { SetFlowStatusMessage(std::forward<FlowStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline const SourceFlowConfig& GetSourceFlowConfig() const { return m_sourceFlowConfig; }
    template<typename SourceFlowConfigT = SourceFlowConfig>
    void SetSourceFlowConfig(SourceFlowConfigT&& value) { m_sourceFlowConfigHasBeenSet = true; m_sourceFlowConfig = std::forward<SourceFlowConfigT>(value); }
    template<typename SourceFlowConfigT = SourceFlowConfig>
    DescribeFlowResult& WithSourceFlowConfig(SourceFlowConfigT&& value) { SetSourceFlowConfig(std::forward<SourceFlowConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline const Aws::Vector<DestinationFlowConfig>& GetDestinationFlowConfigList() const { return m_destinationFlowConfigList; }
    template<typename DestinationFlowConfigListT = Aws::Vector<DestinationFlowConfig>>
    void SetDestinationFlowConfigList(DestinationFlowConfigListT&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList = std::forward<DestinationFlowConfigListT>(value); }
    template<typename DestinationFlowConfigListT = Aws::Vector<DestinationFlowConfig>>
    DescribeFlowResult& WithDestinationFlowConfigList(DestinationFlowConfigListT&& value) { SetDestinationFlowConfigList(std::forward<DestinationFlowConfigListT>(value)); return *this;}
    template<typename DestinationFlowConfigListT = DestinationFlowConfig>
    DescribeFlowResult& AddDestinationFlowConfigList(DestinationFlowConfigListT&& value) { m_destinationFlowConfigListHasBeenSet = true; m_destinationFlowConfigList.emplace_back(std::forward<DestinationFlowConfigListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline const ExecutionDetails& GetLastRunExecutionDetails() const { return m_lastRunExecutionDetails; }
    template<typename LastRunExecutionDetailsT = ExecutionDetails>
    void SetLastRunExecutionDetails(LastRunExecutionDetailsT&& value) { m_lastRunExecutionDetailsHasBeenSet = true; m_lastRunExecutionDetails = std::forward<LastRunExecutionDetailsT>(value); }
    template<typename LastRunExecutionDetailsT = ExecutionDetails>
    DescribeFlowResult& WithLastRunExecutionDetails(LastRunExecutionDetailsT&& value) { SetLastRunExecutionDetails(std::forward<LastRunExecutionDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline const TriggerConfig& GetTriggerConfig() const { return m_triggerConfig; }
    template<typename TriggerConfigT = TriggerConfig>
    void SetTriggerConfig(TriggerConfigT&& value) { m_triggerConfigHasBeenSet = true; m_triggerConfig = std::forward<TriggerConfigT>(value); }
    template<typename TriggerConfigT = TriggerConfig>
    DescribeFlowResult& WithTriggerConfig(TriggerConfigT&& value) { SetTriggerConfig(std::forward<TriggerConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline const Aws::Vector<Task>& GetTasks() const { return m_tasks; }
    template<typename TasksT = Aws::Vector<Task>>
    void SetTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks = std::forward<TasksT>(value); }
    template<typename TasksT = Aws::Vector<Task>>
    DescribeFlowResult& WithTasks(TasksT&& value) { SetTasks(std::forward<TasksT>(value)); return *this;}
    template<typename TasksT = Task>
    DescribeFlowResult& AddTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks.emplace_back(std::forward<TasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeFlowResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    DescribeFlowResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    DescribeFlowResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the user name of the account that performed the most recent
     * update. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    DescribeFlowResult& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeFlowResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeFlowResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
    template<typename MetadataCatalogConfigT = MetadataCatalogConfig>
    void SetMetadataCatalogConfig(MetadataCatalogConfigT&& value) { m_metadataCatalogConfigHasBeenSet = true; m_metadataCatalogConfig = std::forward<MetadataCatalogConfigT>(value); }
    template<typename MetadataCatalogConfigT = MetadataCatalogConfig>
    DescribeFlowResult& WithMetadataCatalogConfig(MetadataCatalogConfigT&& value) { SetMetadataCatalogConfig(std::forward<MetadataCatalogConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline const Aws::Vector<MetadataCatalogDetail>& GetLastRunMetadataCatalogDetails() const { return m_lastRunMetadataCatalogDetails; }
    template<typename LastRunMetadataCatalogDetailsT = Aws::Vector<MetadataCatalogDetail>>
    void SetLastRunMetadataCatalogDetails(LastRunMetadataCatalogDetailsT&& value) { m_lastRunMetadataCatalogDetailsHasBeenSet = true; m_lastRunMetadataCatalogDetails = std::forward<LastRunMetadataCatalogDetailsT>(value); }
    template<typename LastRunMetadataCatalogDetailsT = Aws::Vector<MetadataCatalogDetail>>
    DescribeFlowResult& WithLastRunMetadataCatalogDetails(LastRunMetadataCatalogDetailsT&& value) { SetLastRunMetadataCatalogDetails(std::forward<LastRunMetadataCatalogDetailsT>(value)); return *this;}
    template<typename LastRunMetadataCatalogDetailsT = MetadataCatalogDetail>
    DescribeFlowResult& AddLastRunMetadataCatalogDetails(LastRunMetadataCatalogDetailsT&& value) { m_lastRunMetadataCatalogDetailsHasBeenSet = true; m_lastRunMetadataCatalogDetails.emplace_back(std::forward<LastRunMetadataCatalogDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version number of your data schema. Amazon AppFlow assigns this version
     * number. The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul>
     */
    inline long long GetSchemaVersion() const { return m_schemaVersion; }
    inline void SetSchemaVersion(long long value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline DescribeFlowResult& WithSchemaVersion(long long value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFlowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    Aws::String m_kmsArn;
    bool m_kmsArnHasBeenSet = false;

    FlowStatus m_flowStatus{FlowStatus::NOT_SET};
    bool m_flowStatusHasBeenSet = false;

    Aws::String m_flowStatusMessage;
    bool m_flowStatusMessageHasBeenSet = false;

    SourceFlowConfig m_sourceFlowConfig;
    bool m_sourceFlowConfigHasBeenSet = false;

    Aws::Vector<DestinationFlowConfig> m_destinationFlowConfigList;
    bool m_destinationFlowConfigListHasBeenSet = false;

    ExecutionDetails m_lastRunExecutionDetails;
    bool m_lastRunExecutionDetailsHasBeenSet = false;

    TriggerConfig m_triggerConfig;
    bool m_triggerConfigHasBeenSet = false;

    Aws::Vector<Task> m_tasks;
    bool m_tasksHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    MetadataCatalogConfig m_metadataCatalogConfig;
    bool m_metadataCatalogConfigHasBeenSet = false;

    Aws::Vector<MetadataCatalogDetail> m_lastRunMetadataCatalogDetails;
    bool m_lastRunMetadataCatalogDetailsHasBeenSet = false;

    long long m_schemaVersion{0};
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
