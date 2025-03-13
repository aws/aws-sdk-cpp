/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/RemoteAccessSession.h>
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
    AWS_DEVICEFARM_API StopRemoteAccessSessionResult() = default;
    AWS_DEVICEFARM_API StopRemoteAccessSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API StopRemoteAccessSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A container that represents the metadata from the service about the remote
     * access session you are stopping.</p>
     */
    inline const RemoteAccessSession& GetRemoteAccessSession() const { return m_remoteAccessSession; }
    template<typename RemoteAccessSessionT = RemoteAccessSession>
    void SetRemoteAccessSession(RemoteAccessSessionT&& value) { m_remoteAccessSessionHasBeenSet = true; m_remoteAccessSession = std::forward<RemoteAccessSessionT>(value); }
    template<typename RemoteAccessSessionT = RemoteAccessSession>
    StopRemoteAccessSessionResult& WithRemoteAccessSession(RemoteAccessSessionT&& value) { SetRemoteAccessSession(std::forward<RemoteAccessSessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopRemoteAccessSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RemoteAccessSession m_remoteAccessSession;
    bool m_remoteAccessSessionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
