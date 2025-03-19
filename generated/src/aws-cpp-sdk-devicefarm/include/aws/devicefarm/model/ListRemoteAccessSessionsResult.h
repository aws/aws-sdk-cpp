/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the response from the server after AWS Device Farm makes a request
   * to return information about the remote access session.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRemoteAccessSessionsResult">AWS
   * API Reference</a></p>
   */
  class ListRemoteAccessSessionsResult
  {
  public:
    AWS_DEVICEFARM_API ListRemoteAccessSessionsResult() = default;
    AWS_DEVICEFARM_API ListRemoteAccessSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListRemoteAccessSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A container that represents the metadata from the service about each remote
     * access session you are requesting.</p>
     */
    inline const Aws::Vector<RemoteAccessSession>& GetRemoteAccessSessions() const { return m_remoteAccessSessions; }
    template<typename RemoteAccessSessionsT = Aws::Vector<RemoteAccessSession>>
    void SetRemoteAccessSessions(RemoteAccessSessionsT&& value) { m_remoteAccessSessionsHasBeenSet = true; m_remoteAccessSessions = std::forward<RemoteAccessSessionsT>(value); }
    template<typename RemoteAccessSessionsT = Aws::Vector<RemoteAccessSession>>
    ListRemoteAccessSessionsResult& WithRemoteAccessSessions(RemoteAccessSessionsT&& value) { SetRemoteAccessSessions(std::forward<RemoteAccessSessionsT>(value)); return *this;}
    template<typename RemoteAccessSessionsT = RemoteAccessSession>
    ListRemoteAccessSessionsResult& AddRemoteAccessSessions(RemoteAccessSessionsT&& value) { m_remoteAccessSessionsHasBeenSet = true; m_remoteAccessSessions.emplace_back(std::forward<RemoteAccessSessionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRemoteAccessSessionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRemoteAccessSessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RemoteAccessSession> m_remoteAccessSessions;
    bool m_remoteAccessSessionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
