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
    AWS_FRAUDDETECTOR_API SendEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEvent"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The event ID to upload.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    SendEventRequest& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type name of the event.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    SendEventRequest& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline const Aws::String& GetEventTimestamp() const { return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    template<typename EventTimestampT = Aws::String>
    void SetEventTimestamp(EventTimestampT&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::forward<EventTimestampT>(value); }
    template<typename EventTimestampT = Aws::String>
    SendEventRequest& WithEventTimestamp(EventTimestampT&& value) { SetEventTimestamp(std::forward<EventTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventVariables() const { return m_eventVariables; }
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }
    template<typename EventVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEventVariables(EventVariablesT&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::forward<EventVariablesT>(value); }
    template<typename EventVariablesT = Aws::Map<Aws::String, Aws::String>>
    SendEventRequest& WithEventVariables(EventVariablesT&& value) { SetEventVariables(std::forward<EventVariablesT>(value)); return *this;}
    template<typename EventVariablesKeyT = Aws::String, typename EventVariablesValueT = Aws::String>
    SendEventRequest& AddEventVariables(EventVariablesKeyT&& key, EventVariablesValueT&& value) {
      m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::forward<EventVariablesKeyT>(key), std::forward<EventVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The label to associate with the event. Required if specifying
     * <code>labelTimestamp</code>.</p>
     */
    inline const Aws::String& GetAssignedLabel() const { return m_assignedLabel; }
    inline bool AssignedLabelHasBeenSet() const { return m_assignedLabelHasBeenSet; }
    template<typename AssignedLabelT = Aws::String>
    void SetAssignedLabel(AssignedLabelT&& value) { m_assignedLabelHasBeenSet = true; m_assignedLabel = std::forward<AssignedLabelT>(value); }
    template<typename AssignedLabelT = Aws::String>
    SendEventRequest& WithAssignedLabel(AssignedLabelT&& value) { SetAssignedLabel(std::forward<AssignedLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp associated with the label. Required if specifying
     * <code>assignedLabel</code>.</p>
     */
    inline const Aws::String& GetLabelTimestamp() const { return m_labelTimestamp; }
    inline bool LabelTimestampHasBeenSet() const { return m_labelTimestampHasBeenSet; }
    template<typename LabelTimestampT = Aws::String>
    void SetLabelTimestamp(LabelTimestampT&& value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp = std::forward<LabelTimestampT>(value); }
    template<typename LabelTimestampT = Aws::String>
    SendEventRequest& WithLabelTimestamp(LabelTimestampT&& value) { SetLabelTimestamp(std::forward<LabelTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of entities.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const { return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    template<typename EntitiesT = Aws::Vector<Entity>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<Entity>>
    SendEventRequest& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = Entity>
    SendEventRequest& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}
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
