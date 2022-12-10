/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/NetworkTelemetry.h>
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
  class GetNetworkTelemetryResult
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkTelemetryResult();
    AWS_NETWORKMANAGER_API GetNetworkTelemetryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetNetworkTelemetryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The network telemetry.</p>
     */
    inline const Aws::Vector<NetworkTelemetry>& GetNetworkTelemetry() const{ return m_networkTelemetry; }

    /**
     * <p>The network telemetry.</p>
     */
    inline void SetNetworkTelemetry(const Aws::Vector<NetworkTelemetry>& value) { m_networkTelemetry = value; }

    /**
     * <p>The network telemetry.</p>
     */
    inline void SetNetworkTelemetry(Aws::Vector<NetworkTelemetry>&& value) { m_networkTelemetry = std::move(value); }

    /**
     * <p>The network telemetry.</p>
     */
    inline GetNetworkTelemetryResult& WithNetworkTelemetry(const Aws::Vector<NetworkTelemetry>& value) { SetNetworkTelemetry(value); return *this;}

    /**
     * <p>The network telemetry.</p>
     */
    inline GetNetworkTelemetryResult& WithNetworkTelemetry(Aws::Vector<NetworkTelemetry>&& value) { SetNetworkTelemetry(std::move(value)); return *this;}

    /**
     * <p>The network telemetry.</p>
     */
    inline GetNetworkTelemetryResult& AddNetworkTelemetry(const NetworkTelemetry& value) { m_networkTelemetry.push_back(value); return *this; }

    /**
     * <p>The network telemetry.</p>
     */
    inline GetNetworkTelemetryResult& AddNetworkTelemetry(NetworkTelemetry&& value) { m_networkTelemetry.push_back(std::move(value)); return *this; }


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
    inline GetNetworkTelemetryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetNetworkTelemetryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetNetworkTelemetryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<NetworkTelemetry> m_networkTelemetry;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
