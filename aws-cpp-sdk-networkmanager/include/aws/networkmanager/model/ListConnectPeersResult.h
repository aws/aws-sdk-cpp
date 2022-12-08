/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectPeerSummary.h>
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
namespace NetworkManager
{
namespace Model
{
  class ListConnectPeersResult
  {
  public:
    AWS_NETWORKMANAGER_API ListConnectPeersResult();
    AWS_NETWORKMANAGER_API ListConnectPeersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListConnectPeersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the Connect peers.</p>
     */
    inline const Aws::Vector<ConnectPeerSummary>& GetConnectPeers() const{ return m_connectPeers; }

    /**
     * <p>Describes the Connect peers.</p>
     */
    inline void SetConnectPeers(const Aws::Vector<ConnectPeerSummary>& value) { m_connectPeers = value; }

    /**
     * <p>Describes the Connect peers.</p>
     */
    inline void SetConnectPeers(Aws::Vector<ConnectPeerSummary>&& value) { m_connectPeers = std::move(value); }

    /**
     * <p>Describes the Connect peers.</p>
     */
    inline ListConnectPeersResult& WithConnectPeers(const Aws::Vector<ConnectPeerSummary>& value) { SetConnectPeers(value); return *this;}

    /**
     * <p>Describes the Connect peers.</p>
     */
    inline ListConnectPeersResult& WithConnectPeers(Aws::Vector<ConnectPeerSummary>&& value) { SetConnectPeers(std::move(value)); return *this;}

    /**
     * <p>Describes the Connect peers.</p>
     */
    inline ListConnectPeersResult& AddConnectPeers(const ConnectPeerSummary& value) { m_connectPeers.push_back(value); return *this; }

    /**
     * <p>Describes the Connect peers.</p>
     */
    inline ListConnectPeersResult& AddConnectPeers(ConnectPeerSummary&& value) { m_connectPeers.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListConnectPeersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListConnectPeersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListConnectPeersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConnectPeerSummary> m_connectPeers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
