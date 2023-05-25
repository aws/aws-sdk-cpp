/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class UpdateEventLabelRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateEventLabelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventLabel"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline UpdateEventLabelRequest& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline UpdateEventLabelRequest& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline UpdateEventLabelRequest& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }

    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }

    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }

    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }

    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }

    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline UpdateEventLabelRequest& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}

    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline UpdateEventLabelRequest& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}

    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline UpdateEventLabelRequest& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}


    /**
     * <p>The new label to assign to the event.</p>
     */
    inline const Aws::String& GetAssignedLabel() const{ return m_assignedLabel; }

    /**
     * <p>The new label to assign to the event.</p>
     */
    inline bool AssignedLabelHasBeenSet() const { return m_assignedLabelHasBeenSet; }

    /**
     * <p>The new label to assign to the event.</p>
     */
    inline void SetAssignedLabel(const Aws::String& value) { m_assignedLabelHasBeenSet = true; m_assignedLabel = value; }

    /**
     * <p>The new label to assign to the event.</p>
     */
    inline void SetAssignedLabel(Aws::String&& value) { m_assignedLabelHasBeenSet = true; m_assignedLabel = std::move(value); }

    /**
     * <p>The new label to assign to the event.</p>
     */
    inline void SetAssignedLabel(const char* value) { m_assignedLabelHasBeenSet = true; m_assignedLabel.assign(value); }

    /**
     * <p>The new label to assign to the event.</p>
     */
    inline UpdateEventLabelRequest& WithAssignedLabel(const Aws::String& value) { SetAssignedLabel(value); return *this;}

    /**
     * <p>The new label to assign to the event.</p>
     */
    inline UpdateEventLabelRequest& WithAssignedLabel(Aws::String&& value) { SetAssignedLabel(std::move(value)); return *this;}

    /**
     * <p>The new label to assign to the event.</p>
     */
    inline UpdateEventLabelRequest& WithAssignedLabel(const char* value) { SetAssignedLabel(value); return *this;}


    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline const Aws::String& GetLabelTimestamp() const{ return m_labelTimestamp; }

    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline bool LabelTimestampHasBeenSet() const { return m_labelTimestampHasBeenSet; }

    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline void SetLabelTimestamp(const Aws::String& value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp = value; }

    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline void SetLabelTimestamp(Aws::String&& value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp = std::move(value); }

    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline void SetLabelTimestamp(const char* value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp.assign(value); }

    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline UpdateEventLabelRequest& WithLabelTimestamp(const Aws::String& value) { SetLabelTimestamp(value); return *this;}

    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline UpdateEventLabelRequest& WithLabelTimestamp(Aws::String&& value) { SetLabelTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline UpdateEventLabelRequest& WithLabelTimestamp(const char* value) { SetLabelTimestamp(value); return *this;}

  private:

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;

    Aws::String m_assignedLabel;
    bool m_assignedLabelHasBeenSet = false;

    Aws::String m_labelTimestamp;
    bool m_labelTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
