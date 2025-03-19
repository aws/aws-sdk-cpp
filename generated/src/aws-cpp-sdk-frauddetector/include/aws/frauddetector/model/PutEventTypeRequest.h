/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/EventIngestion.h>
#include <aws/frauddetector/model/EventOrchestration.h>
#include <aws/frauddetector/model/Tag.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class PutEventTypeRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API PutEventTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEventType"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutEventTypeRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutEventTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type variables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventVariables() const { return m_eventVariables; }
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }
    template<typename EventVariablesT = Aws::Vector<Aws::String>>
    void SetEventVariables(EventVariablesT&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::forward<EventVariablesT>(value); }
    template<typename EventVariablesT = Aws::Vector<Aws::String>>
    PutEventTypeRequest& WithEventVariables(EventVariablesT&& value) { SetEventVariables(std::forward<EventVariablesT>(value)); return *this;}
    template<typename EventVariablesT = Aws::String>
    PutEventTypeRequest& AddEventVariables(EventVariablesT&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace_back(std::forward<EventVariablesT>(value)); return *this; }
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
    PutEventTypeRequest& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Aws::String>
    PutEventTypeRequest& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityTypes() const { return m_entityTypes; }
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
    template<typename EntityTypesT = Aws::Vector<Aws::String>>
    void SetEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::forward<EntityTypesT>(value); }
    template<typename EntityTypesT = Aws::Vector<Aws::String>>
    PutEventTypeRequest& WithEntityTypes(EntityTypesT&& value) { SetEntityTypes(std::forward<EntityTypesT>(value)); return *this;}
    template<typename EntityTypesT = Aws::String>
    PutEventTypeRequest& AddEntityTypes(EntityTypesT&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.emplace_back(std::forward<EntityTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if ingestion is enabled or disabled.</p>
     */
    inline EventIngestion GetEventIngestion() const { return m_eventIngestion; }
    inline bool EventIngestionHasBeenSet() const { return m_eventIngestionHasBeenSet; }
    inline void SetEventIngestion(EventIngestion value) { m_eventIngestionHasBeenSet = true; m_eventIngestion = value; }
    inline PutEventTypeRequest& WithEventIngestion(EventIngestion value) { SetEventIngestion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutEventTypeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutEventTypeRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables or disables event orchestration. If enabled, you can send event
     * predictions to select AWS services for downstream processing of the events.</p>
     */
    inline const EventOrchestration& GetEventOrchestration() const { return m_eventOrchestration; }
    inline bool EventOrchestrationHasBeenSet() const { return m_eventOrchestrationHasBeenSet; }
    template<typename EventOrchestrationT = EventOrchestration>
    void SetEventOrchestration(EventOrchestrationT&& value) { m_eventOrchestrationHasBeenSet = true; m_eventOrchestration = std::forward<EventOrchestrationT>(value); }
    template<typename EventOrchestrationT = EventOrchestration>
    PutEventTypeRequest& WithEventOrchestration(EventOrchestrationT&& value) { SetEventOrchestration(std::forward<EventOrchestrationT>(value)); return *this;}
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EventOrchestration m_eventOrchestration;
    bool m_eventOrchestrationHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
