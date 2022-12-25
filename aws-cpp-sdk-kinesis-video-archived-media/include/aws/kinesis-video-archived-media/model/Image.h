/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesis-video-archived-media/model/ImageError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure that contains the <code>Timestamp</code>, <code>Error</code>, and
   * <code>ImageContent</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/Image">AWS
   * API Reference</a></p>
   */
  class Image
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Image();
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An attribute of the <code>Image</code> object that is used to extract an
     * image from the video stream. This field is used to manage gaps on images or to
     * better understand the pagination window.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeStamp() const{ return m_timeStamp; }

    /**
     * <p>An attribute of the <code>Image</code> object that is used to extract an
     * image from the video stream. This field is used to manage gaps on images or to
     * better understand the pagination window.</p>
     */
    inline bool TimeStampHasBeenSet() const { return m_timeStampHasBeenSet; }

    /**
     * <p>An attribute of the <code>Image</code> object that is used to extract an
     * image from the video stream. This field is used to manage gaps on images or to
     * better understand the pagination window.</p>
     */
    inline void SetTimeStamp(const Aws::Utils::DateTime& value) { m_timeStampHasBeenSet = true; m_timeStamp = value; }

    /**
     * <p>An attribute of the <code>Image</code> object that is used to extract an
     * image from the video stream. This field is used to manage gaps on images or to
     * better understand the pagination window.</p>
     */
    inline void SetTimeStamp(Aws::Utils::DateTime&& value) { m_timeStampHasBeenSet = true; m_timeStamp = std::move(value); }

    /**
     * <p>An attribute of the <code>Image</code> object that is used to extract an
     * image from the video stream. This field is used to manage gaps on images or to
     * better understand the pagination window.</p>
     */
    inline Image& WithTimeStamp(const Aws::Utils::DateTime& value) { SetTimeStamp(value); return *this;}

    /**
     * <p>An attribute of the <code>Image</code> object that is used to extract an
     * image from the video stream. This field is used to manage gaps on images or to
     * better understand the pagination window.</p>
     */
    inline Image& WithTimeStamp(Aws::Utils::DateTime&& value) { SetTimeStamp(std::move(value)); return *this;}


    /**
     * <p>The error message shown when the image for the provided timestamp was not
     * extracted due to a non-tryable error. An error will be returned if: </p> <ul>
     * <li> <p>There is no media that exists for the specified
     * <code>Timestamp</code>.</p> </li> </ul> <ul> <li> <p>The media for the specified
     * time does not allow an image to be extracted. In this case the media is audio
     * only, or the incorrect media has been ingested.</p> </li> </ul>
     */
    inline const ImageError& GetError() const{ return m_error; }

    /**
     * <p>The error message shown when the image for the provided timestamp was not
     * extracted due to a non-tryable error. An error will be returned if: </p> <ul>
     * <li> <p>There is no media that exists for the specified
     * <code>Timestamp</code>.</p> </li> </ul> <ul> <li> <p>The media for the specified
     * time does not allow an image to be extracted. In this case the media is audio
     * only, or the incorrect media has been ingested.</p> </li> </ul>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error message shown when the image for the provided timestamp was not
     * extracted due to a non-tryable error. An error will be returned if: </p> <ul>
     * <li> <p>There is no media that exists for the specified
     * <code>Timestamp</code>.</p> </li> </ul> <ul> <li> <p>The media for the specified
     * time does not allow an image to be extracted. In this case the media is audio
     * only, or the incorrect media has been ingested.</p> </li> </ul>
     */
    inline void SetError(const ImageError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error message shown when the image for the provided timestamp was not
     * extracted due to a non-tryable error. An error will be returned if: </p> <ul>
     * <li> <p>There is no media that exists for the specified
     * <code>Timestamp</code>.</p> </li> </ul> <ul> <li> <p>The media for the specified
     * time does not allow an image to be extracted. In this case the media is audio
     * only, or the incorrect media has been ingested.</p> </li> </ul>
     */
    inline void SetError(ImageError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error message shown when the image for the provided timestamp was not
     * extracted due to a non-tryable error. An error will be returned if: </p> <ul>
     * <li> <p>There is no media that exists for the specified
     * <code>Timestamp</code>.</p> </li> </ul> <ul> <li> <p>The media for the specified
     * time does not allow an image to be extracted. In this case the media is audio
     * only, or the incorrect media has been ingested.</p> </li> </ul>
     */
    inline Image& WithError(const ImageError& value) { SetError(value); return *this;}

    /**
     * <p>The error message shown when the image for the provided timestamp was not
     * extracted due to a non-tryable error. An error will be returned if: </p> <ul>
     * <li> <p>There is no media that exists for the specified
     * <code>Timestamp</code>.</p> </li> </ul> <ul> <li> <p>The media for the specified
     * time does not allow an image to be extracted. In this case the media is audio
     * only, or the incorrect media has been ingested.</p> </li> </ul>
     */
    inline Image& WithError(ImageError&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>An attribute of the <code>Image</code> object that is Base64 encoded.</p>
     */
    inline const Aws::String& GetImageContent() const{ return m_imageContent; }

    /**
     * <p>An attribute of the <code>Image</code> object that is Base64 encoded.</p>
     */
    inline bool ImageContentHasBeenSet() const { return m_imageContentHasBeenSet; }

    /**
     * <p>An attribute of the <code>Image</code> object that is Base64 encoded.</p>
     */
    inline void SetImageContent(const Aws::String& value) { m_imageContentHasBeenSet = true; m_imageContent = value; }

    /**
     * <p>An attribute of the <code>Image</code> object that is Base64 encoded.</p>
     */
    inline void SetImageContent(Aws::String&& value) { m_imageContentHasBeenSet = true; m_imageContent = std::move(value); }

    /**
     * <p>An attribute of the <code>Image</code> object that is Base64 encoded.</p>
     */
    inline void SetImageContent(const char* value) { m_imageContentHasBeenSet = true; m_imageContent.assign(value); }

    /**
     * <p>An attribute of the <code>Image</code> object that is Base64 encoded.</p>
     */
    inline Image& WithImageContent(const Aws::String& value) { SetImageContent(value); return *this;}

    /**
     * <p>An attribute of the <code>Image</code> object that is Base64 encoded.</p>
     */
    inline Image& WithImageContent(Aws::String&& value) { SetImageContent(std::move(value)); return *this;}

    /**
     * <p>An attribute of the <code>Image</code> object that is Base64 encoded.</p>
     */
    inline Image& WithImageContent(const char* value) { SetImageContent(value); return *this;}

  private:

    Aws::Utils::DateTime m_timeStamp;
    bool m_timeStampHasBeenSet = false;

    ImageError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_imageContent;
    bool m_imageContentHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
