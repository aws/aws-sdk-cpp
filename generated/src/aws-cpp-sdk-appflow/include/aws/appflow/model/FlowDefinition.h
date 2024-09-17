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


    ///@{
    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline FlowDefinition& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline FlowDefinition& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline FlowDefinition& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A user-entered description of the flow. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FlowDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FlowDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FlowDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

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
    inline FlowDefinition& WithFlowName(const Aws::String& value) { SetFlowName(value); return *this;}
    inline FlowDefinition& WithFlowName(Aws::String&& value) { SetFlowName(std::move(value)); return *this;}
    inline FlowDefinition& WithFlowName(const char* value) { SetFlowName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the current status of the flow. </p>
     */
    inline const FlowStatus& GetFlowStatus() const{ return m_flowStatus; }
    inline bool FlowStatusHasBeenSet() const { return m_flowStatusHasBeenSet; }
    inline void SetFlowStatus(const FlowStatus& value) { m_flowStatusHasBeenSet = true; m_flowStatus = value; }
    inline void SetFlowStatus(FlowStatus&& value) { m_flowStatusHasBeenSet = true; m_flowStatus = std::move(value); }
    inline FlowDefinition& WithFlowStatus(const FlowStatus& value) { SetFlowStatus(value); return *this;}
    inline FlowDefinition& WithFlowStatus(FlowStatus&& value) { SetFlowStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the source connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetSourceConnectorType() const{ return m_sourceConnectorType; }
    inline bool SourceConnectorTypeHasBeenSet() const { return m_sourceConnectorTypeHasBeenSet; }
    inline void SetSourceConnectorType(const ConnectorType& value) { m_sourceConnectorTypeHasBeenSet = true; m_sourceConnectorType = value; }
    inline void SetSourceConnectorType(ConnectorType&& value) { m_sourceConnectorTypeHasBeenSet = true; m_sourceConnectorType = std::move(value); }
    inline FlowDefinition& WithSourceConnectorType(const ConnectorType& value) { SetSourceConnectorType(value); return *this;}
    inline FlowDefinition& WithSourceConnectorType(ConnectorType&& value) { SetSourceConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline const Aws::String& GetSourceConnectorLabel() const{ return m_sourceConnectorLabel; }
    inline bool SourceConnectorLabelHasBeenSet() const { return m_sourceConnectorLabelHasBeenSet; }
    inline void SetSourceConnectorLabel(const Aws::String& value) { m_sourceConnectorLabelHasBeenSet = true; m_sourceConnectorLabel = value; }
    inline void SetSourceConnectorLabel(Aws::String&& value) { m_sourceConnectorLabelHasBeenSet = true; m_sourceConnectorLabel = std::move(value); }
    inline void SetSourceConnectorLabel(const char* value) { m_sourceConnectorLabelHasBeenSet = true; m_sourceConnectorLabel.assign(value); }
    inline FlowDefinition& WithSourceConnectorLabel(const Aws::String& value) { SetSourceConnectorLabel(value); return *this;}
    inline FlowDefinition& WithSourceConnectorLabel(Aws::String&& value) { SetSourceConnectorLabel(std::move(value)); return *this;}
    inline FlowDefinition& WithSourceConnectorLabel(const char* value) { SetSourceConnectorLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the destination connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetDestinationConnectorType() const{ return m_destinationConnectorType; }
    inline bool DestinationConnectorTypeHasBeenSet() const { return m_destinationConnectorTypeHasBeenSet; }
    inline void SetDestinationConnectorType(const ConnectorType& value) { m_destinationConnectorTypeHasBeenSet = true; m_destinationConnectorType = value; }
    inline void SetDestinationConnectorType(ConnectorType&& value) { m_destinationConnectorTypeHasBeenSet = true; m_destinationConnectorType = std::move(value); }
    inline FlowDefinition& WithDestinationConnectorType(const ConnectorType& value) { SetDestinationConnectorType(value); return *this;}
    inline FlowDefinition& WithDestinationConnectorType(ConnectorType&& value) { SetDestinationConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline const Aws::String& GetDestinationConnectorLabel() const{ return m_destinationConnectorLabel; }
    inline bool DestinationConnectorLabelHasBeenSet() const { return m_destinationConnectorLabelHasBeenSet; }
    inline void SetDestinationConnectorLabel(const Aws::String& value) { m_destinationConnectorLabelHasBeenSet = true; m_destinationConnectorLabel = value; }
    inline void SetDestinationConnectorLabel(Aws::String&& value) { m_destinationConnectorLabelHasBeenSet = true; m_destinationConnectorLabel = std::move(value); }
    inline void SetDestinationConnectorLabel(const char* value) { m_destinationConnectorLabelHasBeenSet = true; m_destinationConnectorLabel.assign(value); }
    inline FlowDefinition& WithDestinationConnectorLabel(const Aws::String& value) { SetDestinationConnectorLabel(value); return *this;}
    inline FlowDefinition& WithDestinationConnectorLabel(Aws::String&& value) { SetDestinationConnectorLabel(std::move(value)); return *this;}
    inline FlowDefinition& WithDestinationConnectorLabel(const char* value) { SetDestinationConnectorLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the type of flow trigger. This can be <code>OnDemand</code>,
     * <code>Scheduled</code>, or <code>Event</code>. </p>
     */
    inline const TriggerType& GetTriggerType() const{ return m_triggerType; }
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }
    inline void SetTriggerType(const TriggerType& value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }
    inline void SetTriggerType(TriggerType&& value) { m_triggerTypeHasBeenSet = true; m_triggerType = std::move(value); }
    inline FlowDefinition& WithTriggerType(const TriggerType& value) { SetTriggerType(value); return *this;}
    inline FlowDefinition& WithTriggerType(TriggerType&& value) { SetTriggerType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline FlowDefinition& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline FlowDefinition& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline FlowDefinition& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline FlowDefinition& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline FlowDefinition& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline FlowDefinition& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline FlowDefinition& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = value; }
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::move(value); }
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy.assign(value); }
    inline FlowDefinition& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}
    inline FlowDefinition& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}
    inline FlowDefinition& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tags used to organize, track, or control access for your flow. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline FlowDefinition& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline FlowDefinition& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline FlowDefinition& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline FlowDefinition& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline FlowDefinition& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline FlowDefinition& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline FlowDefinition& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline FlowDefinition& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline FlowDefinition& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline const ExecutionDetails& GetLastRunExecutionDetails() const{ return m_lastRunExecutionDetails; }
    inline bool LastRunExecutionDetailsHasBeenSet() const { return m_lastRunExecutionDetailsHasBeenSet; }
    inline void SetLastRunExecutionDetails(const ExecutionDetails& value) { m_lastRunExecutionDetailsHasBeenSet = true; m_lastRunExecutionDetails = value; }
    inline void SetLastRunExecutionDetails(ExecutionDetails&& value) { m_lastRunExecutionDetailsHasBeenSet = true; m_lastRunExecutionDetails = std::move(value); }
    inline FlowDefinition& WithLastRunExecutionDetails(const ExecutionDetails& value) { SetLastRunExecutionDetails(value); return *this;}
    inline FlowDefinition& WithLastRunExecutionDetails(ExecutionDetails&& value) { SetLastRunExecutionDetails(std::move(value)); return *this;}
    ///@}
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
