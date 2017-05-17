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
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetGameSessionLogUrlOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GetGameSessionLogUrlResult
  {
  public:
    GetGameSessionLogUrlResult();
    GetGameSessionLogUrlResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGameSessionLogUrlResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Location of the requested game session logs, available for download.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>Location of the requested game session logs, available for download.</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrl = value; }

    /**
     * <p>Location of the requested game session logs, available for download.</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrl = std::move(value); }

    /**
     * <p>Location of the requested game session logs, available for download.</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrl.assign(value); }

    /**
     * <p>Location of the requested game session logs, available for download.</p>
     */
    inline GetGameSessionLogUrlResult& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>Location of the requested game session logs, available for download.</p>
     */
    inline GetGameSessionLogUrlResult& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>Location of the requested game session logs, available for download.</p>
     */
    inline GetGameSessionLogUrlResult& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}

  private:
    Aws::String m_preSignedUrl;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
