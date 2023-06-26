/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Image.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppStream
{
namespace Model
{
  class DeleteImageResult
  {
  public:
    AWS_APPSTREAM_API DeleteImageResult();
    AWS_APPSTREAM_API DeleteImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DeleteImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the image.</p>
     */
    inline const Image& GetImage() const{ return m_image; }

    /**
     * <p>Information about the image.</p>
     */
    inline void SetImage(const Image& value) { m_image = value; }

    /**
     * <p>Information about the image.</p>
     */
    inline void SetImage(Image&& value) { m_image = std::move(value); }

    /**
     * <p>Information about the image.</p>
     */
    inline DeleteImageResult& WithImage(const Image& value) { SetImage(value); return *this;}

    /**
     * <p>Information about the image.</p>
     */
    inline DeleteImageResult& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Image m_image;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
