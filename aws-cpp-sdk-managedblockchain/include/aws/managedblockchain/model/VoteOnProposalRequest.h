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
#include <aws/managedblockchain/model/VoteValue.h>
#include <utility>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class AWS_MANAGEDBLOCKCHAIN_API VoteOnProposalRequest : public ManagedBlockchainRequest
  {
  public:
    VoteOnProposalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VoteOnProposal"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The unique identifier of the network. </p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p> The unique identifier of the network. </p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p> The unique identifier of the network. </p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p> The unique identifier of the network. </p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p> The unique identifier of the network. </p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p> The unique identifier of the network. </p>
     */
    inline VoteOnProposalRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p> The unique identifier of the network. </p>
     */
    inline VoteOnProposalRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the network. </p>
     */
    inline VoteOnProposalRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }

    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }

    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }

    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }

    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }

    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline VoteOnProposalRequest& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}

    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline VoteOnProposalRequest& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline VoteOnProposalRequest& WithProposalId(const char* value) { SetProposalId(value); return *this;}


    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline const Aws::String& GetVoterMemberId() const{ return m_voterMemberId; }

    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline bool VoterMemberIdHasBeenSet() const { return m_voterMemberIdHasBeenSet; }

    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline void SetVoterMemberId(const Aws::String& value) { m_voterMemberIdHasBeenSet = true; m_voterMemberId = value; }

    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline void SetVoterMemberId(Aws::String&& value) { m_voterMemberIdHasBeenSet = true; m_voterMemberId = std::move(value); }

    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline void SetVoterMemberId(const char* value) { m_voterMemberIdHasBeenSet = true; m_voterMemberId.assign(value); }

    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline VoteOnProposalRequest& WithVoterMemberId(const Aws::String& value) { SetVoterMemberId(value); return *this;}

    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline VoteOnProposalRequest& WithVoterMemberId(Aws::String&& value) { SetVoterMemberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member casting the vote. </p>
     */
    inline VoteOnProposalRequest& WithVoterMemberId(const char* value) { SetVoterMemberId(value); return *this;}


    /**
     * <p> The value of the vote. </p>
     */
    inline const VoteValue& GetVote() const{ return m_vote; }

    /**
     * <p> The value of the vote. </p>
     */
    inline bool VoteHasBeenSet() const { return m_voteHasBeenSet; }

    /**
     * <p> The value of the vote. </p>
     */
    inline void SetVote(const VoteValue& value) { m_voteHasBeenSet = true; m_vote = value; }

    /**
     * <p> The value of the vote. </p>
     */
    inline void SetVote(VoteValue&& value) { m_voteHasBeenSet = true; m_vote = std::move(value); }

    /**
     * <p> The value of the vote. </p>
     */
    inline VoteOnProposalRequest& WithVote(const VoteValue& value) { SetVote(value); return *this;}

    /**
     * <p> The value of the vote. </p>
     */
    inline VoteOnProposalRequest& WithVote(VoteValue&& value) { SetVote(std::move(value)); return *this;}

  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet;

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet;

    Aws::String m_voterMemberId;
    bool m_voterMemberIdHasBeenSet;

    VoteValue m_vote;
    bool m_voteHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
