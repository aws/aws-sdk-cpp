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
    AWS_APPFLOW_API FlowDefinition() = default;
    AWS_APPFLOW_API FlowDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API FlowDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The flow's Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    FlowDefinition& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A user-entered description of the flow. </p>
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
     * <p> The specified name of the flow. Spaces are not allowed. Use underscores (_)
     * or hyphens (-) only. </p>
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
     * <p> Indicates the current status of the flow. </p>
     */
    inline FlowStatus GetFlowStatus() const { return m_flowStatus; }
    inline bool FlowStatusHasBeenSet() const { return m_flowStatusHasBeenSet; }
    inline void SetFlowStatus(FlowStatus value) { m_flowStatusHasBeenSet = true; m_flowStatus = value; }
    inline FlowDefinition& WithFlowStatus(FlowStatus value) { SetFlowStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the source connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline ConnectorType GetSourceConnectorType() const { return m_sourceConnectorType; }
    inline bool SourceConnectorTypeHasBeenSet() const { return m_sourceConnectorTypeHasBeenSet; }
    inline void SetSourceConnectorType(ConnectorType value) { m_sourceConnectorTypeHasBeenSet = true; m_sourceConnectorType = value; }
    inline FlowDefinition& WithSourceConnectorType(ConnectorType value) { SetSourceConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the source connector in the flow.</p>
     */
    inline const Aws::String& GetSourceConnectorLabel() const { return m_sourceConnectorLabel; }
    inline bool SourceConnectorLabelHasBeenSet() const { return m_sourceConnectorLabelHasBeenSet; }
    template<typename SourceConnectorLabelT = Aws::String>
    void SetSourceConnectorLabel(SourceConnectorLabelT&& value) { m_sourceConnectorLabelHasBeenSet = true; m_sourceConnectorLabel = std::forward<SourceConnectorLabelT>(value); }
    template<typename SourceConnectorLabelT = Aws::String>
    FlowDefinition& WithSourceConnectorLabel(SourceConnectorLabelT&& value) { SetSourceConnectorLabel(std::forward<SourceConnectorLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the destination connector type, such as Salesforce, Amazon S3,
     * Amplitude, and so on. </p>
     */
    inline ConnectorType GetDestinationConnectorType() const { return m_destinationConnectorType; }
    inline bool DestinationConnectorTypeHasBeenSet() const { return m_destinationConnectorTypeHasBeenSet; }
    inline void SetDestinationConnectorType(ConnectorType value) { m_destinationConnectorTypeHasBeenSet = true; m_destinationConnectorType = value; }
    inline FlowDefinition& WithDestinationConnectorType(ConnectorType value) { SetDestinationConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the destination connector in the flow.</p>
     */
    inline const Aws::String& GetDestinationConnectorLabel() const { return m_destinationConnectorLabel; }
    inline bool DestinationConnectorLabelHasBeenSet() const { return m_destinationConnectorLabelHasBeenSet; }
    template<typename DestinationConnectorLabelT = Aws::String>
    void SetDestinationConnectorLabel(DestinationConnectorLabelT&& value) { m_destinationConnectorLabelHasBeenSet = true; m_destinationConnectorLabel = std::forward<DestinationConnectorLabelT>(value); }
    template<typename DestinationConnectorLabelT = Aws::String>
    FlowDefinition& WithDestinationConnectorLabel(DestinationConnectorLabelT&& value) { SetDestinationConnectorLabel(std::forward<DestinationConnectorLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the type of flow trigger. This can be <code>OnDemand</code>,
     * <code>Scheduled</code>, or <code>Event</code>. </p>
     */
    inline TriggerType GetTriggerType() const { return m_triggerType; }
    inline bool TriggerTypeHasBeenSet() const { return m_triggerTypeHasBeenSet; }
    inline void SetTriggerType(TriggerType value) { m_triggerTypeHasBeenSet = true; m_triggerType = value; }
    inline FlowDefinition& WithTriggerType(TriggerType value) { SetTriggerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the flow was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    FlowDefinition& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies when the flow was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    FlowDefinition& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the user who created the flow. </p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    FlowDefinition& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the account user name that most recently updated the flow. </p>
     */
    inline const Aws::String& GetLastUpdatedBy() const { return m_lastUpdatedBy; }
    inline bool LastUpdatedByHasBeenSet() const { return m_lastUpdatedByHasBeenSet; }
    template<typename LastUpdatedByT = Aws::String>
    void SetLastUpdatedBy(LastUpdatedByT&& value) { m_lastUpdatedByHasBeenSet = true; m_lastUpdatedBy = std::forward<LastUpdatedByT>(value); }
    template<typename LastUpdatedByT = Aws::String>
    FlowDefinition& WithLastUpdatedBy(LastUpdatedByT&& value) { SetLastUpdatedBy(std::forward<LastUpdatedByT>(value)); return *this;}
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
    FlowDefinition& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    FlowDefinition& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline const ExecutionDetails& GetLastRunExecutionDetails() const { return m_lastRunExecutionDetails; }
    inline bool LastRunExecutionDetailsHasBeenSet() const { return m_lastRunExecutionDetailsHasBeenSet; }
    template<typename LastRunExecutionDetailsT = ExecutionDetails>
    void SetLastRunExecutionDetails(LastRunExecutionDetailsT&& value) { m_lastRunExecutionDetailsHasBeenSet = true; m_lastRunExecutionDetails = std::forward<LastRunExecutionDetailsT>(value); }
    template<typename LastRunExecutionDetailsT = ExecutionDetails>
    FlowDefinition& WithLastRunExecutionDetails(LastRunExecutionDetailsT&& value) { SetLastRunExecutionDetails(std::forward<LastRunExecutionDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowName;
    bool m_flowNameHasBeenSet = false;

    FlowStatus m_flowStatus{FlowStatus::NOT_SET};
    bool m_flowStatusHasBeenSet = false;

    ConnectorType m_sourceConnectorType{ConnectorType::NOT_SET};
    bool m_sourceConnectorTypeHasBeenSet = false;

    Aws::String m_sourceConnectorLabel;
    bool m_sourceConnectorLabelHasBeenSet = false;

    ConnectorType m_destinationConnectorType{ConnectorType::NOT_SET};
    bool m_destinationConnectorTypeHasBeenSet = false;

    Aws::String m_destinationConnectorLabel;
    bool m_destinationConnectorLabelHasBeenSet = false;

    TriggerType m_triggerType{TriggerType::NOT_SET};
    bool m_triggerTypeHasBeenSet = false;

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

    ExecutionDetails m_lastRunExecutionDetails;
    bool m_lastRunExecutionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
