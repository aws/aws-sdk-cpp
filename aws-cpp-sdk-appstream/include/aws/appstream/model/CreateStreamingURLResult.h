﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

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
  class AWS_APPSTREAM_API CreateStreamingURLResult
  {
  public:
    CreateStreamingURLResult();
    CreateStreamingURLResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateStreamingURLResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetStreamingURL(Aws::String&& value) { m_streamingURL = value; }

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
    inline CreateStreamingURLResult& WithStreamingURL(Aws::String&& value) { SetStreamingURL(value); return *this;}

    /**
     * <p>The URL to start the AppStream 2.0 streaming session.</p>
     */
    inline CreateStreamingURLResult& WithStreamingURL(const char* value) { SetStreamingURL(value); return *this;}

    /**
     * <p>Elapsed seconds after the Unix epoch, at which time this URL expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpires() const{ return m_expires; }

    /**
     * <p>Elapsed seconds after the Unix epoch, at which time this URL expires.</p>
     */
    inline void SetExpires(const Aws::Utils::DateTime& value) { m_expires = value; }

    /**
     * <p>Elapsed seconds after the Unix epoch, at which time this URL expires.</p>
     */
    inline void SetExpires(Aws::Utils::DateTime&& value) { m_expires = value; }

    /**
     * <p>Elapsed seconds after the Unix epoch, at which time this URL expires.</p>
     */
    inline CreateStreamingURLResult& WithExpires(const Aws::Utils::DateTime& value) { SetExpires(value); return *this;}

    /**
     * <p>Elapsed seconds after the Unix epoch, at which time this URL expires.</p>
     */
    inline CreateStreamingURLResult& WithExpires(Aws::Utils::DateTime&& value) { SetExpires(value); return *this;}

  private:
    Aws::String m_streamingURL;
    Aws::Utils::DateTime m_expires;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
