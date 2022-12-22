/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/Network.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class ListNetworksResult
  {
  public:
    AWS_PRIVATENETWORKS_API ListNetworksResult();
    AWS_PRIVATENETWORKS_API ListNetworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ListNetworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The networks.</p>
     */
    inline const Aws::Vector<Network>& GetNetworks() const{ return m_networks; }

    /**
     * <p>The networks.</p>
     */
    inline void SetNetworks(const Aws::Vector<Network>& value) { m_networks = value; }

    /**
     * <p>The networks.</p>
     */
    inline void SetNetworks(Aws::Vector<Network>&& value) { m_networks = std::move(value); }

    /**
     * <p>The networks.</p>
     */
    inline ListNetworksResult& WithNetworks(const Aws::Vector<Network>& value) { SetNetworks(value); return *this;}

    /**
     * <p>The networks.</p>
     */
    inline ListNetworksResult& WithNetworks(Aws::Vector<Network>&& value) { SetNetworks(std::move(value)); return *this;}

    /**
     * <p>The networks.</p>
     */
    inline ListNetworksResult& AddNetworks(const Network& value) { m_networks.push_back(value); return *this; }

    /**
     * <p>The networks.</p>
     */
    inline ListNetworksResult& AddNetworks(Network&& value) { m_networks.push_back(std::move(value)); return *this; }


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
    inline ListNetworksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListNetworksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListNetworksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Network> m_networks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
