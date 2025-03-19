/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StartSelector
  {
  public:
    AWS_KINESISVIDEOMEDIA_API StartSelector() = default;
    AWS_KINESISVIDEOMEDIA_API StartSelector(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOMEDIA_API StartSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
     * </ul>  <p>If you choose the NOW, EARLIEST, or CONTINUATION_TOKEN as the
     * <code>startSelectorType</code>, you don't provide any additional information in
     * the <code>startSelector</code>.</p> 
     */
    inline StartSelectorType GetStartSelectorType() const { return m_startSelectorType; }
    inline bool StartSelectorTypeHasBeenSet() const { return m_startSelectorTypeHasBeenSet; }
    inline void SetStartSelectorType(StartSelectorType value) { m_startSelectorTypeHasBeenSet = true; m_startSelectorType = value; }
    inline StartSelector& WithStartSelectorType(StartSelectorType value) { SetStartSelectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the fragment number from where you want the <code>GetMedia</code>
     * API to start returning the fragments. </p>
     */
    inline const Aws::String& GetAfterFragmentNumber() const { return m_afterFragmentNumber; }
    inline bool AfterFragmentNumberHasBeenSet() const { return m_afterFragmentNumberHasBeenSet; }
    template<typename AfterFragmentNumberT = Aws::String>
    void SetAfterFragmentNumber(AfterFragmentNumberT&& value) { m_afterFragmentNumberHasBeenSet = true; m_afterFragmentNumber = std::forward<AfterFragmentNumberT>(value); }
    template<typename AfterFragmentNumberT = Aws::String>
    StartSelector& WithAfterFragmentNumber(AfterFragmentNumberT&& value) { SetAfterFragmentNumber(std::forward<AfterFragmentNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp value. This value is required if you choose the
     * PRODUCER_TIMESTAMP or the SERVER_TIMESTAMP as the
     * <code>startSelectorType</code>. The <code>GetMedia</code> API then starts with
     * the chunk containing the fragment that has the specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    StartSelector& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Continuation token that Kinesis Video Streams returned in the previous
     * <code>GetMedia</code> response. The <code>GetMedia</code> API then starts with
     * the chunk identified by the continuation token.</p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    inline bool ContinuationTokenHasBeenSet() const { return m_continuationTokenHasBeenSet; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    StartSelector& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}
  private:

    StartSelectorType m_startSelectorType{StartSelectorType::NOT_SET};
    bool m_startSelectorTypeHasBeenSet = false;

    Aws::String m_afterFragmentNumber;
    bool m_afterFragmentNumberHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoMedia
} // namespace Aws
