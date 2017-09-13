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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/RemoteAccessSession.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the response from the server that lists detailed information about
   * the remote access session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRemoteAccessSessionResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API GetRemoteAccessSessionResult
  {
  public:
    GetRemoteAccessSessionResult();
    GetRemoteAccessSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRemoteAccessSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A container that lists detailed information about the remote access
     * session.</p>
     */
    inline const RemoteAccessSession& GetRemoteAccessSession() const{ return m_remoteAccessSession; }

    /**
     * <p>A container that lists detailed information about the remote access
     * session.</p>
     */
    inline void SetRemoteAccessSession(const RemoteAccessSession& value) { m_remoteAccessSession = value; }

    /**
     * <p>A container that lists detailed information about the remote access
     * session.</p>
     */
    inline void SetRemoteAccessSession(RemoteAccessSession&& value) { m_remoteAccessSession = std::move(value); }

    /**
     * <p>A container that lists detailed information about the remote access
     * session.</p>
     */
    inline GetRemoteAccessSessionResult& WithRemoteAccessSession(const RemoteAccessSession& value) { SetRemoteAccessSession(value); return *this;}

    /**
     * <p>A container that lists detailed information about the remote access
     * session.</p>
     */
    inline GetRemoteAccessSessionResult& WithRemoteAccessSession(RemoteAccessSession&& value) { SetRemoteAccessSession(std::move(value)); return *this;}

  private:

    RemoteAccessSession m_remoteAccessSession;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
