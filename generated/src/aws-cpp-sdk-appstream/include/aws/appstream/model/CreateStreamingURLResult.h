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
  class CreateStreamingURLResult
  {
  public:
    AWS_APPSTREAM_API CreateStreamingURLResult();
    AWS_APPSTREAM_API CreateStreamingURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateStreamingURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline const Aws::String& GetStreamingURL() const{ return m_streamingURL; }

    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline void SetStreamingURL(const Aws::String& value) { m_streamingURL = value; }

    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline void SetStreamingURL(Aws::String&& value) { m_streamingURL = std::move(value); }

    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline void SetStreamingURL(const char* value) { m_streamingURL.assign(value); }

    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline CreateStreamingURLResult& WithStreamingURL(const Aws::String& value) { SetStreamingURL(value); return *this;}

    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline CreateStreamingURLResult& WithStreamingURL(Aws::String&& value) { SetStreamingURL(std::move(value)); return *this;}

    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline CreateStreamingURLResult& WithStreamingURL(const char* value) { SetStreamingURL(value); return *this;}


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
    inline CreateStreamingURLResult& WithExpires(const Aws::Utils::DateTime& value) { SetExpires(value); return *this;}

    /**
     * <p>The elapsed time, in seconds after the Unix epoch, when this URL expires.</p>
     */
    inline CreateStreamingURLResult& WithExpires(Aws::Utils::DateTime&& value) { SetExpires(std::move(value)); return *this;}

  private:

    Aws::String m_streamingURL;

    Aws::Utils::DateTime m_expires;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
