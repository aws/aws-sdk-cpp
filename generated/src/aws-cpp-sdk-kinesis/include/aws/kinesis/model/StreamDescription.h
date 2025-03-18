/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamStatus.h>
#include <aws/kinesis/model/StreamModeDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis/model/EncryptionType.h>
#include <aws/kinesis/model/Shard.h>
#include <aws/kinesis/model/EnhancedMetrics.h>
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
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the output for <a>DescribeStream</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/StreamDescription">AWS
   * API Reference</a></p>
   */
  class StreamDescription
  {
  public:
    AWS_KINESIS_API StreamDescription() = default;
    AWS_KINESIS_API StreamDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API StreamDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the stream being described.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    StreamDescription& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the stream being described.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    StreamDescription& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the stream being described. The stream status is one of
     * the following states:</p> <ul> <li> <p> <code>CREATING</code> - The stream is
     * being created. Kinesis Data Streams immediately returns and sets
     * <code>StreamStatus</code> to <code>CREATING</code>.</p> </li> <li> <p>
     * <code>DELETING</code> - The stream is being deleted. The specified stream is in
     * the <code>DELETING</code> state until Kinesis Data Streams completes the
     * deletion.</p> </li> <li> <p> <code>ACTIVE</code> - The stream exists and is
     * ready for read and write operations or deletion. You should perform read and
     * write operations only on an <code>ACTIVE</code> stream.</p> </li> <li> <p>
     * <code>UPDATING</code> - Shards in the stream are being merged or split. Read and
     * write operations continue to work while the stream is in the
     * <code>UPDATING</code> state.</p> </li> </ul>
     */
    inline StreamStatus GetStreamStatus() const { return m_streamStatus; }
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
    inline void SetStreamStatus(StreamStatus value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline StreamDescription& WithStreamStatus(StreamStatus value) { SetStreamStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the capacity mode to which you want to set your data stream.
     * Currently, in Kinesis Data Streams, you can choose between an <b>on-demand</b>
     * capacity mode and a <b>provisioned</b> capacity mode for your data streams. </p>
     */
    inline const StreamModeDetails& GetStreamModeDetails() const { return m_streamModeDetails; }
    inline bool StreamModeDetailsHasBeenSet() const { return m_streamModeDetailsHasBeenSet; }
    template<typename StreamModeDetailsT = StreamModeDetails>
    void SetStreamModeDetails(StreamModeDetailsT&& value) { m_streamModeDetailsHasBeenSet = true; m_streamModeDetails = std::forward<StreamModeDetailsT>(value); }
    template<typename StreamModeDetailsT = StreamModeDetails>
    StreamDescription& WithStreamModeDetails(StreamModeDetailsT&& value) { SetStreamModeDetails(std::forward<StreamModeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shards that comprise the stream.</p>
     */
    inline const Aws::Vector<Shard>& GetShards() const { return m_shards; }
    inline bool ShardsHasBeenSet() const { return m_shardsHasBeenSet; }
    template<typename ShardsT = Aws::Vector<Shard>>
    void SetShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards = std::forward<ShardsT>(value); }
    template<typename ShardsT = Aws::Vector<Shard>>
    StreamDescription& WithShards(ShardsT&& value) { SetShards(std::forward<ShardsT>(value)); return *this;}
    template<typename ShardsT = Shard>
    StreamDescription& AddShards(ShardsT&& value) { m_shardsHasBeenSet = true; m_shards.emplace_back(std::forward<ShardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, more shards in the stream are available to
     * describe.</p>
     */
    inline bool GetHasMoreShards() const { return m_hasMoreShards; }
    inline bool HasMoreShardsHasBeenSet() const { return m_hasMoreShardsHasBeenSet; }
    inline void SetHasMoreShards(bool value) { m_hasMoreShardsHasBeenSet = true; m_hasMoreShards = value; }
    inline StreamDescription& WithHasMoreShards(bool value) { SetHasMoreShards(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current retention period, in hours. Minimum value of 24. Maximum value of
     * 168.</p>
     */
    inline int GetRetentionPeriodHours() const { return m_retentionPeriodHours; }
    inline bool RetentionPeriodHoursHasBeenSet() const { return m_retentionPeriodHoursHasBeenSet; }
    inline void SetRetentionPeriodHours(int value) { m_retentionPeriodHoursHasBeenSet = true; m_retentionPeriodHours = value; }
    inline StreamDescription& WithRetentionPeriodHours(int value) { SetRetentionPeriodHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate time that the stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamCreationTimestamp() const { return m_streamCreationTimestamp; }
    inline bool StreamCreationTimestampHasBeenSet() const { return m_streamCreationTimestampHasBeenSet; }
    template<typename StreamCreationTimestampT = Aws::Utils::DateTime>
    void SetStreamCreationTimestamp(StreamCreationTimestampT&& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = std::forward<StreamCreationTimestampT>(value); }
    template<typename StreamCreationTimestampT = Aws::Utils::DateTime>
    StreamDescription& WithStreamCreationTimestamp(StreamCreationTimestampT&& value) { SetStreamCreationTimestamp(std::forward<StreamCreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the current enhanced monitoring settings of the stream.</p>
     */
    inline const Aws::Vector<EnhancedMetrics>& GetEnhancedMonitoring() const { return m_enhancedMonitoring; }
    inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
    template<typename EnhancedMonitoringT = Aws::Vector<EnhancedMetrics>>
    void SetEnhancedMonitoring(EnhancedMonitoringT&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring = std::forward<EnhancedMonitoringT>(value); }
    template<typename EnhancedMonitoringT = Aws::Vector<EnhancedMetrics>>
    StreamDescription& WithEnhancedMonitoring(EnhancedMonitoringT&& value) { SetEnhancedMonitoring(std::forward<EnhancedMonitoringT>(value)); return *this;}
    template<typename EnhancedMonitoringT = EnhancedMetrics>
    StreamDescription& AddEnhancedMonitoring(EnhancedMonitoringT&& value) { m_enhancedMonitoringHasBeenSet = true; m_enhancedMonitoring.emplace_back(std::forward<EnhancedMonitoringT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The server-side encryption type used on the stream. This parameter can be one
     * of the following values:</p> <ul> <li> <p> <code>NONE</code>: Do not encrypt the
     * records in the stream.</p> </li> <li> <p> <code>KMS</code>: Use server-side
     * encryption on the records in the stream using a customer-managed Amazon Web
     * Services KMS key.</p> </li> </ul>
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline StreamDescription& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * ARN to either an alias or a key, or an alias name prefixed by "alias/".You can
     * also use a master key owned by Kinesis Data Streams by specifying the alias
     * <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    StreamDescription& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    StreamStatus m_streamStatus{StreamStatus::NOT_SET};
    bool m_streamStatusHasBeenSet = false;

    StreamModeDetails m_streamModeDetails;
    bool m_streamModeDetailsHasBeenSet = false;

    Aws::Vector<Shard> m_shards;
    bool m_shardsHasBeenSet = false;

    bool m_hasMoreShards{false};
    bool m_hasMoreShardsHasBeenSet = false;

    int m_retentionPeriodHours{0};
    bool m_retentionPeriodHoursHasBeenSet = false;

    Aws::Utils::DateTime m_streamCreationTimestamp{};
    bool m_streamCreationTimestampHasBeenSet = false;

    Aws::Vector<EnhancedMetrics> m_enhancedMonitoring;
    bool m_enhancedMonitoringHasBeenSet = false;

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
