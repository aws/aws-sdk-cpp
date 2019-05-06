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
  class AWS_KINESISVIDEOMEDIA_API GetMediaRequest : public KinesisVideoMediaRequest
  {
  public:
    GetMediaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMedia"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline GetMediaRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline GetMediaRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The Kinesis video stream name from where you want to get the media content.
     * If you don't specify the <code>streamName</code>, you must specify the
     * <code>streamARN</code>.</p>
     */
    inline GetMediaRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline bool StreamARNHasBeenSet() const { return m_streamARNHasBeenSet; }

    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARNHasBeenSet = true; m_streamARN = value; }

    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARNHasBeenSet = true; m_streamARN = std::move(value); }

    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARNHasBeenSet = true; m_streamARN.assign(value); }

    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline GetMediaRequest& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline GetMediaRequest& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the stream from where you want to get the media content. If you
     * don't specify the <code>streamARN</code>, you must specify the
     * <code>streamName</code>.</p>
     */
    inline GetMediaRequest& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}


    /**
     * <p>Identifies the starting chunk to get from the specified stream. </p>
     */
    inline const StartSelector& GetStartSelector() const{ return m_startSelector; }

    /**
     * <p>Identifies the starting chunk to get from the specified stream. </p>
     */
    inline bool StartSelectorHasBeenSet() const { return m_startSelectorHasBeenSet; }

    /**
     * <p>Identifies the starting chunk to get from the specified stream. </p>
     */
    inline void SetStartSelector(const StartSelector& value) { m_startSelectorHasBeenSet = true; m_startSelector = value; }

    /**
     * <p>Identifies the starting chunk to get from the specified stream. </p>
     */
    inline void SetStartSelector(StartSelector&& value) { m_startSelectorHasBeenSet = true; m_startSelector = std::move(value); }

    /**
     * <p>Identifies the starting chunk to get from the specified stream. </p>
     */
    inline GetMediaRequest& WithStartSelector(const StartSelector& value) { SetStartSelector(value); return *this;}

    /**
     * <p>Identifies the starting chunk to get from the specified stream. </p>
     */
    inline GetMediaRequest& WithStartSelector(StartSelector&& value) { SetStartSelector(std::move(value)); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;

    Aws::String m_streamARN;
    bool m_streamARNHasBeenSet;

    StartSelector m_startSelector;
    bool m_startSelectorHasBeenSet;
  };

} // namespace Model
} // namespace KinesisVideoMedia
} // namespace Aws
