/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisVideoArchivedMedia
{
namespace Model
{

  /**
   * <p>Represents a segment of video or other time-delimited data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/Fragment">AWS
   * API Reference</a></p>
   */
  class Fragment
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Fragment() = default;
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Fragment(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Fragment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline const Aws::String& GetFragmentNumber() const { return m_fragmentNumber; }
    inline bool FragmentNumberHasBeenSet() const { return m_fragmentNumberHasBeenSet; }
    template<typename FragmentNumberT = Aws::String>
    void SetFragmentNumber(FragmentNumberT&& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = std::forward<FragmentNumberT>(value); }
    template<typename FragmentNumberT = Aws::String>
    Fragment& WithFragmentNumber(FragmentNumberT&& value) { SetFragmentNumber(std::forward<FragmentNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total fragment size, including information about the fragment and
     * contained media data.</p>
     */
    inline long long GetFragmentSizeInBytes() const { return m_fragmentSizeInBytes; }
    inline bool FragmentSizeInBytesHasBeenSet() const { return m_fragmentSizeInBytesHasBeenSet; }
    inline void SetFragmentSizeInBytes(long long value) { m_fragmentSizeInBytesHasBeenSet = true; m_fragmentSizeInBytes = value; }
    inline Fragment& WithFragmentSizeInBytes(long long value) { SetFragmentSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp from the producer corresponding to the fragment.</p>
     */
    inline const Aws::Utils::DateTime& GetProducerTimestamp() const { return m_producerTimestamp; }
    inline bool ProducerTimestampHasBeenSet() const { return m_producerTimestampHasBeenSet; }
    template<typename ProducerTimestampT = Aws::Utils::DateTime>
    void SetProducerTimestamp(ProducerTimestampT&& value) { m_producerTimestampHasBeenSet = true; m_producerTimestamp = std::forward<ProducerTimestampT>(value); }
    template<typename ProducerTimestampT = Aws::Utils::DateTime>
    Fragment& WithProducerTimestamp(ProducerTimestampT&& value) { SetProducerTimestamp(std::forward<ProducerTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp from the Amazon Web Services server corresponding to the
     * fragment.</p>
     */
    inline const Aws::Utils::DateTime& GetServerTimestamp() const { return m_serverTimestamp; }
    inline bool ServerTimestampHasBeenSet() const { return m_serverTimestampHasBeenSet; }
    template<typename ServerTimestampT = Aws::Utils::DateTime>
    void SetServerTimestamp(ServerTimestampT&& value) { m_serverTimestampHasBeenSet = true; m_serverTimestamp = std::forward<ServerTimestampT>(value); }
    template<typename ServerTimestampT = Aws::Utils::DateTime>
    Fragment& WithServerTimestamp(ServerTimestampT&& value) { SetServerTimestamp(std::forward<ServerTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The playback duration or other time value associated with the fragment.</p>
     */
    inline long long GetFragmentLengthInMilliseconds() const { return m_fragmentLengthInMilliseconds; }
    inline bool FragmentLengthInMillisecondsHasBeenSet() const { return m_fragmentLengthInMillisecondsHasBeenSet; }
    inline void SetFragmentLengthInMilliseconds(long long value) { m_fragmentLengthInMillisecondsHasBeenSet = true; m_fragmentLengthInMilliseconds = value; }
    inline Fragment& WithFragmentLengthInMilliseconds(long long value) { SetFragmentLengthInMilliseconds(value); return *this;}
    ///@}
  private:

    Aws::String m_fragmentNumber;
    bool m_fragmentNumberHasBeenSet = false;

    long long m_fragmentSizeInBytes{0};
    bool m_fragmentSizeInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_producerTimestamp{};
    bool m_producerTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_serverTimestamp{};
    bool m_serverTimestampHasBeenSet = false;

    long long m_fragmentLengthInMilliseconds{0};
    bool m_fragmentLengthInMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
