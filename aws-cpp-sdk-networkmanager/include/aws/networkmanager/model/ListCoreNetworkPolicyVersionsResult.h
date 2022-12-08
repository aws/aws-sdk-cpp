/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkPolicyVersion.h>
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
  class ListCoreNetworkPolicyVersionsResult
  {
  public:
    AWS_NETWORKMANAGER_API ListCoreNetworkPolicyVersionsResult();
    AWS_NETWORKMANAGER_API ListCoreNetworkPolicyVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListCoreNetworkPolicyVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes core network policy versions.</p>
     */
    inline const Aws::Vector<CoreNetworkPolicyVersion>& GetCoreNetworkPolicyVersions() const{ return m_coreNetworkPolicyVersions; }

    /**
     * <p>Describes core network policy versions.</p>
     */
    inline void SetCoreNetworkPolicyVersions(const Aws::Vector<CoreNetworkPolicyVersion>& value) { m_coreNetworkPolicyVersions = value; }

    /**
     * <p>Describes core network policy versions.</p>
     */
    inline void SetCoreNetworkPolicyVersions(Aws::Vector<CoreNetworkPolicyVersion>&& value) { m_coreNetworkPolicyVersions = std::move(value); }

    /**
     * <p>Describes core network policy versions.</p>
     */
    inline ListCoreNetworkPolicyVersionsResult& WithCoreNetworkPolicyVersions(const Aws::Vector<CoreNetworkPolicyVersion>& value) { SetCoreNetworkPolicyVersions(value); return *this;}

    /**
     * <p>Describes core network policy versions.</p>
     */
    inline ListCoreNetworkPolicyVersionsResult& WithCoreNetworkPolicyVersions(Aws::Vector<CoreNetworkPolicyVersion>&& value) { SetCoreNetworkPolicyVersions(std::move(value)); return *this;}

    /**
     * <p>Describes core network policy versions.</p>
     */
    inline ListCoreNetworkPolicyVersionsResult& AddCoreNetworkPolicyVersions(const CoreNetworkPolicyVersion& value) { m_coreNetworkPolicyVersions.push_back(value); return *this; }

    /**
     * <p>Describes core network policy versions.</p>
     */
    inline ListCoreNetworkPolicyVersionsResult& AddCoreNetworkPolicyVersions(CoreNetworkPolicyVersion&& value) { m_coreNetworkPolicyVersions.push_back(std::move(value)); return *this; }


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
    inline ListCoreNetworkPolicyVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListCoreNetworkPolicyVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListCoreNetworkPolicyVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CoreNetworkPolicyVersion> m_coreNetworkPolicyVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
