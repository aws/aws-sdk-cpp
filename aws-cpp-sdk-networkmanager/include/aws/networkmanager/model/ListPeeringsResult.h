/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Peering.h>
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
  class ListPeeringsResult
  {
  public:
    AWS_NETWORKMANAGER_API ListPeeringsResult();
    AWS_NETWORKMANAGER_API ListPeeringsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API ListPeeringsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the transit gateway peerings for the <code>ListPeerings</code>
     * request.</p>
     */
    inline const Aws::Vector<Peering>& GetPeerings() const{ return m_peerings; }

    /**
     * <p>Lists the transit gateway peerings for the <code>ListPeerings</code>
     * request.</p>
     */
    inline void SetPeerings(const Aws::Vector<Peering>& value) { m_peerings = value; }

    /**
     * <p>Lists the transit gateway peerings for the <code>ListPeerings</code>
     * request.</p>
     */
    inline void SetPeerings(Aws::Vector<Peering>&& value) { m_peerings = std::move(value); }

    /**
     * <p>Lists the transit gateway peerings for the <code>ListPeerings</code>
     * request.</p>
     */
    inline ListPeeringsResult& WithPeerings(const Aws::Vector<Peering>& value) { SetPeerings(value); return *this;}

    /**
     * <p>Lists the transit gateway peerings for the <code>ListPeerings</code>
     * request.</p>
     */
    inline ListPeeringsResult& WithPeerings(Aws::Vector<Peering>&& value) { SetPeerings(std::move(value)); return *this;}

    /**
     * <p>Lists the transit gateway peerings for the <code>ListPeerings</code>
     * request.</p>
     */
    inline ListPeeringsResult& AddPeerings(const Peering& value) { m_peerings.push_back(value); return *this; }

    /**
     * <p>Lists the transit gateway peerings for the <code>ListPeerings</code>
     * request.</p>
     */
    inline ListPeeringsResult& AddPeerings(Peering&& value) { m_peerings.push_back(std::move(value)); return *this; }


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
    inline ListPeeringsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListPeeringsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListPeeringsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Peering> m_peerings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
