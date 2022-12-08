/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/NetworkResource.h>
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
  class ListNetworkResourcesResult
  {
  public:
    AWS_PRIVATENETWORKS_API ListNetworkResourcesResult();
    AWS_PRIVATENETWORKS_API ListNetworkResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ListNetworkResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about network resources.</p>
     */
    inline const Aws::Vector<NetworkResource>& GetNetworkResources() const{ return m_networkResources; }

    /**
     * <p>Information about network resources.</p>
     */
    inline void SetNetworkResources(const Aws::Vector<NetworkResource>& value) { m_networkResources = value; }

    /**
     * <p>Information about network resources.</p>
     */
    inline void SetNetworkResources(Aws::Vector<NetworkResource>&& value) { m_networkResources = std::move(value); }

    /**
     * <p>Information about network resources.</p>
     */
    inline ListNetworkResourcesResult& WithNetworkResources(const Aws::Vector<NetworkResource>& value) { SetNetworkResources(value); return *this;}

    /**
     * <p>Information about network resources.</p>
     */
    inline ListNetworkResourcesResult& WithNetworkResources(Aws::Vector<NetworkResource>&& value) { SetNetworkResources(std::move(value)); return *this;}

    /**
     * <p>Information about network resources.</p>
     */
    inline ListNetworkResourcesResult& AddNetworkResources(const NetworkResource& value) { m_networkResources.push_back(value); return *this; }

    /**
     * <p>Information about network resources.</p>
     */
    inline ListNetworkResourcesResult& AddNetworkResources(NetworkResource&& value) { m_networkResources.push_back(std::move(value)); return *this; }


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
    inline ListNetworkResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListNetworkResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListNetworkResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<NetworkResource> m_networkResources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
