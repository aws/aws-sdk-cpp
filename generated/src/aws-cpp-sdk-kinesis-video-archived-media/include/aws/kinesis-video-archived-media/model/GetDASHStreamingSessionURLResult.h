/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDASHStreamingSessionURLResult
  {
  public:
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetDASHStreamingSessionURLResult();
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetDASHStreamingSessionURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEOARCHIVEDMEDIA_API GetDASHStreamingSessionURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the MPEG-DASH manifest.</p>
     */
    inline const Aws::String& GetDASHStreamingSessionURL() const{ return m_dASHStreamingSessionURL; }

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the MPEG-DASH manifest.</p>
     */
    inline void SetDASHStreamingSessionURL(const Aws::String& value) { m_dASHStreamingSessionURL = value; }

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the MPEG-DASH manifest.</p>
     */
    inline void SetDASHStreamingSessionURL(Aws::String&& value) { m_dASHStreamingSessionURL = std::move(value); }

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the MPEG-DASH manifest.</p>
     */
    inline void SetDASHStreamingSessionURL(const char* value) { m_dASHStreamingSessionURL.assign(value); }

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the MPEG-DASH manifest.</p>
     */
    inline GetDASHStreamingSessionURLResult& WithDASHStreamingSessionURL(const Aws::String& value) { SetDASHStreamingSessionURL(value); return *this;}

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the MPEG-DASH manifest.</p>
     */
    inline GetDASHStreamingSessionURLResult& WithDASHStreamingSessionURL(Aws::String&& value) { SetDASHStreamingSessionURL(std::move(value)); return *this;}

    /**
     * <p>The URL (containing the session token) that a media player can use to
     * retrieve the MPEG-DASH manifest.</p>
     */
    inline GetDASHStreamingSessionURLResult& WithDASHStreamingSessionURL(const char* value) { SetDASHStreamingSessionURL(value); return *this;}

  private:

    Aws::String m_dASHStreamingSessionURL;
  };

} // namespace Model
} // namespace KinesisVideoArchivedMedia
} // namespace Aws
