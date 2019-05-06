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
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/ProposalActions.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class AWS_MANAGEDBLOCKCHAIN_API CreateProposalRequest : public ManagedBlockchainRequest
  {
  public:
    CreateProposalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProposal"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline CreateProposalRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline CreateProposalRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time. This identifier is required only if you make a service request directly
     * using an HTTP client. It is generated automatically if you use an AWS SDK or the
     * AWS CLI.</p>
     */
    inline CreateProposalRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline CreateProposalRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline CreateProposalRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the network for which the proposal is made.</p>
     */
    inline CreateProposalRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single AWS account.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single AWS account.</p>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single AWS account.</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single AWS account.</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single AWS account.</p>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single AWS account.</p>
     */
    inline CreateProposalRequest& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single AWS account.</p>
     */
    inline CreateProposalRequest& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member that is creating the proposal. This
     * identifier is especially useful for identifying the member making the proposal
     * when multiple members exist in a single AWS account.</p>
     */
    inline CreateProposalRequest& WithMemberId(const char* value) { SetMemberId(value); return *this;}


    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline const ProposalActions& GetActions() const{ return m_actions; }

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline void SetActions(const ProposalActions& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline void SetActions(ProposalActions&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline CreateProposalRequest& WithActions(const ProposalActions& value) { SetActions(value); return *this;}

    /**
     * <p>The type of actions proposed, such as inviting a member or removing a member.
     * The types of <code>Actions</code> in a proposal are mutually exclusive. For
     * example, a proposal with <code>Invitations</code> actions cannot also contain
     * <code>Removals</code> actions.</p>
     */
    inline CreateProposalRequest& WithActions(ProposalActions&& value) { SetActions(std::move(value)); return *this;}


    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline CreateProposalRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline CreateProposalRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the proposal that is visible to voting members, for
     * example, "Proposal to add Example Corp. as member."</p>
     */
    inline CreateProposalRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet;

    ProposalActions m_actions;
    bool m_actionsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
