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
  class DeleteDirectConnectGatewayAssociationProposalRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationProposalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDirectConnectGatewayAssociationProposal"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline DeleteDirectConnectGatewayAssociationProposalRequest& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}

    /**
     * <p>The ID of the proposal.</p>
     */
    inline DeleteDirectConnectGatewayAssociationProposalRequest& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the proposal.</p>
     */
    inline DeleteDirectConnectGatewayAssociationProposalRequest& WithProposalId(const char* value) { SetProposalId(value); return *this;}

  private:

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
