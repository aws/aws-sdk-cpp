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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStreamingImageResponse">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API UpdateStreamingImageResult
  {
  public:
    UpdateStreamingImageResult();
    UpdateStreamingImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateStreamingImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const StreamingImage& GetStreamingImage() const{ return m_streamingImage; }

    /**
     * <p/>
     */
    inline void SetStreamingImage(const StreamingImage& value) { m_streamingImage = value; }

    /**
     * <p/>
     */
    inline void SetStreamingImage(StreamingImage&& value) { m_streamingImage = std::move(value); }

    /**
     * <p/>
     */
    inline UpdateStreamingImageResult& WithStreamingImage(const StreamingImage& value) { SetStreamingImage(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateStreamingImageResult& WithStreamingImage(StreamingImage&& value) { SetStreamingImage(std::move(value)); return *this;}

  private:

    StreamingImage m_streamingImage;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
