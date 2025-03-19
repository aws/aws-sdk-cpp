/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/StreamStatus.h>
#include <aws/kinesis/model/StreamModeDetails.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The summary of a stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/StreamSummary">AWS
   * API Reference</a></p>
   */
  class StreamSummary
  {
  public:
    AWS_KINESIS_API StreamSummary() = default;
    AWS_KINESIS_API StreamSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API StreamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a stream.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    StreamSummary& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    StreamSummary& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the stream.</p>
     */
    inline StreamStatus GetStreamStatus() const { return m_streamStatus; }
    inline bool StreamStatusHasBeenSet() const { return m_streamStatusHasBeenSet; }
    inline void SetStreamStatus(StreamStatus value) { m_streamStatusHasBeenSet = true; m_streamStatus = value; }
    inline StreamSummary& WithStreamStatus(StreamStatus value) { SetStreamStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const StreamModeDetails& GetStreamModeDetails() const { return m_streamModeDetails; }
    inline bool StreamModeDetailsHasBeenSet() const { return m_streamModeDetailsHasBeenSet; }
    template<typename StreamModeDetailsT = StreamModeDetails>
    void SetStreamModeDetails(StreamModeDetailsT&& value) { m_streamModeDetailsHasBeenSet = true; m_streamModeDetails = std::forward<StreamModeDetailsT>(value); }
    template<typename StreamModeDetailsT = StreamModeDetails>
    StreamSummary& WithStreamModeDetails(StreamModeDetailsT&& value) { SetStreamModeDetails(std::forward<StreamModeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetStreamCreationTimestamp() const { return m_streamCreationTimestamp; }
    inline bool StreamCreationTimestampHasBeenSet() const { return m_streamCreationTimestampHasBeenSet; }
    template<typename StreamCreationTimestampT = Aws::Utils::DateTime>
    void SetStreamCreationTimestamp(StreamCreationTimestampT&& value) { m_streamCreationTimestampHasBeenSet = true; m_streamCreationTimestamp = std::forward<StreamCreationTimestampT>(value); }
    template<typename StreamCreationTimestampT = Aws::Utils::DateTime>
    StreamSummary& WithStreamCreationTimestamp(StreamCreationTimestampT&& value) { SetStreamCreationTimestamp(std::forward<StreamCreationTimestampT>(value)); return *this;}
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

    Aws::Utils::DateTime m_streamCreationTimestamp{};
    bool m_streamCreationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
