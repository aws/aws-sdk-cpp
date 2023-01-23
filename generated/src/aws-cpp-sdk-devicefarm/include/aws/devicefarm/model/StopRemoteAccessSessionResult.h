/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the response from the server that describes the remote access
   * session when AWS Device Farm stops the session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRemoteAccessSessionResult">AWS
   * API Reference</a></p>
   */
  class StopRemoteAccessSessionResult
  {
  public:
    AWS_DEVICEFARM_API StopRemoteAccessSessionResult();
    AWS_DEVICEFARM_API StopRemoteAccessSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API StopRemoteAccessSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A container that represents the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline const RemoteAccessSession& GetRemoteAccessSession() const{ return m_remoteAccessSession; }

    /**
     * <p>A container that represents the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline void SetRemoteAccessSession(const RemoteAccessSession& value) { m_remoteAccessSession = value; }

    /**
     * <p>A container that represents the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline void SetRemoteAccessSession(RemoteAccessSession&& value) { m_remoteAccessSession = std::move(value); }

    /**
     * <p>A container that represents the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline StopRemoteAccessSessionResult& WithRemoteAccessSession(const RemoteAccessSession& value) { SetRemoteAccessSession(value); return *this;}

    /**
     * <p>A container that represents the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline StopRemoteAccessSessionResult& WithRemoteAccessSession(RemoteAccessSession&& value) { SetRemoteAccessSession(std::move(value)); return *this;}

  private:

    RemoteAccessSession m_remoteAccessSession;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
