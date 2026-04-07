/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerMonitoredTagKeyStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p> Describes a tag key that is being monitored by Capacity Manager, including
 * its activation status and the earliest available data point. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityManagerMonitoredTagKey">AWS
 * API Reference</a></p>
 */
class CapacityManagerMonitoredTagKey {
 public:
  AWS_EC2_API CapacityManagerMonitoredTagKey() = default;
  AWS_EC2_API CapacityManagerMonitoredTagKey(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityManagerMonitoredTagKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The tag key being monitored. </p>
   */
  inline const Aws::String& GetTagKey() const { return m_tagKey; }
  inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
  template <typename TagKeyT = Aws::String>
  void SetTagKey(TagKeyT&& value) {
    m_tagKeyHasBeenSet = true;
    m_tagKey = std::forward<TagKeyT>(value);
  }
  template <typename TagKeyT = Aws::String>
  CapacityManagerMonitoredTagKey& WithTagKey(TagKeyT&& value) {
    SetTagKey(std::forward<TagKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the monitored tag key. Valid values are
   * <code>activating</code>, <code>activated</code>, <code>deactivating</code>, and
   * <code>suspended</code>. </p>
   */
  inline CapacityManagerMonitoredTagKeyStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CapacityManagerMonitoredTagKeyStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CapacityManagerMonitoredTagKey& WithStatus(CapacityManagerMonitoredTagKeyStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A message providing additional details about the current status of the
   * monitored tag key. </p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  CapacityManagerMonitoredTagKey& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates whether this tag key is provided by Capacity Manager by default,
   * rather than being user-activated. </p>
   */
  inline bool GetCapacityManagerProvided() const { return m_capacityManagerProvided; }
  inline bool CapacityManagerProvidedHasBeenSet() const { return m_capacityManagerProvidedHasBeenSet; }
  inline void SetCapacityManagerProvided(bool value) {
    m_capacityManagerProvidedHasBeenSet = true;
    m_capacityManagerProvided = value;
  }
  inline CapacityManagerMonitoredTagKey& WithCapacityManagerProvided(bool value) {
    SetCapacityManagerProvided(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The earliest timestamp from which tag data is available for queries, in UTC
   * ISO 8601 format. </p>
   */
  inline const Aws::Utils::DateTime& GetEarliestDatapointTimestamp() const { return m_earliestDatapointTimestamp; }
  inline bool EarliestDatapointTimestampHasBeenSet() const { return m_earliestDatapointTimestampHasBeenSet; }
  template <typename EarliestDatapointTimestampT = Aws::Utils::DateTime>
  void SetEarliestDatapointTimestamp(EarliestDatapointTimestampT&& value) {
    m_earliestDatapointTimestampHasBeenSet = true;
    m_earliestDatapointTimestamp = std::forward<EarliestDatapointTimestampT>(value);
  }
  template <typename EarliestDatapointTimestampT = Aws::Utils::DateTime>
  CapacityManagerMonitoredTagKey& WithEarliestDatapointTimestamp(EarliestDatapointTimestampT&& value) {
    SetEarliestDatapointTimestamp(std::forward<EarliestDatapointTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tagKey;

  CapacityManagerMonitoredTagKeyStatus m_status{CapacityManagerMonitoredTagKeyStatus::NOT_SET};

  Aws::String m_statusMessage;

  bool m_capacityManagerProvided{false};

  Aws::Utils::DateTime m_earliestDatapointTimestamp{};
  bool m_tagKeyHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_capacityManagerProvidedHasBeenSet = false;
  bool m_earliestDatapointTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
