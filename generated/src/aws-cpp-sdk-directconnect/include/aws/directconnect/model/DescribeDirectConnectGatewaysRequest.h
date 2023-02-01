/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class DescribeDirectConnectGatewaysRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewaysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDirectConnectGateways"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DescribeDirectConnectGatewaysRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DescribeDirectConnectGatewaysRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DescribeDirectConnectGatewaysRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p> <p>If <code>MaxResults</code> is given a value larger than 100, only
     * 100 results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p> <p>If <code>MaxResults</code> is given a value larger than 100, only
     * 100 results are returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p> <p>If <code>MaxResults</code> is given a value larger than 100, only
     * 100 results are returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p> <p>If <code>MaxResults</code> is given a value larger than 100, only
     * 100 results are returned.</p>
     */
    inline DescribeDirectConnectGatewaysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewaysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewaysRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewaysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
