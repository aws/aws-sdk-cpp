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


    /**
     * <p>The name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name.</p>
     */
    inline PutEventTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name.</p>
     */
    inline PutEventTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name.</p>
     */
    inline PutEventTypeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the event type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the event type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the event type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the event type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the event type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the event type.</p>
     */
    inline PutEventTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the event type.</p>
     */
    inline PutEventTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the event type.</p>
     */
    inline PutEventTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The event type variables.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventVariables() const{ return m_eventVariables; }

    /**
     * <p>The event type variables.</p>
     */
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }

    /**
     * <p>The event type variables.</p>
     */
    inline void SetEventVariables(const Aws::Vector<Aws::String>& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = value; }

    /**
     * <p>The event type variables.</p>
     */
    inline void SetEventVariables(Aws::Vector<Aws::String>&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::move(value); }

    /**
     * <p>The event type variables.</p>
     */
    inline PutEventTypeRequest& WithEventVariables(const Aws::Vector<Aws::String>& value) { SetEventVariables(value); return *this;}

    /**
     * <p>The event type variables.</p>
     */
    inline PutEventTypeRequest& WithEventVariables(Aws::Vector<Aws::String>&& value) { SetEventVariables(std::move(value)); return *this;}

    /**
     * <p>The event type variables.</p>
     */
    inline PutEventTypeRequest& AddEventVariables(const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(value); return *this; }

    /**
     * <p>The event type variables.</p>
     */
    inline PutEventTypeRequest& AddEventVariables(Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(std::move(value)); return *this; }

    /**
     * <p>The event type variables.</p>
     */
    inline PutEventTypeRequest& AddEventVariables(const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.push_back(value); return *this; }


    /**
     * <p>The event type labels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabels() const{ return m_labels; }

    /**
     * <p>The event type labels.</p>
     */
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }

    /**
     * <p>The event type labels.</p>
     */
    inline void SetLabels(const Aws::Vector<Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }

    /**
     * <p>The event type labels.</p>
     */
    inline void SetLabels(Aws::Vector<Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }

    /**
     * <p>The event type labels.</p>
     */
    inline PutEventTypeRequest& WithLabels(const Aws::Vector<Aws::String>& value) { SetLabels(value); return *this;}

    /**
     * <p>The event type labels.</p>
     */
    inline PutEventTypeRequest& WithLabels(Aws::Vector<Aws::String>&& value) { SetLabels(std::move(value)); return *this;}

    /**
     * <p>The event type labels.</p>
     */
    inline PutEventTypeRequest& AddLabels(const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }

    /**
     * <p>The event type labels.</p>
     */
    inline PutEventTypeRequest& AddLabels(Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }

    /**
     * <p>The event type labels.</p>
     */
    inline PutEventTypeRequest& AddLabels(const char* value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }


    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityTypes() const{ return m_entityTypes; }

    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline bool EntityTypesHasBeenSet() const { return m_entityTypesHasBeenSet; }

    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline void SetEntityTypes(const Aws::Vector<Aws::String>& value) { m_entityTypesHasBeenSet = true; m_entityTypes = value; }

    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline void SetEntityTypes(Aws::Vector<Aws::String>&& value) { m_entityTypesHasBeenSet = true; m_entityTypes = std::move(value); }

    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline PutEventTypeRequest& WithEntityTypes(const Aws::Vector<Aws::String>& value) { SetEntityTypes(value); return *this;}

    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline PutEventTypeRequest& WithEntityTypes(Aws::Vector<Aws::String>&& value) { SetEntityTypes(std::move(value)); return *this;}

    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline PutEventTypeRequest& AddEntityTypes(const Aws::String& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }

    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline PutEventTypeRequest& AddEntityTypes(Aws::String&& value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The entity type for the event type. Example entity types: customer, merchant,
     * account.</p>
     */
    inline PutEventTypeRequest& AddEntityTypes(const char* value) { m_entityTypesHasBeenSet = true; m_entityTypes.push_back(value); return *this; }


    /**
     * <p>Specifies if ingenstion is enabled or disabled.</p>
     */
    inline const EventIngestion& GetEventIngestion() const{ return m_eventIngestion; }

    /**
     * <p>Specifies if ingenstion is enabled or disabled.</p>
     */
    inline bool EventIngestionHasBeenSet() const { return m_eventIngestionHasBeenSet; }

    /**
     * <p>Specifies if ingenstion is enabled or disabled.</p>
     */
    inline void SetEventIngestion(const EventIngestion& value) { m_eventIngestionHasBeenSet = true; m_eventIngestion = value; }

    /**
     * <p>Specifies if ingenstion is enabled or disabled.</p>
     */
    inline void SetEventIngestion(EventIngestion&& value) { m_eventIngestionHasBeenSet = true; m_eventIngestion = std::move(value); }

    /**
     * <p>Specifies if ingenstion is enabled or disabled.</p>
     */
    inline PutEventTypeRequest& WithEventIngestion(const EventIngestion& value) { SetEventIngestion(value); return *this;}

    /**
     * <p>Specifies if ingenstion is enabled or disabled.</p>
     */
    inline PutEventTypeRequest& WithEventIngestion(EventIngestion&& value) { SetEventIngestion(std::move(value)); return *this;}


    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline PutEventTypeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline PutEventTypeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline PutEventTypeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A collection of key and value pairs.</p>
     */
    inline PutEventTypeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
