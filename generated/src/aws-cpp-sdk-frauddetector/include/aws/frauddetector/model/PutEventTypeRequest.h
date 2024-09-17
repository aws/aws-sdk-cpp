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
    AWS_FRAUDDETECTOR_API PutEventTypeRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutEventTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutEventTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutEventTypeRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the event type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PutEventTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutEventTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutEventTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type variables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventVariables() const{ return m_eventVariables; }
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }
    inline void SetEventVariables(const Aws::Vector<Aws::String>& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = value; }
    inline void SetEventVariables(Aws::Vector<Aws::String>&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::move(value); }
    inline PutEventTypeRequest& WithEventVariables(const Aws::Vector<Aws::String>& value) { SetEventVariables(value); return *this;}
    inline PutEventTypeRequest& WithEventVariables(Aws::Vector<Aws::String>&& value) { SetEventVariables(std::move(value)); return *this;}
    inline PutEventTypeRequest& AddEventVariables(const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(value); return *this; }
    inline PutEventTypeRequest& AddEventVariables(Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(std::move(value)); return *this; }
    inline PutEventTypeRequest& AddEventVariables(const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The event type labels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline PutEventTypeRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}
    inline PutEventTypeRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}
    inline PutEventTypeRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    inline PutEventTypeRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }
    inline PutEventTypeRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityTypes() const{ return m_entityTypes; }
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }
    inline void SetEntityTypes(const Aws::Vector<Aws::String>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }
    inline void SetEntityTypes(Aws::Vector<Aws::String>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }
    inline PutEventTypeRequest& WithEntityTypes(const Aws::Vector<Aws::String>& value) { SetEntityTypes(value); return *this;}
    inline PutEventTypeRequest& WithEntityTypes(Aws::Vector<Aws::String>&& value) { SetEntityTypes(std::move(value)); return *this;}
    inline PutEventTypeRequest& AddEntityTypes(const Aws::String& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }
    inline PutEventTypeRequest& AddEntityTypes(Aws::String&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }
    inline PutEventTypeRequest& AddEntityTypes(const char* value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if ingestion is enabled or disabled.</p>
     */
    inline const EventIngestion& GetEventIngestion() const{ return m_eventIngestion; }
    inline bool EventIngestionHasBeenSet() const { return m_eventIngestionHasBeenSet; }
    inline void SetEventIngestion(const EventIngestion& value) { m_eventIngestionHasBeenSet = true; m_eventIngestion = value; }
    inline void SetEventIngestion(EventIngestion&& value) { m_eventIngestionHasBeenSet = true; m_eventIngestion = std::move(value); }
    inline PutEventTypeRequest& WithEventIngestion(const EventIngestion& value) { SetEventIngestion(value); return *this;}
    inline PutEventTypeRequest& WithEventIngestion(EventIngestion&& value) { SetEventIngestion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutEventTypeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PutEventTypeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PutEventTypeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PutEventTypeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables or disables event orchestration. If enabled, you can send event
     * predictions to select AWS services for downstream processing of the events.</p>
     */
    inline const EventOrchestration& GetEventOrchestration() const{ return m_eventOrchestration; }
    inline bool EventOrchestrationHasBeenSet() const { return m_eventOrchestrationHasBeenSet; }
    inline void SetEventOrchestration(const EventOrchestration& value) { m_eventOrchestrationHasBeenSet = true; m_eventOrchestration = value; }
    inline void SetEventOrchestration(EventOrchestration&& value) { m_eventOrchestrationHasBeenSet = true; m_eventOrchestration = std::move(value); }
    inline PutEventTypeRequest& WithEventOrchestration(const EventOrchestration& value) { SetEventOrchestration(value); return *this;}
    inline PutEventTypeRequest& WithEventOrchestration(EventOrchestration&& value) { SetEventOrchestration(std::move(value)); return *this;}
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

    EventIngestion m_eventIngestion;
    bool m_eventIngestionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EventOrchestration m_eventOrchestration;
    bool m_eventOrchestrationHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
