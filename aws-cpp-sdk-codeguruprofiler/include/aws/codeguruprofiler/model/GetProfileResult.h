/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the getProfileResponse.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetProfileResponse">AWS
   * API Reference</a></p>
   */
  class GetProfileResult
  {
  public:
    AWS_CODEGURUPROFILER_API GetProfileResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_CODEGURUPROFILER_API GetProfileResult(GetProfileResult&&);
    AWS_CODEGURUPROFILER_API GetProfileResult& operator=(GetProfileResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetProfileResult(const GetProfileResult&) = delete;
    GetProfileResult& operator=(const GetProfileResult&) = delete;


    AWS_CODEGURUPROFILER_API GetProfileResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_CODEGURUPROFILER_API GetProfileResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The content encoding of the profile.</p>
     */
    inline const Aws::String& GetContentEncoding() const{ return m_contentEncoding; }

    /**
     * <p>The content encoding of the profile.</p>
     */
    inline void SetContentEncoding(const Aws::String& value) { m_contentEncoding = value; }

    /**
     * <p>The content encoding of the profile.</p>
     */
    inline void SetContentEncoding(Aws::String&& value) { m_contentEncoding = std::move(value); }

    /**
     * <p>The content encoding of the profile.</p>
     */
    inline void SetContentEncoding(const char* value) { m_contentEncoding.assign(value); }

    /**
     * <p>The content encoding of the profile.</p>
     */
    inline GetProfileResult& WithContentEncoding(const Aws::String& value) { SetContentEncoding(value); return *this;}

    /**
     * <p>The content encoding of the profile.</p>
     */
    inline GetProfileResult& WithContentEncoding(Aws::String&& value) { SetContentEncoding(std::move(value)); return *this;}

    /**
     * <p>The content encoding of the profile.</p>
     */
    inline GetProfileResult& WithContentEncoding(const char* value) { SetContentEncoding(value); return *this;}


    /**
     * <p>The content type of the profile in the payload. It is either
     * <code>application/json</code> or the default
     * <code>application/x-amzn-ion</code>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the profile in the payload. It is either
     * <code>application/json</code> or the default
     * <code>application/x-amzn-ion</code>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }

    /**
     * <p>The content type of the profile in the payload. It is either
     * <code>application/json</code> or the default
     * <code>application/x-amzn-ion</code>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }

    /**
     * <p>The content type of the profile in the payload. It is either
     * <code>application/json</code> or the default
     * <code>application/x-amzn-ion</code>.</p>
     */
    inline void SetContentType(const char* value) { m_contentType.assign(value); }

    /**
     * <p>The content type of the profile in the payload. It is either
     * <code>application/json</code> or the default
     * <code>application/x-amzn-ion</code>.</p>
     */
    inline GetProfileResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the profile in the payload. It is either
     * <code>application/json</code> or the default
     * <code>application/x-amzn-ion</code>.</p>
     */
    inline GetProfileResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The content type of the profile in the payload. It is either
     * <code>application/json</code> or the default
     * <code>application/x-amzn-ion</code>.</p>
     */
    inline GetProfileResult& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>Information about the profile.</p>
     */
    inline Aws::IOStream& GetProfile() { return m_profile.GetUnderlyingStream(); }

    /**
     * <p>Information about the profile.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_profile = Aws::Utils::Stream::ResponseStream(body); }

  private:

    Aws::String m_contentEncoding;

    Aws::String m_contentType;

  Aws::Utils::Stream::ResponseStream m_profile;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
