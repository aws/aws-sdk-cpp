/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/frauddetector/model/Entity.h>
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
   * <p>The event details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/Event">AWS
   * API Reference</a></p>
   */
  class Event
  {
  public:
    AWS_FRAUDDETECTOR_API Event();
    AWS_FRAUDDETECTOR_API Event(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Event& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event ID.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }
    inline Event& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}
    inline Event& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}
    inline Event& WithEventId(const char* value) { SetEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }
    inline Event& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}
    inline Event& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}
    inline Event& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that defines when the event under evaluation occurred. The
     * timestamp must be specified using ISO 8601 standard in UTC.</p>
     */
    inline const Aws::String& GetEventTimestamp() const{ return m_eventTimestamp; }
    inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
    inline void SetEventTimestamp(const Aws::String& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = value; }
    inline void SetEventTimestamp(Aws::String&& value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp = std::move(value); }
    inline void SetEventTimestamp(const char* value) { m_eventTimestampHasBeenSet = true; m_eventTimestamp.assign(value); }
    inline Event& WithEventTimestamp(const Aws::String& value) { SetEventTimestamp(value); return *this;}
    inline Event& WithEventTimestamp(Aws::String&& value) { SetEventTimestamp(std::move(value)); return *this;}
    inline Event& WithEventTimestamp(const char* value) { SetEventTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Names of the event type's variables you defined in Amazon Fraud Detector to
     * represent data elements and their corresponding values for the event you are
     * sending for evaluation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEventVariables() const{ return m_eventVariables; }
    inline bool EventVariablesHasBeenSet() const { return m_eventVariablesHasBeenSet; }
    inline void SetEventVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = value; }
    inline void SetEventVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables = std::move(value); }
    inline Event& WithEventVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEventVariables(value); return *this;}
    inline Event& WithEventVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEventVariables(std::move(value)); return *this;}
    inline Event& AddEventVariables(const Aws::String& key, const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, value); return *this; }
    inline Event& AddEventVariables(Aws::String&& key, const Aws::String& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), value); return *this; }
    inline Event& AddEventVariables(const Aws::String& key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, std::move(value)); return *this; }
    inline Event& AddEventVariables(Aws::String&& key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline Event& AddEventVariables(const char* key, Aws::String&& value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, std::move(value)); return *this; }
    inline Event& AddEventVariables(Aws::String&& key, const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(std::move(key), value); return *this; }
    inline Event& AddEventVariables(const char* key, const char* value) { m_eventVariablesHasBeenSet = true; m_eventVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label associated with the event.</p>
     */
    inline const Aws::String& GetCurrentLabel() const{ return m_currentLabel; }
    inline bool CurrentLabelHasBeenSet() const { return m_currentLabelHasBeenSet; }
    inline void SetCurrentLabel(const Aws::String& value) { m_currentLabelHasBeenSet = true; m_currentLabel = value; }
    inline void SetCurrentLabel(Aws::String&& value) { m_currentLabelHasBeenSet = true; m_currentLabel = std::move(value); }
    inline void SetCurrentLabel(const char* value) { m_currentLabelHasBeenSet = true; m_currentLabel.assign(value); }
    inline Event& WithCurrentLabel(const Aws::String& value) { SetCurrentLabel(value); return *this;}
    inline Event& WithCurrentLabel(Aws::String&& value) { SetCurrentLabel(std::move(value)); return *this;}
    inline Event& WithCurrentLabel(const char* value) { SetCurrentLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp associated with the label to update. The timestamp must be
     * specified using ISO 8601 standard in UTC.</p>
     */
    inline const Aws::String& GetLabelTimestamp() const{ return m_labelTimestamp; }
    inline bool LabelTimestampHasBeenSet() const { return m_labelTimestampHasBeenSet; }
    inline void SetLabelTimestamp(const Aws::String& value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp = value; }
    inline void SetLabelTimestamp(Aws::String&& value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp = std::move(value); }
    inline void SetLabelTimestamp(const char* value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp.assign(value); }
    inline Event& WithLabelTimestamp(const Aws::String& value) { SetLabelTimestamp(value); return *this;}
    inline Event& WithLabelTimestamp(Aws::String&& value) { SetLabelTimestamp(std::move(value)); return *this;}
    inline Event& WithLabelTimestamp(const char* value) { SetLabelTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event entities.</p>
     */
    inline const Aws::Vector<Entity>& GetEntities() const{ return m_entities; }
    inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
    inline void SetEntities(const Aws::Vector<Entity>& value) { m_entitiesHasBeenSet = true; m_entities = value; }
    inline void SetEntities(Aws::Vector<Entity>&& value) { m_entitiesHasBeenSet = true; m_entities = std::move(value); }
    inline Event& WithEntities(const Aws::Vector<Entity>& value) { SetEntities(value); return *this;}
    inline Event& WithEntities(Aws::Vector<Entity>&& value) { SetEntities(std::move(value)); return *this;}
    inline Event& AddEntities(const Entity& value) { m_entitiesHasBeenSet = true; m_entities.push_back(value); return *this; }
    inline Event& AddEntities(Entity&& value) { m_entitiesHasBeenSet = true; m_entities.push_back(std::move(value)); return *this; }
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

    Aws::String m_currentLabel;
    bool m_currentLabelHasBeenSet = false;

    Aws::String m_labelTimestamp;
    bool m_labelTimestampHasBeenSet = false;

    Aws::Vector<Entity> m_entities;
    bool m_entitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
