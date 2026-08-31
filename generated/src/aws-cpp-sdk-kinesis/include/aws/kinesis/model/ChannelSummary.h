/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ChannelDestinationType.h>
#include <aws/kinesis/model/ChannelStatus.h>
#include <aws/kinesis/model/ChannelStreamIdentifier.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>A summary of a channel, returned by <a>ListChannels</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ChannelSummary">AWS
 * API Reference</a></p>
 */
class ChannelSummary {
 public:
  AWS_KINESIS_API ChannelSummary() = default;
  AWS_KINESIS_API ChannelSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API ChannelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the channel.</p>
   */
  inline const Aws::String& GetChannelName() const { return m_channelName; }
  inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
  template <typename ChannelNameT = Aws::String>
  void SetChannelName(ChannelNameT&& value) {
    m_channelNameHasBeenSet = true;
    m_channelName = std::forward<ChannelNameT>(value);
  }
  template <typename ChannelNameT = Aws::String>
  ChannelSummary& WithChannelName(ChannelNameT&& value) {
    SetChannelName(std::forward<ChannelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the channel.</p>
   */
  inline const Aws::String& GetChannelARN() const { return m_channelARN; }
  inline bool ChannelARNHasBeenSet() const { return m_channelARNHasBeenSet; }
  template <typename ChannelARNT = Aws::String>
  void SetChannelARN(ChannelARNT&& value) {
    m_channelARNHasBeenSet = true;
    m_channelARN = std::forward<ChannelARNT>(value);
  }
  template <typename ChannelARNT = Aws::String>
  ChannelSummary& WithChannelARN(ChannelARNT&& value) {
    SetChannelARN(std::forward<ChannelARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the channel.</p>
   */
  inline const Aws::String& GetChannelId() const { return m_channelId; }
  inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
  template <typename ChannelIdT = Aws::String>
  void SetChannelId(ChannelIdT&& value) {
    m_channelIdHasBeenSet = true;
    m_channelId = std::forward<ChannelIdT>(value);
  }
  template <typename ChannelIdT = Aws::String>
  ChannelSummary& WithChannelId(ChannelIdT&& value) {
    SetChannelId(std::forward<ChannelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the channel. Valid values:</p> <ul> <li> <p>
   * <code>CREATING</code> </p> </li> <li> <p> <code>ACTIVE</code> </p> </li> <li>
   * <p> <code>UPDATING</code> </p> </li> <li> <p> <code>DELETING</code> </p> </li>
   * <li> <p> <code>FAILED</code> - See <code>ChannelStatusReason</code> for the
   * failure cause.</p> </li> </ul>
   */
  inline ChannelStatus GetChannelStatus() const { return m_channelStatus; }
  inline bool ChannelStatusHasBeenSet() const { return m_channelStatusHasBeenSet; }
  inline void SetChannelStatus(ChannelStatus value) {
    m_channelStatusHasBeenSet = true;
    m_channelStatus = value;
  }
  inline ChannelSummary& WithChannelStatus(ChannelStatus value) {
    SetChannelStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing the reason for a <code>FAILED</code> status.</p>
   */
  inline const Aws::String& GetChannelStatusReason() const { return m_channelStatusReason; }
  inline bool ChannelStatusReasonHasBeenSet() const { return m_channelStatusReasonHasBeenSet; }
  template <typename ChannelStatusReasonT = Aws::String>
  void SetChannelStatusReason(ChannelStatusReasonT&& value) {
    m_channelStatusReasonHasBeenSet = true;
    m_channelStatusReason = std::forward<ChannelStatusReasonT>(value);
  }
  template <typename ChannelStatusReasonT = Aws::String>
  ChannelSummary& WithChannelStatusReason(ChannelStatusReasonT&& value) {
    SetChannelStatusReason(std::forward<ChannelStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the channel was created.</p>
   */
  inline const Aws::Utils::DateTime& GetChannelCreationTimestamp() const { return m_channelCreationTimestamp; }
  inline bool ChannelCreationTimestampHasBeenSet() const { return m_channelCreationTimestampHasBeenSet; }
  template <typename ChannelCreationTimestampT = Aws::Utils::DateTime>
  void SetChannelCreationTimestamp(ChannelCreationTimestampT&& value) {
    m_channelCreationTimestampHasBeenSet = true;
    m_channelCreationTimestamp = std::forward<ChannelCreationTimestampT>(value);
  }
  template <typename ChannelCreationTimestampT = Aws::Utils::DateTime>
  ChannelSummary& WithChannelCreationTimestamp(ChannelCreationTimestampT&& value) {
    SetChannelCreationTimestamp(std::forward<ChannelCreationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination type of the channel. Valid values:</p> <ul> <li> <p>
   * <code>S3</code> - Delivery to a general purpose Amazon S3 bucket.</p> </li> <li>
   * <p> <code>S3_TABLES</code> - Delivery to streaming tables on Apache Iceberg.</p>
   * </li> </ul>
   */
  inline ChannelDestinationType GetChannelDestinationType() const { return m_channelDestinationType; }
  inline bool ChannelDestinationTypeHasBeenSet() const { return m_channelDestinationTypeHasBeenSet; }
  inline void SetChannelDestinationType(ChannelDestinationType value) {
    m_channelDestinationTypeHasBeenSet = true;
    m_channelDestinationType = value;
  }
  inline ChannelSummary& WithChannelDestinationType(ChannelDestinationType value) {
    SetChannelDestinationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source streams associated with the channel.</p>
   */
  inline const Aws::Vector<ChannelStreamIdentifier>& GetStreams() const { return m_streams; }
  inline bool StreamsHasBeenSet() const { return m_streamsHasBeenSet; }
  template <typename StreamsT = Aws::Vector<ChannelStreamIdentifier>>
  void SetStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams = std::forward<StreamsT>(value);
  }
  template <typename StreamsT = Aws::Vector<ChannelStreamIdentifier>>
  ChannelSummary& WithStreams(StreamsT&& value) {
    SetStreams(std::forward<StreamsT>(value));
    return *this;
  }
  template <typename StreamsT = ChannelStreamIdentifier>
  ChannelSummary& AddStreams(StreamsT&& value) {
    m_streamsHasBeenSet = true;
    m_streams.emplace_back(std::forward<StreamsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_channelName;

  Aws::String m_channelARN;

  Aws::String m_channelId;

  ChannelStatus m_channelStatus{ChannelStatus::NOT_SET};

  Aws::String m_channelStatusReason;

  Aws::Utils::DateTime m_channelCreationTimestamp{};

  ChannelDestinationType m_channelDestinationType{ChannelDestinationType::NOT_SET};

  Aws::Vector<ChannelStreamIdentifier> m_streams;
  bool m_channelNameHasBeenSet = false;
  bool m_channelARNHasBeenSet = false;
  bool m_channelIdHasBeenSet = false;
  bool m_channelStatusHasBeenSet = false;
  bool m_channelStatusReasonHasBeenSet = false;
  bool m_channelCreationTimestampHasBeenSet = false;
  bool m_channelDestinationTypeHasBeenSet = false;
  bool m_streamsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
