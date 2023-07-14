﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class AWS_NETWORKMANAGER_API GetTransitGatewayConnectPeerAssociationsRequest : public NetworkManagerRequest
  {
  public:
    GetTransitGatewayConnectPeerAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTransitGatewayConnectPeerAssociations"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayConnectPeerArns() const{ return m_transitGatewayConnectPeerArns; }

    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline bool TransitGatewayConnectPeerArnsHasBeenSet() const { return m_transitGatewayConnectPeerArnsHasBeenSet; }

    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline void SetTransitGatewayConnectPeerArns(const Aws::Vector<Aws::String>& value) { m_transitGatewayConnectPeerArnsHasBeenSet = true; m_transitGatewayConnectPeerArns = value; }

    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline void SetTransitGatewayConnectPeerArns(Aws::Vector<Aws::String>&& value) { m_transitGatewayConnectPeerArnsHasBeenSet = true; m_transitGatewayConnectPeerArns = std::move(value); }

    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithTransitGatewayConnectPeerArns(const Aws::Vector<Aws::String>& value) { SetTransitGatewayConnectPeerArns(value); return *this;}

    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithTransitGatewayConnectPeerArns(Aws::Vector<Aws::String>&& value) { SetTransitGatewayConnectPeerArns(std::move(value)); return *this;}

    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& AddTransitGatewayConnectPeerArns(const Aws::String& value) { m_transitGatewayConnectPeerArnsHasBeenSet = true; m_transitGatewayConnectPeerArns.push_back(value); return *this; }

    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& AddTransitGatewayConnectPeerArns(Aws::String&& value) { m_transitGatewayConnectPeerArnsHasBeenSet = true; m_transitGatewayConnectPeerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more transit gateway Connect peer Amazon Resource Names (ARNs).</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& AddTransitGatewayConnectPeerArns(const char* value) { m_transitGatewayConnectPeerArnsHasBeenSet = true; m_transitGatewayConnectPeerArns.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetTransitGatewayConnectPeerAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet;

    Aws::Vector<Aws::String> m_transitGatewayConnectPeerArns;
    bool m_transitGatewayConnectPeerArnsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
