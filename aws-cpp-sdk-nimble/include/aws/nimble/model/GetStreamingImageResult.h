/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/StreamingImage.h>
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
namespace NimbleStudio
{
namespace Model
{
  class GetStreamingImageResult
  {
  public:
    AWS_NIMBLESTUDIO_API GetStreamingImageResult();
    AWS_NIMBLESTUDIO_API GetStreamingImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API GetStreamingImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The streaming image.</p>
     */
    inline const StreamingImage& GetStreamingImage() const{ return m_streamingImage; }

    /**
     * <p>The streaming image.</p>
     */
    inline void SetStreamingImage(const StreamingImage& value) { m_streamingImage = value; }

    /**
     * <p>The streaming image.</p>
     */
    inline void SetStreamingImage(StreamingImage&& value) { m_streamingImage = std::move(value); }

    /**
     * <p>The streaming image.</p>
     */
    inline GetStreamingImageResult& WithStreamingImage(const StreamingImage& value) { SetStreamingImage(value); return *this;}

    /**
     * <p>The streaming image.</p>
     */
    inline GetStreamingImageResult& WithStreamingImage(StreamingImage&& value) { SetStreamingImage(std::move(value)); return *this;}

  private:

    StreamingImage m_streamingImage;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
