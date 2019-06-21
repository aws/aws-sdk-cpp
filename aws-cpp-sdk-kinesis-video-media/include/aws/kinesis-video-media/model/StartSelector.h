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
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/kinesis-video-media/model/StartSelectorType.h>
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
namespace KinesisVideoMedia
{
namespace Model
{

  /**
   * <p>Identifies the chunk on the Kinesis video stream where you want the
   * <code>GetMedia</code> API to start returning media data. You have the following
   * options to identify the starting chunk: </p> <ul> <li> <p>Choose the latest (or
   * oldest) chunk.</p> </li> <li> <p>Identify a specific chunk. You can identify a
   * specific chunk either by providing a fragment number or timestamp (server or
   * producer). </p> </li> <li> <p>Each chunk's metadata includes a continuation
   * token as a Matroska (MKV) tag
   * (<code>AWS_KINESISVIDEO_CONTINUATION_TOKEN</code>). If your previous
   * <code>GetMedia</code> request terminated, you can use this tag value in your
   * next <code>GetMedia</code> request. The API then starts returning chunks
   * starting where the last API ended.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-media-2017-09-30/StartSelector">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISVIDEOMEDIA_API StartSelector
  {
  public:
    StartSelector();
    StartSelector(Aws::Utils::Json::JsonView jsonValue);
    StartSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the fragment on the Kinesis video stream where you want to start
     * getting the data from.</p> <ul> <li> <p>NOW - Start with the latest chunk on the
     * stream.</p> </li> <li> <p>EARLIEST - Start with earliest available chunk on the
     * stream.</p> </li> <li> <p>FRAGMENT_NUMBER - Start with the chunk after a
     * specific fragment. You must also specify the <code>AfterFragmentNumber</code>
     * parameter.</p> </li> <li> <p>PRODUCER_TIMESTAMP or SERVER_TIMESTAMP - Start with
     * the chunk containing a fragment with the specified producer or server timestamp.
     * You specify the timestamp by adding <code>StartTimestamp</code>.</p> </li> <li>
     * <p> CONTINUATION_TOKEN - Read using the specified continuation token. </p> </li>
     * </ul> <note> <p>If you choose the NOW, EARLIEST, or CONTINUATION_TOKEN as the
     * <code>startSelectorType</code>, you don't provide any additional information in
     * the <code>startSelector</code>.</p> </note>
     */
    inline const StartSelectorType& GetStartSelectorType() const{ return m_startSelectorType; }

    /**
     * <p>Identifies the fragment on the Kinesis video stream where you want to start
     * getting the data from.</p> <ul> <li> <p>NOW - Start with the latest chunk on the
     * stream.</p> </li> <li> <p>EARLIEST - Start with earliest available chunk on the
     * stream.</p> </li> <li> <p>FRAGMENT_NUMBER - Start with the chunk after a
     * specific fragment. You must also specify the <code>AfterFragmentNumber</code>
     * parameter.</p> </li> <li> <p>PRODUCER_TIMESTAMP or SERVER_TIMESTAMP - Start with
     * the chunk containing a fragment with the specified producer or server timestamp.
     * You specify the timestamp by adding <code>StartTimestamp</code>.</p> </li> <li>
     * <p> CONTINUATION_TOKEN - Read using the specified continuation token. </p> </li>
     * </ul> <note> <p>If you choose the NOW, EARLIEST, or CONTINUATION_TOKEN as the
     * <code>startSelectorType</code>, you don't provide any additional information in
     * the <code>startSelector</code>.</p> </note>
     */
    inline bool StartSelectorTypeHasBeenSet() const { return m_startSelectorTypeHasBeenSet; }

