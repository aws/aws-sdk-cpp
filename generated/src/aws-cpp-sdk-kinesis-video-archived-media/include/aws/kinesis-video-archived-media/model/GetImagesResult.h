/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis-video-archived-media/model/Image.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisVideoArchivedMedia
{
namespace Model
{
  class GetImagesResult
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetImagesResult();
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of images generated from the video stream. If there is no media
     * available for the given timestamp, the <code>NO_MEDIA</code> error will be
     * listed in the output. If an error occurs while the image is being generated, the
     * <code>MEDIA_ERROR</code> will be listed in the output as the cause of the
     * missing image. </p>
     */
    inline const Aws::Vector<Image>& GetImages() const{ return m_images; }

    /**
     * <p>The list of images generated from the video stream. If there is no media
     * available for the given timestamp, the <code>NO_MEDIA</code> error will be
     * listed in the output. If an error occurs while the image is being generated, the
     * <code>MEDIA_ERROR</code> will be listed in the output as the cause of the
     * missing image. </p>
     */
    inline void SetImages(const Aws::Vector<Image>& value) { m_images = value; }

    /**
     * <p>The list of images generated from the video stream. If there is no media
     * available for the given timestamp, the <code>NO_MEDIA</code> error will be
     * listed in the output. If an error occurs while the image is being generated, the
     * <code>MEDIA_ERROR</code> will be listed in the output as the cause of the
     * missing image. </p>
     */
    inline void SetImages(Aws::Vector<Image>&& value) { m_images = std::move(value); }

    /**
     * <p>The list of images generated from the video stream. If there is no media
     * available for the given timestamp, the <code>NO_MEDIA</code> error will be
     * listed in the output. If an error occurs while the image is being generated, the
     * <code>MEDIA_ERROR</code> will be listed in the output as the cause of the
     * missing image. </p>
     */
    inline GetImagesResult& WithImages(const Aws::Vector<Image>& value) { SetImages(value); return *this;}

    /**
     * <p>The list of images generated from the video stream. If there is no media
     * available for the given timestamp, the <code>NO_MEDIA</code> error will be
     * listed in the output. If an error occurs while the image is being generated, the
     * <code>MEDIA_ERROR</code> will be listed in the output as the cause of the
     * missing image. </p>
     */
    inline GetImagesResult& WithImages(Aws::Vector<Image>&& value) { SetImages(std::move(value)); return *this;}

    /**
     * <p>The list of images generated from the video stream. If there is no media
     * available for the given timestamp, the <code>NO_MEDIA</code> error will be
     * listed in the output. If an error occurs while the image is being generated, the
     * <code>MEDIA_ERROR</code> will be listed in the output as the cause of the
     * missing image. </p>
     */
    inline GetImagesResult& AddImages(const Image& value) { m_images.push_back(value); return *this; }

    /**
     * <p>The list of images generated from the video stream. If there is no media
     * available for the given timestamp, the <code>NO_MEDIA</code> error will be
     * listed in the output. If an error occurs while the image is being generated, the
     * <code>MEDIA_ERROR</code> will be listed in the output as the cause of the
     * missing image. </p>
     */
    inline GetImagesResult& AddImages(Image&& value) { m_images.push_back(std::move(value)); return *this; }


    /**
     * <p>The encrypted token that was used in the request to get more images.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The encrypted token that was used in the request to get more images.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The encrypted token that was used in the request to get more images.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The encrypted token that was used in the request to get more images.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The encrypted token that was used in the request to get more images.</p>
     */
    inline GetImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The encrypted token that was used in the request to get more images.</p>
     */
    inline GetImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The encrypted token that was used in the request to get more images.</p>
     */
    inline GetImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Image> m_images;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
