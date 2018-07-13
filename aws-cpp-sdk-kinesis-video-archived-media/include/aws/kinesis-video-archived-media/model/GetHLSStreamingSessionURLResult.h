/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
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
namespace KinesisVideoArchivedMedia
{
namespace Model
{
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API GetHLSStreamingSessionURLResult
  {
  public:
    GetHLSStreamingSessionURLResult();
    GetHLSStreamingSessionURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetHLSStreamingSessionURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the HLS master playlist.</p>
     */
    inline const Aws::String& GetHLSStreamingSessionURL() const{ return m_hLSStreamingSessionURL; }

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the HLS master playlist.</p>
     */
    inline void SetHLSStreamingSessionURL(const Aws::String& value) { m_hLSStreamingSessionURL = value; }

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the HLS master playlist.</p>
     */
    inline void SetHLSStreamingSessionURL(Aws::String&& value) { m_hLSStreamingSessionURL = std::move(value); }

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the HLS master playlist.</p>
     */
    inline void SetHLSStreamingSessionURL(const char* value) { m_hLSStreamingSessionURL.assign(value); }

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the HLS master playlist.</p>
     */
    inline GetHLSStreamingSessionURLResult& WithHLSStreamingSessionURL(const Aws::String& value) { SetHLSStreamingSessionURL(value); return *this;}

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the HLS master playlist.</p>
     */
    inline GetHLSStreamingSessionURLResult& WithHLSStreamingSessionURL(Aws::String&& value) { SetHLSStreamingSessionURL(std::move(value)); return *this;}

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the HLS master playlist.</p>
     */
    inline GetHLSStreamingSessionURLResult& WithHLSStreamingSessionURL(const char* value) { SetHLSStreamingSessionURL(value); return *this;}

  private:

    Aws::String m_hLSStreamingSessionURL;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
