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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/VideoDetail.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Details regarding output<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputDetail">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API OutputDetail
  {
  public:
    OutputDetail();
    OutputDetail(Aws::Utils::Json::JsonView jsonValue);
    OutputDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Duration in milliseconds
     */
    inline int GetDurationInMs() const{ return m_durationInMs; }

    /**
     * Duration in milliseconds
     */
    inline bool DurationInMsHasBeenSet() const { return m_durationInMsHasBeenSet; }

    /**
     * Duration in milliseconds
     */
    inline void SetDurationInMs(int value) { m_durationInMsHasBeenSet = true; m_durationInMs = value; }

    /**
     * Duration in milliseconds
     */
    inline OutputDetail& WithDurationInMs(int value) { SetDurationInMs(value); return *this;}


    /**
     * Contains details about the output's video stream
     */
    inline const VideoDetail& GetVideoDetails() const{ return m_videoDetails; }

    /**
     * Contains details about the output's video stream
     */
    inline bool VideoDetailsHasBeenSet() const { return m_videoDetailsHasBeenSet; }

    /**
     * Contains details about the output's video stream
     */
    inline void SetVideoDetails(const VideoDetail& value) { m_videoDetailsHasBeenSet = true; m_videoDetails = value; }

    /**
     * Contains details about the output's video stream
     */
    inline void SetVideoDetails(VideoDetail&& value) { m_videoDetailsHasBeenSet = true; m_videoDetails = std::move(value); }

    /**
     * Contains details about the output's video stream
     */
    inline OutputDetail& WithVideoDetails(const VideoDetail& value) { SetVideoDetails(value); return *this;}

    /**
     * Contains details about the output's video stream
     */
    inline OutputDetail& WithVideoDetails(VideoDetail&& value) { SetVideoDetails(std::move(value)); return *this;}

  private:

    int m_durationInMs;
    bool m_durationInMsHasBeenSet;

    VideoDetail m_videoDetails;
    bool m_videoDetailsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
