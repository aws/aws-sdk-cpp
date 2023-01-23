/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Image.h>
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
namespace imagebuilder
{
namespace Model
{
  class GetImageResult
  {
  public:
    AWS_IMAGEBUILDER_API GetImageResult();
    AWS_IMAGEBUILDER_API GetImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline GetImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The image object.</p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>The image object.</p>
     */
    inline void SetImage(const Image& value) { m_image = value; }

    /**
     * <p>The image object.</p>
     */
    inline void SetImage(Image&& value) { m_image = std::move(value); }

    /**
     * <p>The image object.</p>
     */
    inline GetImageResult& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>The image object.</p>
     */
    inline GetImageResult& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}

  private:

    Aws::String m_requestId;

    Image m_image;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