    /**
     * <p>Identifies the fragment on the Kinesis video stream where you want to start
     * getting the data from.</p> <ul> <li> <p>NOW - Start with the latest chunk on the
     * stream.</p> </li> <li> <p>EARLIEST - Start with earliest available chunk on the
     * stream.</p> </li> <li> <p>FRAGMENT_NUMBER - Start with the chunk after a
     * specific fragment. You must also specify the <code>AfterFragmentNumber</code>
     * parameter.</p> </li> <li> <p>PRODUCER_TIMESTAMP or SERVER_TIMESTAMP - Start with
     * the chunk containing a fragment with the specified producer or server timestamp.
     * You specify the timestamp by adding <code>StartTimestamp</code>.</p> </li> <li>
     * <p> CONTINUATION_TOKEN - Read using the specified continuation token. </p> </li>
     * </ul> <note> <p>If you choose the NOW, EARLIEST, or CONTINUATION_TOKEN as the
     * <code>startSelectorType</code>, you don't provide any additional information in
     * the <code>startSelector</code>.</p> </note>
     */
    inline void SetStartSelectorType(const StartSelectorType& value) { m_startSelectorTypeHasBeenSet = true; m_startSelectorType = value; }

    /**
     * <p>Identifies the fragment on the Kinesis video stream where you want to start
     * getting the data from.</p> <ul> <li> <p>NOW - Start with the latest chunk on the
     * stream.</p> </li> <li> <p>EARLIEST - Start with earliest available chunk on the
     * stream.</p> </li> <li> <p>FRAGMENT_NUMBER - Start with the chunk after a
     * specific fragment. You must also specify the <code>AfterFragmentNumber</code>
     * parameter.</p> </li> <li> <p>PRODUCER_TIMESTAMP or SERVER_TIMESTAMP - Start with
     * the chunk containing a fragment with the specified producer or server timestamp.
     * You specify the timestamp by adding <code>StartTimestamp</code>.</p> </li> <li>
     * <p> CONTINUATION_TOKEN - Read using the specified continuation token. </p> </li>
     * </ul> <note> <p>If you choose the NOW, EARLIEST, or CONTINUATION_TOKEN as the
     * <code>startSelectorType</code>, you don't provide any additional information in
     * the <code>startSelector</code>.</p> </note>
     */
    inline void SetStartSelectorType(StartSelectorType&& value) { m_startSelectorTypeHasBeenSet = true; m_startSelectorType = std::move(value); }

    /**
     * <p>Identifies the fragment on the Kinesis video stream where you want to start
     * getting the data from.</p> <ul> <li> <p>NOW - Start with the latest chunk on the
     * stream.</p> </li> <li> <p>EARLIEST - Start with earliest available chunk on the
     * stream.</p> </li> <li> <p>FRAGMENT_NUMBER - Start with the chunk after a
     * specific fragment. You must also specify the <code>AfterFragmentNumber</code>
     * parameter.</p> </li> <li> <p>PRODUCER_TIMESTAMP or SERVER_TIMESTAMP - Start with
     * the chunk containing a fragment with the specified producer or server timestamp.
     * You specify the timestamp by adding <code>StartTimestamp</code>.</p> </li> <li>
     * <p> CONTINUATION_TOKEN - Read using the specified continuation token. </p> </li>
     * </ul> <note> <p>If you choose the NOW, EARLIEST, or CONTINUATION_TOKEN as the
     * <code>startSelectorType</code>, you don't provide any additional information in
     * the <code>startSelector</code>.</p> </note>
     */
    inline StartSelector& WithStartSelectorType(const StartSelectorType& value) { SetStartSelectorType(value); return *this;}

    /**
     * <p>Identifies the fragment on the Kinesis video stream where you want to start
     * getting the data from.</p> <ul> <li> <p>NOW - Start with the latest chunk on the
     * stream.</p> </li> <li> <p>EARLIEST - Start with earliest available chunk on the
     * stream.</p> </li> <li> <p>FRAGMENT_NUMBER - Start with the chunk after a
     * specific fragment. You must also specify the <code>AfterFragmentNumber</code>
     * parameter.</p> </li> <li> <p>PRODUCER_TIMESTAMP or SERVER_TIMESTAMP - Start with
     * the chunk containing a fragment with the specified producer or server timestamp.
     * You specify the timestamp by adding <code>StartTimestamp</code>.</p> </li> <li>
     * <p> CONTINUATION_TOKEN - Read using the specified continuation token. </p> </li>
     * </ul> <note> <p>If you choose the NOW, EARLIEST, or CONTINUATION_TOKEN as the
     * <code>startSelectorType</code>, you don't provide any additional information in
     * the <code>startSelector</code>.</p> </note>
     */
    inline StartSelector& WithStartSelectorType(StartSelectorType&& value) { SetStartSelectorType(std::move(value)); return *this;}


    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline const Aws::String& GetAfterFragmentNumber() const{ return m_afterFragmentNumber; }

    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline bool AfterFragmentNumberHasBeenSet() const { return m_afterFragmentNumberHasBeenSet; }

    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline void SetAfterFragmentNumber(const Aws::String& value) { m_afterFragmentNumberHasBeenSet = true; m_afterFragmentNumber = value; }

    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline void SetAfterFragmentNumber(Aws::String&& value) { m_afterFragmentNumberHasBeenSet = true; m_afterFragmentNumber = std::move(value); }

    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline void SetAfterFragmentNumber(const char* value) { m_afterFragmentNumberHasBeenSet = true; m_afterFragmentNumber.assign(value); }

    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline StartSelector& WithAfterFragmentNumber(const Aws::String& value) { SetAfterFragmentNumber(value); return *this;}

    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline StartSelector& WithAfterFragmentNumber(Aws::String&& value) { SetAfterFragmentNumber(std::move(value)); return *this;}

    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline StartSelector& WithAfterFragmentNumber(const char* value) { SetAfterFragmentNumber(value); return *this;}


