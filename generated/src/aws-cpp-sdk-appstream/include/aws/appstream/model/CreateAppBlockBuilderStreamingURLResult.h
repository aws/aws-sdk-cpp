/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateAppBlockBuilderStreamingURLResult
  {
  public:
    AWS_APPSTREAM_API CreateAppBlockBuilderStreamingURLResult();
    AWS_APPSTREAM_API CreateAppBlockBuilderStreamingURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateAppBlockBuilderStreamingURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL to start the streaming session.</p>
     */
    inline const Aws::String& GetStreamingURL() const{ return m_streamingURL; }

    /**
     * <p>The URL to start the streaming session.</p>
     */
    inline void SetStreamingURL(const Aws::String& value) { m_streamingURL = value; }

    /**
     * <p>The URL to start the streaming session.</p>
     */
    inline void SetStreamingURL(Aws::String&& value) { m_streamingURL = std::move(value); }

    /**
     * <p>The URL to start the streaming session.</p>
     */
    inline void SetStreamingURL(const char* value) { m_streamingURL.assign(value); }

    /**
     * <p>The URL to start the streaming session.</p>
     */
    inline CreateAppBlockBuilderStreamingURLResult& WithStreamingURL(const Aws::String& value) { SetStreamingURL(value); return *this;}

    /**
     * <p>The URL to start the streaming session.</p>
     */
    inline CreateAppBlockBuilderStreamingURLResult& WithStreamingURL(Aws::String&& value) { SetStreamingURL(std::move(value)); return *this;}

    /**
     * <p>The URL to start the streaming session.</p>
     */
    inline CreateAppBlockBuilderStreamingURLResult& WithStreamingURL(const char* value) { SetStreamingURL(value); return *this;}


    /**
     * <p>The elapsed time, in seconds after the Unix epoch, when this URL expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const{ return m_expires; }

    /**
     * <p>The elapsed time, in seconds after the Unix epoch, when this URL expires.</p>
     */
    inline void SetExpires(const Aws::Utils::DateTime& value) { m_expires = value; }

    /**
     * <p>The elapsed time, in seconds after the Unix epoch, when this URL expires.</p>
     */
    inline void SetExpires(Aws::Utils::DateTime&& value) { m_expires = std::move(value); }

    /**
     * <p>The elapsed time, in seconds after the Unix epoch, when this URL expires.</p>
     */
    inline CreateAppBlockBuilderStreamingURLResult& WithExpires(const Aws::Utils::DateTime& value) { SetExpires(value); return *this;}

    /**
     * <p>The elapsed time, in seconds after the Unix epoch, when this URL expires.</p>
     */
    inline CreateAppBlockBuilderStreamingURLResult& WithExpires(Aws::Utils::DateTime&& value) { SetExpires(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAppBlockBuilderStreamingURLResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAppBlockBuilderStreamingURLResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAppBlockBuilderStreamingURLResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_streamingURL;

    Aws::Utils::DateTime m_expires;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
