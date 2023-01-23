/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/FlowStatus.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/appflow/model/TriggerType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appflow/model/ExecutionDetails.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties of the flow, such as its source, destination, trigger type,
   * and so on. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/FlowDefinition">AWS
   * API Reference</a></p>
   */
  class FlowDefinition
  {
  public:
    AWS_APPFLOW_API FlowDefinition();
    AWS_APPFLOW_API FlowDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API FlowDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline FlowDefinition& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline FlowDefinition& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline FlowDefinition& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline FlowDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline FlowDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline FlowDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline FlowDefinition& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline FlowDefinition& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}

    /**
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
     */
    inline FlowDefinition& WithFlowName(const char* value) { SetFlowName(value); return *this;}


    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline const FlowStatus& GetFlowStatus() const{ return m_flowStatus; }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline bool FlowStatusHasBeenSet() const { return m_flowStatusHasBeenSet; }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline void SetFlowStatus(const FlowStatus& value) { m_flowStatusHasBeenSet = true; m_flowStatus = value; }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline void SetFlowStatus(FlowStatus&& value) { m_flowStatusHasBeenSet = true; m_flowStatus = std::move(value); }

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline FlowDefinition& WithFlowStatus(const FlowStatus& value) { SetFlowStatus(value); return *this;}

    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline FlowDefinition& WithFlowStatus(FlowStatus&& value) { SetFlowStatus(std::move(value)); return *this;}


    /**
     * <p> Specifies the source connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetSourceConnectorType() const{ return m_sourceConnectorType; }

    /**
     * <p> Specifies the source connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline bool SourceConnectorTypeHasBeenSet() const { return m_sourceConnectorTypeHasBeenSet; }

    /**
     * <p> Specifies the source connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline void SetSourceConnectorType(const ConnectorType& value) { m_sourceConnectorTypeHasBeenSet = true; m_sourceConnectorType = value; }

    /**
     * <p> Specifies the source connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline void SetSourceConnectorType(ConnectorType&& value) { m_sourceConnectorTypeHasBeenSet = true; m_sourceConnectorType = std::move(value); }

    /**
     * <p> Specifies the source connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline FlowDefinition& WithSourceConnectorType(const ConnectorType& value) { SetSourceConnectorType(value); return *this;}

    /**
     * <p> Specifies the source connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline FlowDefinition& WithSourceConnectorType(ConnectorType&& value) { SetSourceConnectorType(std::move(value)); return *this;}


    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline const Aws::String& GetSourceConnectorLabel() const{ return m_sourceConnectorLabel; }

    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline bool SourceConnectorLabelHasBeenSet() const { return m_sourceConnectorLabelHasBeenSet; }

    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline void SetSourceConnectorLabel(const Aws::String& value) { m_sourceConnectorLabelHasBeenSet = true; m_sourceConnectorLabel = value; }

    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline void SetSourceConnectorLabel(Aws::String&& value) { m_sourceConnectorLabelHasBeenSet = true; m_sourceConnectorLabel = std::move(value); }

    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline void SetSourceConnectorLabel(const char* value) { m_sourceConnectorLabelHasBeenSet = true; m_sourceConnectorLabel.assign(value); }

    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline FlowDefinition& WithSourceConnectorLabel(const Aws::String& value) { SetSourceConnectorLabel(value); return *this;}

    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline FlowDefinition& WithSourceConnectorLabel(Aws::String&& value) { SetSourceConnectorLabel(std::move(value)); return *this;}

    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline FlowDefinition& WithSourceConnectorLabel(const char* value) { SetSourceConnectorLabel(value); return *this;}


    /**
     * <p> Specifies the destination connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetDestinationConnectorType() const{ return m_destinationConnectorType; }

    /**
     * <p> Specifies the destination connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline bool DestinationConnectorTypeHasBeenSet() const { return m_destinationConnectorTypeHasBeenSet; }

    /**
     * <p> Specifies the destination connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline void SetDestinationConnectorType(const ConnectorType& value) { m_destinationConnectorTypeHasBeenSet = true; m_destinationConnectorType = value; }

    /**
     * <p> Specifies the destination connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline void SetDestinationConnectorType(ConnectorType&& value) { m_destinationConnectorTypeHasBeenSet = true; m_destinationConnectorType = std::move(value); }

    /**
     * <p> Specifies the destination connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline FlowDefinition& WithDestinationConnectorType(const ConnectorType& value) { SetDestinationConnectorType(value); return *this;}

    /**
     * <p> Specifies the destination connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline FlowDefinition& WithDestinationConnectorType(ConnectorType&& value) { SetDestinationConnectorType(std::move(value)); return *this;}


    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline const Aws::String& GetDestinationConnectorLabel() const{ return m_destinationConnectorLabel; }

    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline bool DestinationConnectorLabelHasBeenSet() const { return m_destinationConnectorLabelHasBeenSet; }

    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline void SetDestinationConnectorLabel(const Aws::String& value) { m_destinationConnectorLabelHasBeenSet = true; m_destinationConnectorLabel = value; }

    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline void SetDestinationConnectorLabel(Aws::String&& value) { m_destinationConnectorLabelHasBeenSet = true; m_destinationConnectorLabel = std::move(value); }

    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline void SetDestinationConnectorLabel(const char* value) { m_destinationConnectorLabelHasBeenSet = true; m_destinationConnectorLabel.assign(value); }

    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline FlowDefinition& WithDestinationConnectorLabel(const Aws::String& value) { SetDestinationConnectorLabel(value); return *this;}

    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline FlowDefinition& WithDestinationConnectorLabel(Aws::String&& value) { SetDestinationConnectorLabel(std::move(value)); return *this;}

    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline FlowDefinition& WithDestinationConnectorLabel(const char* value) { SetDestinationConnectorLabel(value); return *this;}


    /**
     * <p> Specifies the type of flow trigger. This can be <code>OnDemand</code>,
     * <code>Scheduled</code>, or <code>Event</code>. </p>
     */
    inline const TriggerType& GetTriggerType() const{ return m_triggerType; }

    /**
     * <p> Specifies the type of flow trigger. This can be <code>OnDemand</code>,
     * <code>Scheduled</code>, or <code>Event</code>. </p>
     */
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }

    /**
     * <p> Specifies the type of flow trigger. This can be <code>OnDemand</code>,
     * <code>Scheduled</code>, or <code>Event</code>. </p>
     */
    inline void SetTriggerType(const TriggerType& value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }

    /**
     * <p> Specifies the type of flow trigger. This can be <code>OnDemand</code>,
     * <code>Scheduled</code>, or <code>Event</code>. </p>
     */
    inline void SetTriggerType(TriggerType&& value) { m_triggerTypeHasBeenSet = true; m_triggerType = std::move(value); }

    /**
     * <p> Specifies the type of flow trigger. This can be <code>OnDemand</code>,
     * <code>Scheduled</code>, or <code>Event</code>. </p>
     */
    inline FlowDefinition& WithTriggerType(const TriggerType& value) { SetTriggerType(value); return *this;}

    /**
     * <p> Specifies the type of flow trigger. This can be <code>OnDemand</code>,
     * <code>Scheduled</code>, or <code>Event</code>. </p>
     */
    inline FlowDefinition& WithTriggerType(TriggerType&& value) { SetTriggerType(std::move(value)); return *this;}


    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline FlowDefinition& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline FlowDefinition& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline FlowDefinition& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline FlowDefinition& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline FlowDefinition& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline FlowDefinition& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline FlowDefinition& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }

    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }

    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }

    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }

    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }

    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline FlowDefinition& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}

    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline FlowDefinition& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}

    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline FlowDefinition& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}


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
    inline FlowDefinition& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline FlowDefinition& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline FlowDefinition& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline FlowDefinition& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline FlowDefinition& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline FlowDefinition& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline FlowDefinition& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline FlowDefinition& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline FlowDefinition& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline const ExecutionDetails& GetLastRunExecutionDetails() const{ return m_lastRunExecutionDetails; }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline bool LastRunExecutionDetailsHasBeenSet() const { return m_lastRunExecutionDetailsHasBeenSet; }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline void SetLastRunExecutionDetails(const ExecutionDetails& value) { m_lastRunExecutionDetailsHasBeenSet = true; m_lastRunExecutionDetails = value; }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline void SetLastRunExecutionDetails(ExecutionDetails&& value) { m_lastRunExecutionDetailsHasBeenSet = true; m_lastRunExecutionDetails = std::move(value); }

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline FlowDefinition& WithLastRunExecutionDetails(const ExecutionDetails& value) { SetLastRunExecutionDetails(value); return *this;}

    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline FlowDefinition& WithLastRunExecutionDetails(ExecutionDetails&& value) { SetLastRunExecutionDetails(std::move(value)); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    FlowStatus m_flowStatus;
    bool m_flowStatusHasBeenSet = false;

    ConnectorType m_sourceConnectorType;
    bool m_sourceConnectorTypeHasBeenSet = false;

    Aws::String m_sourceConnectorLabel;
    bool m_sourceConnectorLabelHasBeenSet = false;

    ConnectorType m_destinationConnectorType;
    bool m_destinationConnectorTypeHasBeenSet = false;

    Aws::String m_destinationConnectorLabel;
    bool m_destinationConnectorLabelHasBeenSet = false;

    TriggerType m_triggerType;
    bool m_triggerTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_lastUpdatedBy;
    bool m_lastUpdatedByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ExecutionDetails m_lastRunExecutionDetails;
    bool m_lastRunExecutionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
