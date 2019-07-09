/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API Fragment
  {
  public:
    Fragment();
    Fragment(Aws::Utils::Json::JsonView jsonValue);
    Fragment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline const Aws::String& GetFragmentNumber() const{ return m_fragmentNumber; }

    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline bool FragmentNumberHasBeenSet() const { return m_fragmentNumberHasBeenSet; }

    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline void SetFragmentNumber(const Aws::String& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = value; }

    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline void SetFragmentNumber(Aws::String&& value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber = std::move(value); }

    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline void SetFragmentNumber(const char* value) { m_fragmentNumberHasBeenSet = true; m_fragmentNumber.assign(value); }

    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline Fragment& WithFragmentNumber(const Aws::String& value) { SetFragmentNumber(value); return *this;}

    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline Fragment& WithFragmentNumber(Aws::String&& value) { SetFragmentNumber(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the fragment. This value monotonically increases
     * based on the ingestion order.</p>
     */
    inline Fragment& WithFragmentNumber(const char* value) { SetFragmentNumber(value); return *this;}


    /**
     * <p>The total fragment size, including information about the fragment and
     * contained media data.</p>
     */
    inline long long GetFragmentSizeInBytes() const{ return m_fragmentSizeInBytes; }

    /**
     * <p>The total fragment size, including information about the fragment and
     * contained media data.</p>
     */
    inline bool FragmentSizeInBytesHasBeenSet() const { return m_fragmentSizeInBytesHasBeenSet; }

    /**
     * <p>The total fragment size, including information about the fragment and
     * contained media data.</p>
     */
    inline void SetFragmentSizeInBytes(long long value) { m_fragmentSizeInBytesHasBeenSet = true; m_fragmentSizeInBytes = value; }

    /**
     * <p>The total fragment size, including information about the fragment and
     * contained media data.</p>
     */
    inline Fragment& WithFragmentSizeInBytes(long long value) { SetFragmentSizeInBytes(value); return *this;}


    /**
     * <p>The timestamp from the producer corresponding to the fragment.</p>
     */
    inline const Aws::Utils::DateTime& GetProducerTimestamp() const{ return m_producerTimestamp; }

    /**
     * <p>The timestamp from the producer corresponding to the fragment.</p>
     */
    inline bool ProducerTimestampHasBeenSet() const { return m_producerTimestampHasBeenSet; }

    /**
     * <p>The timestamp from the producer corresponding to the fragment.</p>
     */
    inline void SetProducerTimestamp(const Aws::Utils::DateTime& value) { m_producerTimestampHasBeenSet = true; m_producerTimestamp = value; }

    /**
     * <p>The timestamp from the producer corresponding to the fragment.</p>
     */
    inline void SetProducerTimestamp(Aws::Utils::DateTime&& value) { m_producerTimestampHasBeenSet = true; m_producerTimestamp = std::move(value); }

    /**
     * <p>The timestamp from the producer corresponding to the fragment.</p>
     */
    inline Fragment& WithProducerTimestamp(const Aws::Utils::DateTime& value) { SetProducerTimestamp(value); return *this;}

    /**
     * <p>The timestamp from the producer corresponding to the fragment.</p>
     */
    inline Fragment& WithProducerTimestamp(Aws::Utils::DateTime&& value) { SetProducerTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp from the AWS server corresponding to the fragment.</p>
     */
    inline const Aws::Utils::DateTime& GetServerTimestamp() const{ return m_serverTimestamp; }

    /**
     * <p>The timestamp from the AWS server corresponding to the fragment.</p>
     */
    inline bool ServerTimestampHasBeenSet() const { return m_serverTimestampHasBeenSet; }

    /**
     * <p>The timestamp from the AWS server corresponding to the fragment.</p>
     */
    inline void SetServerTimestamp(const Aws::Utils::DateTime& value) { m_serverTimestampHasBeenSet = true; m_serverTimestamp = value; }

    /**
     * <p>The timestamp from the AWS server corresponding to the fragment.</p>
     */
    inline void SetServerTimestamp(Aws::Utils::DateTime&& value) { m_serverTimestampHasBeenSet = true; m_serverTimestamp = std::move(value); }

    /**
     * <p>The timestamp from the AWS server corresponding to the fragment.</p>
     */
    inline Fragment& WithServerTimestamp(const Aws::Utils::DateTime& value) { SetServerTimestamp(value); return *this;}

    /**
     * <p>The timestamp from the AWS server corresponding to the fragment.</p>
     */
    inline Fragment& WithServerTimestamp(Aws::Utils::DateTime&& value) { SetServerTimestamp(std::move(value)); return *this;}


    /**
     * <p>The playback duration or other time value associated with the fragment.</p>
     */
    inline long long GetFragmentLengthInMilliseconds() const{ return m_fragmentLengthInMilliseconds; }

    /**
     * <p>The playback duration or other time value associated with the fragment.</p>
     */
    inline bool FragmentLengthInMillisecondsHasBeenSet() const { return m_fragmentLengthInMillisecondsHasBeenSet; }

    /**
     * <p>The playback duration or other time value associated with the fragment.</p>
     */
    inline void SetFragmentLengthInMilliseconds(long long value) { m_fragmentLengthInMillisecondsHasBeenSet = true; m_fragmentLengthInMilliseconds = value; }

    /**
     * <p>The playback duration or other time value associated with the fragment.</p>
     */
    inline Fragment& WithFragmentLengthInMilliseconds(long long value) { SetFragmentLengthInMilliseconds(value); return *this;}

  private:

    Aws::String m_fragmentNumber;
    bool m_fragmentNumberHasBeenSet;

    long long m_fragmentSizeInBytes;
    bool m_fragmentSizeInBytesHasBeenSet;

    Aws::Utils::DateTime m_producerTimestamp;
    bool m_producerTimestampHasBeenSet;

    Aws::Utils::DateTime m_serverTimestamp;
    bool m_serverTimestampHasBeenSet;

    long long m_fragmentLengthInMilliseconds;
    bool m_fragmentLengthInMillisecondsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
