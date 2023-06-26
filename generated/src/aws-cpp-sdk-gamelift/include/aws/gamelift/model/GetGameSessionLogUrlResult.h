/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{
  class GetGameSessionLogUrlResult
  {
  public:
    AWS_GAMELIFT_API GetGameSessionLogUrlResult();
    AWS_GAMELIFT_API GetGameSessionLogUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API GetGameSessionLogUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Location of the requested game session logs, available for download. This URL
     * is valid for 15 minutes, after which S3 will reject any download request using
     * this URL. You can request a new URL any time within the 14-day period that the
     * logs are retained.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>Location of the requested game session logs, available for download. This URL
     * is valid for 15 minutes, after which S3 will reject any download request using
     * this URL. You can request a new URL any time within the 14-day period that the
     * logs are retained.</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrl = value; }

    /**
     * <p>Location of the requested game session logs, available for download. This URL
     * is valid for 15 minutes, after which S3 will reject any download request using
     * this URL. You can request a new URL any time within the 14-day period that the
     * logs are retained.</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrl = std::move(value); }

    /**
     * <p>Location of the requested game session logs, available for download. This URL
     * is valid for 15 minutes, after which S3 will reject any download request using
     * this URL. You can request a new URL any time within the 14-day period that the
     * logs are retained.</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrl.assign(value); }

    /**
     * <p>Location of the requested game session logs, available for download. This URL
     * is valid for 15 minutes, after which S3 will reject any download request using
     * this URL. You can request a new URL any time within the 14-day period that the
     * logs are retained.</p>
     */
    inline GetGameSessionLogUrlResult& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>Location of the requested game session logs, available for download. This URL
     * is valid for 15 minutes, after which S3 will reject any download request using
     * this URL. You can request a new URL any time within the 14-day period that the
     * logs are retained.</p>
     */
    inline GetGameSessionLogUrlResult& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>Location of the requested game session logs, available for download. This URL
     * is valid for 15 minutes, after which S3 will reject any download request using
     * this URL. You can request a new URL any time within the 14-day period that the
     * logs are retained.</p>
     */
    inline GetGameSessionLogUrlResult& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGameSessionLogUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGameSessionLogUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGameSessionLogUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_preSignedUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
