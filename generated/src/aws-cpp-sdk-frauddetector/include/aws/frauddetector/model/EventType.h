/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/EventIngestion.h>
#include <aws/frauddetector/model/IngestedEventStatistics.h>
#include <aws/frauddetector/model/EventOrchestration.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The event type details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/EventType">AWS
   * API Reference</a></p>
   */
  class EventType
  {
  public:
    AWS_FRAUDDETECTOR_API EventType() = default;
    AWS_FRAUDDETECTOR_API EventType(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EventType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event type name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EventType& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EventType& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type event variables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventVariables() const { return m_eventVariables; }
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }
    template<typename EventVariablesT = Aws::Vector<Aws::String>>
    void SetEventVariables(EventVariablesT&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::forward<EventVariablesT>(value); }
    template<typename EventVariablesT = Aws::Vector<Aws::String>>
    EventType& WithEventVariables(EventVariablesT&& value) { SetEventVariables(std::forward<EventVariablesT>(value)); return *this;}
    template<typename EventVariablesT = Aws::String>
    EventType& AddEventVariables(EventVariablesT&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace_back(std::forward<EventVariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The event type labels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Aws::String>>
    EventType& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    EventType& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The event type entity types.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityTypes() const { return m_entityTypes; }
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
    template<typename EntityTypesT = Aws::Vector<Aws::String>>
    void SetEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::forward<EntityTypesT>(value); }
    template<typename EntityTypesT = Aws::Vector<Aws::String>>
    EventType& WithEntityTypes(EntityTypesT&& value) { SetEntityTypes(std::forward<EntityTypesT>(value)); return *this;}
    template<typename EntityTypesT = Aws::String>
    EventType& AddEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.emplace_back(std::forward<EntityTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>Enabled</code>, Amazon Fraud Detector stores event data when you
     * generate a prediction and uses that data to update calculated variables in near
     * real-time. Amazon Fraud Detector uses this data, known as
     * <code>INGESTED_EVENTS</code>, to train your model and improve fraud
     * predictions.</p>
     */
    inline EventIngestion GetEventIngestion() const { return m_eventIngestion; }
    inline bool EventIngestionHasBeenSet() const { return m_eventIngestionHasBeenSet; }
    inline void SetEventIngestion(EventIngestion value) { m_eventIngestionHasBeenSet = true; m_eventIngestion = value; }
    inline EventType& WithEventIngestion(EventIngestion value) { SetEventIngestion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data about the stored events.</p>
     */
    inline const IngestedEventStatistics& GetIngestedEventStatistics() const { return m_ingestedEventStatistics; }
    inline bool IngestedEventStatisticsHasBeenSet() const { return m_ingestedEventStatisticsHasBeenSet; }
    template<typename IngestedEventStatisticsT = IngestedEventStatistics>
    void SetIngestedEventStatistics(IngestedEventStatisticsT&& value) { m_ingestedEventStatisticsHasBeenSet = true; m_ingestedEventStatistics = std::forward<IngestedEventStatisticsT>(value); }
    template<typename IngestedEventStatisticsT = IngestedEventStatistics>
    EventType& WithIngestedEventStatistics(IngestedEventStatisticsT&& value) { SetIngestedEventStatistics(std::forward<IngestedEventStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the event type was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    EventType& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the event type was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    EventType& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity type ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EventType& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event orchestration status. </p>
     */
    inline const EventOrchestration& GetEventOrchestration() const { return m_eventOrchestration; }
    inline bool EventOrchestrationHasBeenSet() const { return m_eventOrchestrationHasBeenSet; }
    template<typename EventOrchestrationT = EventOrchestration>
    void SetEventOrchestration(EventOrchestrationT&& value) { m_eventOrchestrationHasBeenSet = true; m_eventOrchestration = std::forward<EventOrchestrationT>(value); }
    template<typename EventOrchestrationT = EventOrchestration>
    EventType& WithEventOrchestration(EventOrchestrationT&& value) { SetEventOrchestration(std::forward<EventOrchestrationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventVariables;
    bool m_eventVariablesHasBeenSet = false;

    Aws::Vector<Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityTypes;
    bool m_entityTypesHasBeenSet = false;

    EventIngestion m_eventIngestion{EventIngestion::NOT_SET};
    bool m_eventIngestionHasBeenSet = false;

    IngestedEventStatistics m_ingestedEventStatistics;
    bool m_ingestedEventStatisticsHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    EventOrchestration m_eventOrchestration;
    bool m_eventOrchestrationHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
