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
  class AWS_DIRECTCONNECT_API DescribeDirectConnectGatewayAssociationProposalsRequest : public DirectConnectRequest
  {
  public:
    DescribeDirectConnectGatewayAssociationProposalsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDirectConnectGatewayAssociationProposals"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The ID of the proposal.</p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }

    /**
     * <p>The ID of the proposal.</p>
     */
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }

    /**
     * <p>The ID of the proposal.</p>
     */
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }

    /**
     * <p>The ID of the proposal.</p>
     */
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }

    /**
     * <p>The ID of the proposal.</p>
     */
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }

    /**
     * <p>The ID of the proposal.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}

    /**
     * <p>The ID of the proposal.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the proposal.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithProposalId(const char* value) { SetProposalId(value); return *this;}


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
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithAssociatedGatewayId(const Aws::String& value) { SetAssociatedGatewayId(value); return *this;}

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithAssociatedGatewayId(Aws::String&& value) { SetAssociatedGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated gateway.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithAssociatedGatewayId(const char* value) { SetAssociatedGatewayId(value); return *this;}


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
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline DescribeDirectConnectGatewayAssociationProposalsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet;

    Aws::String m_associatedGatewayId;
    bool m_associatedGatewayIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
