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
  class DescribeDirectConnectGatewayAssociationsRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDirectConnectGatewayAssociations"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline const Aws::String& GetAssociatedGatewayId() const{ return m_associatedGatewayId; }
    inline bool AssociatedGatewayIdHasBeenSet() const { return m_associatedGatewayIdHasBeenSet; }
    inline void SetAssociatedGatewayId(const Aws::String& value) { m_associatedGatewayIdHasBeenSet = true; m_associatedGatewayId = value; }
    inline void SetAssociatedGatewayId(Aws::String&& value) { m_associatedGatewayIdHasBeenSet = true; m_associatedGatewayId = std::move(value); }
    inline void SetAssociatedGatewayId(const char* value) { m_associatedGatewayIdHasBeenSet = true; m_associatedGatewayId.assign(value); }
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociatedGatewayId(const Aws::String& value) { SetAssociatedGatewayId(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociatedGatewayId(Aws::String&& value) { SetAssociatedGatewayId(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociatedGatewayId(const char* value) { SetAssociatedGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }
    inline bool DirectConnectGatewayIdHasBeenSet() const { return m_directConnectGatewayIdHasBeenSet; }
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p> <p>If <code>MaxResults</code> is given a value larger than 100, only
     * 100 results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeDirectConnectGatewayAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway or transit gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_associatedGatewayId;
    bool m_associatedGatewayIdHasBeenSet = false;

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