    /**
     * <p>A timestamp value. This value is required if you choose the
     * PRODUCER_TIMESTAMP or the SERVER_TIMESTAMP as the
     * <code>startSelectorType</code>. The <code>GetMedia</code> API then starts with
     * the chunk containing the fragment that has the specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * <p>A timestamp value. This value is required if you choose the
     * PRODUCER_TIMESTAMP or the SERVER_TIMESTAMP as the
     * <code>startSelectorType</code>. The <code>GetMedia</code> API then starts with
     * the chunk containing the fragment that has the specified timestamp.</p>
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * <p>A timestamp value. This value is required if you choose the
     * PRODUCER_TIMESTAMP or the SERVER_TIMESTAMP as the
     * <code>startSelectorType</code>. The <code>GetMedia</code> API then starts with
     * the chunk containing the fragment that has the specified timestamp.</p>
     */
    inline void SetStartTimestamp(const Aws::Utils::DateTime& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * <p>A timestamp value. This value is required if you choose the
     * PRODUCER_TIMESTAMP or the SERVER_TIMESTAMP as the
     * <code>startSelectorType</code>. The <code>GetMedia</code> API then starts with
     * the chunk containing the fragment that has the specified timestamp.</p>
     */
    inline void SetStartTimestamp(Aws::Utils::DateTime&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * <p>A timestamp value. This value is required if you choose the
     * PRODUCER_TIMESTAMP or the SERVER_TIMESTAMP as the
     * <code>startSelectorType</code>. The <code>GetMedia</code> API then starts with
     * the chunk containing the fragment that has the specified timestamp.</p>
     */
    inline StartSelector& WithStartTimestamp(const Aws::Utils::DateTime& value) { SetStartTimestamp(value); return *this;}

    /**
     * <p>A timestamp value. This value is required if you choose the
     * PRODUCER_TIMESTAMP or the SERVER_TIMESTAMP as the
     * <code>startSelectorType</code>. The <code>GetMedia</code> API then starts with
     * the chunk containing the fragment that has the specified timestamp.</p>
     */
    inline StartSelector& WithStartTimestamp(Aws::Utils::DateTime&& value) { SetStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }

    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline bool ContinuationTokenHasBeenSet() const { return m_continuationTokenHasBeenSet; }

    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline void SetContinuationToken(const Aws::String& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = value; }

    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline void SetContinuationToken(Aws::String&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::move(value); }

    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline void SetContinuationToken(const char* value) { m_continuationTokenHasBeenSet = true; m_continuationToken.assign(value); }

    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline StartSelector& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}

    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline StartSelector& WithContinuationToken(Aws::String&& value) { SetContinuationToken(std::move(value)); return *this;}

    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline StartSelector& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}

  private:

    StartSelectorType m_startSelectorType;
    bool m_startSelectorTypeHasBeenSet;

    Aws::String m_afterFragmentNumber;
    bool m_afterFragmentNumberHasBeenSet;

    Aws::Utils::DateTime m_startTimestamp;
    bool m_startTimestampHasBeenSet;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoMedia
} // namespace Aws
