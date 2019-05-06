/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationsRequest : public DirectConnectRequest
  {
  public:
    DescribeDirectConnectGatewayAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDirectConnectGatewayAssociations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway association.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline const Aws::String& GetAssociatedGatewayId() const{ return m_associatedGatewayId; }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline bool AssociatedGatewayIdHasBeenSet() const { return m_associatedGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline void SetAssociatedGatewayId(const Aws::String& value) { m_associatedGatewayIdHasBeenSet = true; m_associatedGatewayId = value; }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline void SetAssociatedGatewayId(Aws::String&& value) { m_associatedGatewayIdHasBeenSet = true; m_associatedGatewayId = std::move(value); }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline void SetAssociatedGatewayId(const char* value) { m_associatedGatewayIdHasBeenSet = true; m_associatedGatewayId.assign(value); }

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociatedGatewayId(const Aws::String& value) { SetAssociatedGatewayId(value); return *this;}

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociatedGatewayId(Aws::String&& value) { SetAssociatedGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithAssociatedGatewayId(const char* value) { SetAssociatedGatewayId(value); return *this;}


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
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


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
    inline DescribeDirectConnectGatewayAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token provided in the previous call to retrieve the next page.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline bool VirtualGatewayIdHasBeenSet() const { return m_virtualGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationsRequest& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_associatedGatewayId;
    bool m_associatedGatewayIdHasBeenSet;

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
