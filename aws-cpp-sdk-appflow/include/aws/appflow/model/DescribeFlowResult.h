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
    AWS_APPFLOW_API DescribeFlowResult();
    AWS_APPFLOW_API DescribeFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFLOW_API DescribeFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline DescribeFlowResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline DescribeFlowResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline DescribeFlowResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * <p> A description of the flow. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the flow. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> A description of the flow. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> A description of the flow. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> A description of the flow. </p>
     */
    inline DescribeFlowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the flow. </p>
     */
    inline DescribeFlowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the flow. </p>
     */
    inline DescribeFlowResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline const Aws::String& GetFlowName() const{ return m_flowName; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(const Aws::String& value) { m_flowName = value; }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(Aws::String&& value) { m_flowName = std::move(value); }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline void SetFlowName(const char* value) { m_flowName.assign(value); }

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline DescribeFlowResult& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline DescribeFlowResult& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline DescribeFlowResult& WithFlowName(const char* value) { SetFlowName(value); return *this;}


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
    inline void SetKmsArn(const Aws::String& value) { m_kmsArn = value; }

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline void SetKmsArn(Aws::String&& value) { m_kmsArn = std::move(value); }

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline void SetKmsArn(const char* value) { m_kmsArn.assign(value); }

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline DescribeFlowResult& WithKmsArn(const Aws::String& value) { SetKmsArn(value); return *this;}

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline DescribeFlowResult& WithKmsArn(Aws::String&& value) { SetKmsArn(std::move(value)); return *this;}

    /**
     * <p> The ARN (Amazon Resource Name) of the Key Management Service (KMS) key you
     * provide for encryption. This is required if you do not want to use the Amazon
     * AppFlow-managed KMS key. If you don't provide anything here, Amazon AppFlow uses
     * the Amazon AppFlow-managed KMS key. </p>
     */
    inline DescribeFlowResult& WithKmsArn(const char* value) { SetKmsArn(value); return *this;}


    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline const FlowStatus& GetFlowStatus() const{ return m_flowStatus; }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline void SetFlowStatus(const FlowStatus& value) { m_flowStatus = value; }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline void SetFlowStatus(FlowStatus&& value) { m_flowStatus = std::move(value); }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline DescribeFlowResult& WithFlowStatus(const FlowStatus& value) { SetFlowStatus(value); return *this;}

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline DescribeFlowResult& WithFlowStatus(FlowStatus&& value) { SetFlowStatus(std::move(value)); return *this;}


    /**
     * <p> Contains an error message if the flow status is in a suspended or error
     * state. This applies only to scheduled or event-triggered flows. </p>
     */
    inline const Aws::String& GetFlowStatusMessage() const{ return m_flowStatusMessage; }

    /**
     * <p> Contains an error message if the flow status is in a suspended or error
     * state. This applies only to scheduled or event-triggered flows. </p>
     */
    inline void SetFlowStatusMessage(const Aws::String& value) { m_flowStatusMessage = value; }

    /**
     * <p> Contains an error message if the flow status is in a suspended or error
     * state. This applies only to scheduled or event-triggered flows. </p>
     */
    inline void SetFlowStatusMessage(Aws::String&& value) { m_flowStatusMessage = std::move(value); }

    /**
     * <p> Contains an error message if the flow status is in a suspended or error
     * state. This applies only to scheduled or event-triggered flows. </p>
     */
    inline void SetFlowStatusMessage(const char* value) { m_flowStatusMessage.assign(value); }

    /**
     * <p> Contains an error message if the flow status is in a suspended or error
     * state. This applies only to scheduled or event-triggered flows. </p>
     */
    inline DescribeFlowResult& WithFlowStatusMessage(const Aws::String& value) { SetFlowStatusMessage(value); return *this;}

    /**
     * <p> Contains an error message if the flow status is in a suspended or error
     * state. This applies only to scheduled or event-triggered flows. </p>
     */
    inline DescribeFlowResult& WithFlowStatusMessage(Aws::String&& value) { SetFlowStatusMessage(std::move(value)); return *this;}

    /**
     * <p> Contains an error message if the flow status is in a suspended or error
     * state. This applies only to scheduled or event-triggered flows. </p>
     */
    inline DescribeFlowResult& WithFlowStatusMessage(const char* value) { SetFlowStatusMessage(value); return *this;}


    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline const SourceFlowConfig& GetSourceFlowConfig() const{ return m_sourceFlowConfig; }

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline void SetSourceFlowConfig(const SourceFlowConfig& value) { m_sourceFlowConfig = value; }

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline void SetSourceFlowConfig(SourceFlowConfig&& value) { m_sourceFlowConfig = std::move(value); }

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline DescribeFlowResult& WithSourceFlowConfig(const SourceFlowConfig& value) { SetSourceFlowConfig(value); return *this;}

    /**
     * <p> The configuration that controls how Amazon AppFlow retrieves data from the
     * source connector. </p>
     */
    inline DescribeFlowResult& WithSourceFlowConfig(SourceFlowConfig&& value) { SetSourceFlowConfig(std::move(value)); return *this;}


    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline const Aws::Vector<DestinationFlowConfig>& GetDestinationFlowConfigList() const{ return m_destinationFlowConfigList; }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline void SetDestinationFlowConfigList(const Aws::Vector<DestinationFlowConfig>& value) { m_destinationFlowConfigList = value; }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline void SetDestinationFlowConfigList(Aws::Vector<DestinationFlowConfig>&& value) { m_destinationFlowConfigList = std::move(value); }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline DescribeFlowResult& WithDestinationFlowConfigList(const Aws::Vector<DestinationFlowConfig>& value) { SetDestinationFlowConfigList(value); return *this;}

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline DescribeFlowResult& WithDestinationFlowConfigList(Aws::Vector<DestinationFlowConfig>&& value) { SetDestinationFlowConfigList(std::move(value)); return *this;}

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline DescribeFlowResult& AddDestinationFlowConfigList(const DestinationFlowConfig& value) { m_destinationFlowConfigList.push_back(value); return *this; }

    /**
     * <p> The configuration that controls how Amazon AppFlow transfers data to the
     * destination connector. </p>
     */
    inline DescribeFlowResult& AddDestinationFlowConfigList(DestinationFlowConfig&& value) { m_destinationFlowConfigList.push_back(std::move(value)); return *this; }


    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline const ExecutionDetails& GetLastRunExecutionDetails() const{ return m_lastRunExecutionDetails; }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline void SetLastRunExecutionDetails(const ExecutionDetails& value) { m_lastRunExecutionDetails = value; }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline void SetLastRunExecutionDetails(ExecutionDetails&& value) { m_lastRunExecutionDetails = std::move(value); }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline DescribeFlowResult& WithLastRunExecutionDetails(const ExecutionDetails& value) { SetLastRunExecutionDetails(value); return *this;}

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline DescribeFlowResult& WithLastRunExecutionDetails(ExecutionDetails&& value) { SetLastRunExecutionDetails(std::move(value)); return *this;}


    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline const TriggerConfig& GetTriggerConfig() const{ return m_triggerConfig; }

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline void SetTriggerConfig(const TriggerConfig& value) { m_triggerConfig = value; }

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline void SetTriggerConfig(TriggerConfig&& value) { m_triggerConfig = std::move(value); }

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline DescribeFlowResult& WithTriggerConfig(const TriggerConfig& value) { SetTriggerConfig(value); return *this;}

    /**
     * <p> The trigger settings that determine how and when the flow runs. </p>
     */
    inline DescribeFlowResult& WithTriggerConfig(TriggerConfig&& value) { SetTriggerConfig(std::move(value)); return *this;}


    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline const Aws::Vector<Task>& GetTasks() const{ return m_tasks; }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline void SetTasks(const Aws::Vector<Task>& value) { m_tasks = value; }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline void SetTasks(Aws::Vector<Task>&& value) { m_tasks = std::move(value); }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline DescribeFlowResult& WithTasks(const Aws::Vector<Task>& value) { SetTasks(value); return *this;}

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline DescribeFlowResult& WithTasks(Aws::Vector<Task>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline DescribeFlowResult& AddTasks(const Task& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p> A list of tasks that Amazon AppFlow performs while transferring the data in
     * the flow run. </p>
     */
    inline DescribeFlowResult& AddTasks(Task&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline DescribeFlowResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline DescribeFlowResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline DescribeFlowResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline DescribeFlowResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline DescribeFlowResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline DescribeFlowResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline DescribeFlowResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p> Specifies the user name of the account that performed the most recent
     * update. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * <p> Specifies the user name of the account that performed the most recent
     * update. </p>
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedBy = value; }

    /**
     * <p> Specifies the user name of the account that performed the most recent
     * update. </p>
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedBy = std::move(value); }

    /**
     * <p> Specifies the user name of the account that performed the most recent
     * update. </p>
     */
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedBy.assign(value); }

    /**
     * <p> Specifies the user name of the account that performed the most recent
     * update. </p>
     */
    inline DescribeFlowResult& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}

    /**
     * <p> Specifies the user name of the account that performed the most recent
     * update. </p>
     */
    inline DescribeFlowResult& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}

    /**
     * <p> Specifies the user name of the account that performed the most recent
     * update. </p>
     */
    inline DescribeFlowResult& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}


    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline DescribeFlowResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


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
    inline void SetMetadataCatalogConfig(const MetadataCatalogConfig& value) { m_metadataCatalogConfig = value; }

    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline void SetMetadataCatalogConfig(MetadataCatalogConfig&& value) { m_metadataCatalogConfig = std::move(value); }

    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline DescribeFlowResult& WithMetadataCatalogConfig(const MetadataCatalogConfig& value) { SetMetadataCatalogConfig(value); return *this;}

    /**
     * <p>Specifies the configuration that Amazon AppFlow uses when it catalogs the
     * data that's transferred by the associated flow. When Amazon AppFlow catalogs the
     * data from a flow, it stores metadata in a data catalog.</p>
     */
    inline DescribeFlowResult& WithMetadataCatalogConfig(MetadataCatalogConfig&& value) { SetMetadataCatalogConfig(std::move(value)); return *this;}


    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline const Aws::Vector<MetadataCatalogDetail>& GetLastRunMetadataCatalogDetails() const{ return m_lastRunMetadataCatalogDetails; }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline void SetLastRunMetadataCatalogDetails(const Aws::Vector<MetadataCatalogDetail>& value) { m_lastRunMetadataCatalogDetails = value; }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline void SetLastRunMetadataCatalogDetails(Aws::Vector<MetadataCatalogDetail>&& value) { m_lastRunMetadataCatalogDetails = std::move(value); }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline DescribeFlowResult& WithLastRunMetadataCatalogDetails(const Aws::Vector<MetadataCatalogDetail>& value) { SetLastRunMetadataCatalogDetails(value); return *this;}

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline DescribeFlowResult& WithLastRunMetadataCatalogDetails(Aws::Vector<MetadataCatalogDetail>&& value) { SetLastRunMetadataCatalogDetails(std::move(value)); return *this;}

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline DescribeFlowResult& AddLastRunMetadataCatalogDetails(const MetadataCatalogDetail& value) { m_lastRunMetadataCatalogDetails.push_back(value); return *this; }

    /**
     * <p>Describes the metadata catalog, metadata table, and data partitions that
     * Amazon AppFlow used for the associated flow run.</p>
     */
    inline DescribeFlowResult& AddLastRunMetadataCatalogDetails(MetadataCatalogDetail&& value) { m_lastRunMetadataCatalogDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The version number of your data schema. Amazon AppFlow assigns this version
     * number. The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul>
     */
    inline long long GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The version number of your data schema. Amazon AppFlow assigns this version
     * number. The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul>
     */
    inline void SetSchemaVersion(long long value) { m_schemaVersion = value; }

    /**
     * <p>The version number of your data schema. Amazon AppFlow assigns this version
     * number. The version number increases by one when you change any of the following
     * settings in your flow configuration:</p> <ul> <li> <p>Source-to-destination
     * field mappings</p> </li> <li> <p>Field data types</p> </li> <li> <p>Partition
     * keys</p> </li> </ul>
     */
    inline DescribeFlowResult& WithSchemaVersion(long long value) { SetSchemaVersion(value); return *this;}

  private:

    Aws::String m_flowArn;

    Aws::String m_description;

    Aws::String m_flowName;

    Aws::String m_kmsArn;

    FlowStatus m_flowStatus;

    Aws::String m_flowStatusMessage;

    SourceFlowConfig m_sourceFlowConfig;

    Aws::Vector<DestinationFlowConfig> m_destinationFlowConfigList;

    ExecutionDetails m_lastRunExecutionDetails;

    TriggerConfig m_triggerConfig;

    Aws::Vector<Task> m_tasks;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_createdBy;

    Aws::String m_lastUpdatedBy;

    Aws::Map<Aws::String, Aws::String> m_tags;

    MetadataCatalogConfig m_metadataCatalogConfig;

    Aws::Vector<MetadataCatalogDetail> m_lastRunMetadataCatalogDetails;

    long long m_schemaVersion;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
