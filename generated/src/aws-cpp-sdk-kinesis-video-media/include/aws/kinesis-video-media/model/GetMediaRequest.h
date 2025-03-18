/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-media/KinesisVideoMedia_EXPORTS.h>
#include <aws/kinesis-video-media/KinesisVideoMediaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-media/model/StartSelector.h>
#include <utility>

namespace Aws
{
namespace KinesisVideoMedia
{
namespace Model
{

  /**
   */
  class GetMediaRequest : public KinesisVideoMediaRequest
  {
  public:
    AWS_KINESISVIDEOMEDIA_API GetMediaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMedia"; }

    AWS_KINESISVIDEOMEDIA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    GetMediaRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline const Aws::String& GetStreamARN() const { return m_streamARN; }
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }
    template<typename StreamARNT = Aws::String>
    void SetStreamARN(StreamARNT&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::forward<StreamARNT>(value); }
    template<typename StreamARNT = Aws::String>
    GetMediaRequest& WithStreamARN(StreamARNT&& value) { SetStreamARN(std::forward<StreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the starting chunk to get from the specified stream. </p>
     */
    inline const StartSelector& GetStartSelector() const { return m_startSelector; }
    inline bool StartSelectorHasBeenSet() const { return m_startSelectorHasBeenSet; }
    template<typename StartSelectorT = StartSelector>
    void SetStartSelector(StartSelectorT&& value) { m_startSelectorHasBeenSet = true; m_startSelector = std::forward<StartSelectorT>(value); }
    template<typename StartSelectorT = StartSelector>
    GetMediaRequest& WithStartSelector(StartSelectorT&& value) { SetStartSelector(std::forward<StartSelectorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet = false;

    StartSelector m_startSelector;
    bool m_startSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoMedia
} // namespace Aws
