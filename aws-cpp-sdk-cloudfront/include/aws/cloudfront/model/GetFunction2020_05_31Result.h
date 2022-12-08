/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace CloudFront
{
namespace Model
{
  class GetFunction2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetFunction2020_05_31Result();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_CLOUDFRONT_API GetFunction2020_05_31Result(GetFunction2020_05_31Result&&);
    AWS_CLOUDFRONT_API GetFunction2020_05_31Result& operator=(GetFunction2020_05_31Result&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetFunction2020_05_31Result(const GetFunction2020_05_31Result&) = delete;
    GetFunction2020_05_31Result& operator=(const GetFunction2020_05_31Result&) = delete;


    AWS_CLOUDFRONT_API GetFunction2020_05_31Result(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_CLOUDFRONT_API GetFunction2020_05_31Result& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The function code of a CloudFront function.</p>
     */
    inline Aws::IOStream& GetFunctionCode() { return m_functionCode.GetUnderlyingStream(); }

    /**
     * <p>The function code of a CloudFront function.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_functionCode = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline GetFunction2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline GetFunction2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the current version of the CloudFront
     * function.</p>
     */
    inline GetFunction2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The content type (media type) of the response.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type (media type) of the response.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content type (media type) of the response.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content type (media type) of the response.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content type (media type) of the response.</p>
     */
    inline GetFunction2020_05_31Result& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type (media type) of the response.</p>
     */
    inline GetFunction2020_05_31Result& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type (media type) of the response.</p>
     */
    inline GetFunction2020_05_31Result& WithContentType(const char* value) { SetContentType(value); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_functionCode;

    Aws::String m_eTag;

    Aws::String m_contentType;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
