/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/EventSubscriptionSegmentStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Represents a segment associated with a membership event stream.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AssociatedSegment">AWS
 * API Reference</a></p>
 */
class AssociatedSegment {
 public:
  AWS_CUSTOMERPROFILES_API AssociatedSegment() = default;
  AWS_CUSTOMERPROFILES_API AssociatedSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API AssociatedSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique name of the segment definition. </p>
   */
  inline const Aws::String& GetSegmentName() const { return m_segmentName; }
  inline bool SegmentNameHasBeenSet() const { return m_segmentNameHasBeenSet; }
  template <typename SegmentNameT = Aws::String>
  void SetSegmentName(SegmentNameT&& value) {
    m_segmentNameHasBeenSet = true;
    m_segmentName = std::forward<SegmentNameT>(value);
  }
  template <typename SegmentNameT = Aws::String>
  AssociatedSegment& WithSegmentName(SegmentNameT&& value) {
    SetSegmentName(std::forward<SegmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subscription status of the segment. The following are valid values: </p>
   * <ul> <li> <p> <b>STARTING</b>: The segment is being prepared to publish
   * membership events. </p> </li> <li> <p> <b>RUNNING</b>: The segment is actively
   * publishing membership events to the stream. </p> </li> <li> <p> <b>STOPPED</b>:
   * The segment has stopped publishing membership events. </p> </li> <li> <p>
   * <b>FAILED</b>: The segment failed to publish membership events. </p> </li> </ul>
   */
  inline EventSubscriptionSegmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EventSubscriptionSegmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AssociatedSegment& WithStatus(EventSubscriptionSegmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional message providing context, such as a failure reason. </p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  AssociatedSegment& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_segmentName;

  EventSubscriptionSegmentStatus m_status{EventSubscriptionSegmentStatus::NOT_SET};

  Aws::String m_message;
  bool m_segmentNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
