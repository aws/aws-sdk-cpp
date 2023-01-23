/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Entity.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class SendEventRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API SendEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEvent"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The event ID to upload.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The event ID to upload.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The event ID to upload.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The event ID to upload.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The event ID to upload.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The event ID to upload.</p>
     */
    inline SendEventRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The event ID to upload.</p>
     */
    inline SendEventRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The event ID to upload.</p>
     */
    inline SendEventRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The event type name of the event.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The event type name of the event.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The event type name of the event.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The event type name of the event.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The event type name of the event.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The event type name of the event.</p>
     */
    inline SendEventRequest& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The event type name of the event.</p>
     */
    inline SendEventRequest& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The event type name of the event.</p>
     */
    inline SendEventRequest& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline const Aws::String& GetEventTimestamp() const{ return m_eventTimestamp; }

    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }

    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline void SetEventTimestamp(const Aws::String& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }

    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline void SetEventTimestamp(Aws::String&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::move(value); }

    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline void SetEventTimestamp(const char* value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp.assign(value); }

    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline SendEventRequest& WithEventTimestamp(const Aws::String& value) { SetEventTimestamp(value); return *this;}

    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline SendEventRequest& WithEventTimestamp(Aws::String&& value) { SetEventTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline SendEventRequest& WithEventTimestamp(const char* value) { SetEventTimestamp(value); return *this;}


    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventVariables() const{ return m_eventVariables; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline void SetEventVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = value; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline void SetEventVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::move(value); }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& WithEventVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEventVariables(value); return *this;}

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& WithEventVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEventVariables(std::move(value)); return *this;}

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& AddEventVariables(const Aws::String& key, const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, value); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& AddEventVariables(Aws::String&& key, const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& AddEventVariables(const Aws::String& key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& AddEventVariables(Aws::String&& key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& AddEventVariables(const char* key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& AddEventVariables(Aws::String&& key, const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline SendEventRequest& AddEventVariables(const char* key, const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, value); return *this; }


    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline const Aws::String& GetAssignedLabel() const{ return m_assignedLabel; }

    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline bool AssignedLabelHasBeenSet() const { return m_assignedLabelHasBeenSet; }

    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline void SetAssignedLabel(const Aws::String& value) { m_assignedLabelHasBeenSet = true; m_assignedLabel = value; }

    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline void SetAssignedLabel(Aws::String&& value) { m_assignedLabelHasBeenSet = true; m_assignedLabel = std::move(value); }

    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline void SetAssignedLabel(const char* value) { m_assignedLabelHasBeenSet = true; m_assignedLabel.assign(value); }

    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline SendEventRequest& WithAssignedLabel(const Aws::String& value) { SetAssignedLabel(value); return *this;}

    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline SendEventRequest& WithAssignedLabel(Aws::String&& value) { SetAssignedLabel(std::move(value)); return *this;}

    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline SendEventRequest& WithAssignedLabel(const char* value) { SetAssignedLabel(value); return *this;}


    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline const Aws::String& GetLabelTimestamp() const{ return m_labelTimestamp; }

    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline bool LabelTimestampHasBeenSet() const { return m_labelTimestampHasBeenSet; }

    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline void SetLabelTimestamp(const Aws::String& value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp = value; }

    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline void SetLabelTimestamp(Aws::String&& value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp = std::move(value); }

    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline void SetLabelTimestamp(const char* value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp.assign(value); }

    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline SendEventRequest& WithLabelTimestamp(const Aws::String& value) { SetLabelTimestamp(value); return *this;}

    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline SendEventRequest& WithLabelTimestamp(Aws::String&& value) { SetLabelTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline SendEventRequest& WithLabelTimestamp(const char* value) { SetLabelTimestamp(value); return *this;}


    /**
     * <p>An array of entities.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }

    /**
     * <p>An array of entities.</p>
     */
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }

    /**
     * <p>An array of entities.</p>
     */
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entitiesHasBeenSet = true; m_entities = value; }

    /**
     * <p>An array of entities.</p>
     */
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }

    /**
     * <p>An array of entities.</p>
     */
    inline SendEventRequest& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}

    /**
     * <p>An array of entities.</p>
     */
    inline SendEventRequest& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>An array of entities.</p>
     */
    inline SendEventRequest& AddEntities(const Entity& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }

    /**
     * <p>An array of entities.</p>
     */
    inline SendEventRequest& AddEntities(Entity&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_eventTimestamp;
    bool m_eventTimestampHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_eventVariables;
    bool m_eventVariablesHasBeenSet = false;

    Aws::String m_assignedLabel;
    bool m_assignedLabelHasBeenSet = false;

    Aws::String m_labelTimestamp;
    bool m_labelTimestampHasBeenSet = false;

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
