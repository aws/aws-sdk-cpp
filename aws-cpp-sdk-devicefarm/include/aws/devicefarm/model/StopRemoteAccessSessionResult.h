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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/RemoteAccessSession.h>

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
   * <p>Represents the response from the server that describes the remote access
   * session when AWS Device Farm stops the session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRemoteAccessSessionResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API StopRemoteAccessSessionResult
  {
  public:
    StopRemoteAccessSessionResult();
    StopRemoteAccessSessionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopRemoteAccessSessionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A container representing the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline const RemoteAccessSession& GetRemoteAccessSession() const{ return m_remoteAccessSession; }

    /**
     * <p>A container representing the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline void SetRemoteAccessSession(const RemoteAccessSession& value) { m_remoteAccessSession = value; }

    /**
     * <p>A container representing the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline void SetRemoteAccessSession(RemoteAccessSession&& value) { m_remoteAccessSession = value; }

    /**
     * <p>A container representing the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline StopRemoteAccessSessionResult& WithRemoteAccessSession(const RemoteAccessSession& value) { SetRemoteAccessSession(value); return *this;}

    /**
     * <p>A container representing the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline StopRemoteAccessSessionResult& WithRemoteAccessSession(RemoteAccessSession&& value) { SetRemoteAccessSession(value); return *this;}

  private:
    RemoteAccessSession m_remoteAccessSession;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
