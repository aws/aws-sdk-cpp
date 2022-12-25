/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/TransitGatewayConnectPeerAssociation.h>
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
  class GetTransitGatewayConnectPeerAssociationsResult
  {
  public:
    AWS_NETWORKMANAGER_API GetTransitGatewayConnectPeerAssociationsResult();
    AWS_NETWORKMANAGER_API GetTransitGatewayConnectPeerAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetTransitGatewayConnectPeerAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the transit gateway Connect peer associations.</p>
     */
    inline const Aws::Vector<TransitGatewayConnectPeerAssociation>& GetTransitGatewayConnectPeerAssociations() const{ return m_transitGatewayConnectPeerAssociations; }

    /**
     * <p>Information about the transit gateway Connect peer associations.</p>
     */
    inline void SetTransitGatewayConnectPeerAssociations(const Aws::Vector<TransitGatewayConnectPeerAssociation>& value) { m_transitGatewayConnectPeerAssociations = value; }

    /**
     * <p>Information about the transit gateway Connect peer associations.</p>
     */
    inline void SetTransitGatewayConnectPeerAssociations(Aws::Vector<TransitGatewayConnectPeerAssociation>&& value) { m_transitGatewayConnectPeerAssociations = std::move(value); }

    /**
     * <p>Information about the transit gateway Connect peer associations.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsResult& WithTransitGatewayConnectPeerAssociations(const Aws::Vector<TransitGatewayConnectPeerAssociation>& value) { SetTransitGatewayConnectPeerAssociations(value); return *this;}

    /**
     * <p>Information about the transit gateway Connect peer associations.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsResult& WithTransitGatewayConnectPeerAssociations(Aws::Vector<TransitGatewayConnectPeerAssociation>&& value) { SetTransitGatewayConnectPeerAssociations(std::move(value)); return *this;}

    /**
     * <p>Information about the transit gateway Connect peer associations.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsResult& AddTransitGatewayConnectPeerAssociations(const TransitGatewayConnectPeerAssociation& value) { m_transitGatewayConnectPeerAssociations.push_back(value); return *this; }

    /**
     * <p>Information about the transit gateway Connect peer associations.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsResult& AddTransitGatewayConnectPeerAssociations(TransitGatewayConnectPeerAssociation&& value) { m_transitGatewayConnectPeerAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use for the next page of results.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TransitGatewayConnectPeerAssociation> m_transitGatewayConnectPeerAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
