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
    AWS_FRAUDDETECTOR_API UpdateEventLabelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventLabel"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the event associated with the label to update.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    UpdateEventLabelRequest& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type of the event associated with the label to update.</p>
     */
    inline const Aws::String& GetEventTypeName() const { return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    template<typename EventTypeNameT = Aws::String>
    void SetEventTypeName(EventTypeNameT&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::forward<EventTypeNameT>(value); }
    template<typename EventTypeNameT = Aws::String>
    UpdateEventLabelRequest& WithEventTypeName(EventTypeNameT&& value) { SetEventTypeName(std::forward<EventTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new label to assign to the event.</p>
     */
    inline const Aws::String& GetAssignedLabel() const { return m_assignedLabel; }
    inline bool AssignedLabelHasBeenSet() const { return m_assignedLabelHasBeenSet; }
    template<typename AssignedLabelT = Aws::String>
    void SetAssignedLabel(AssignedLabelT&& value) { m_assignedLabelHasBeenSet = true; m_assignedLabel = std::forward<AssignedLabelT>(value); }
    template<typename AssignedLabelT = Aws::String>
    UpdateEventLabelRequest& WithAssignedLabel(AssignedLabelT&& value) { SetAssignedLabel(std::forward<AssignedLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp associated with the label. The timestamp must be specified
     * using ISO 8601 standard in UTC. </p>
     */
    inline const Aws::String& GetLabelTimestamp() const { return m_labelTimestamp; }
    inline bool LabelTimestampHasBeenSet() const { return m_labelTimestampHasBeenSet; }
    template<typename LabelTimestampT = Aws::String>
    void SetLabelTimestamp(LabelTimestampT&& value) { m_labelTimestampHasBeenSet = true; m_labelTimestamp = std::forward<LabelTimestampT>(value); }
    template<typename LabelTimestampT = Aws::String>
    UpdateEventLabelRequest& WithLabelTimestamp(LabelTimestampT&& value) { SetLabelTimestamp(std::forward<LabelTimestampT>(value)); return *this;}
    ///@}
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
