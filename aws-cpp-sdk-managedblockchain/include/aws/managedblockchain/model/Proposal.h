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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/ProposalActions.h>
#include <aws/managedblockchain/model/ProposalStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Properties of a proposal on a Managed Blockchain network.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/Proposal">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API Proposal
  {
  public:
    Proposal();
    Proposal(Aws::Utils::Json::JsonView jsonValue);
    Proposal& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline Proposal& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline Proposal& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline Proposal& WithProposalId(const char* value) { SetProposalId(value); return *this;}


    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }

    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }

    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }

    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }

    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline Proposal& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline Proposal& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network for which the proposal is made.</p>
     */
    inline Proposal& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The description of the proposal.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the proposal.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the proposal.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the proposal.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the proposal.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the proposal.</p>
     */
    inline Proposal& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the proposal.</p>
     */
    inline Proposal& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the proposal.</p>
     */
    inline Proposal& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The actions to perform on the network if the proposal is
     * <code>APPROVED</code>.</p>
     */
    inline const ProposalActions& GetActions() const{ return m_actions; }

    /**
     * <p>The actions to perform on the network if the proposal is
     * <code>APPROVED</code>.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions to perform on the network if the proposal is
     * <code>APPROVED</code>.</p>
     */
    inline void SetActions(const ProposalActions& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions to perform on the network if the proposal is
     * <code>APPROVED</code>.</p>
     */
    inline void SetActions(ProposalActions&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions to perform on the network if the proposal is
     * <code>APPROVED</code>.</p>
     */
    inline Proposal& WithActions(const ProposalActions& value) { SetActions(value); return *this;}

    /**
     * <p>The actions to perform on the network if the proposal is
     * <code>APPROVED</code>.</p>
     */
    inline Proposal& WithActions(ProposalActions&& value) { SetActions(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline const Aws::String& GetProposedByMemberId() const{ return m_proposedByMemberId; }

    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline bool ProposedByMemberIdHasBeenSet() const { return m_proposedByMemberIdHasBeenSet; }

    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline void SetProposedByMemberId(const Aws::String& value) { m_proposedByMemberIdHasBeenSet = true; m_proposedByMemberId = value; }

    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline void SetProposedByMemberId(Aws::String&& value) { m_proposedByMemberIdHasBeenSet = true; m_proposedByMemberId = std::move(value); }

    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline void SetProposedByMemberId(const char* value) { m_proposedByMemberIdHasBeenSet = true; m_proposedByMemberId.assign(value); }

    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline Proposal& WithProposedByMemberId(const Aws::String& value) { SetProposedByMemberId(value); return *this;}

    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline Proposal& WithProposedByMemberId(Aws::String&& value) { SetProposedByMemberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the member that created the proposal.</p>
     */
    inline Proposal& WithProposedByMemberId(const char* value) { SetProposedByMemberId(value); return *this;}


    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline const Aws::String& GetProposedByMemberName() const{ return m_proposedByMemberName; }

    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline bool ProposedByMemberNameHasBeenSet() const { return m_proposedByMemberNameHasBeenSet; }

    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline void SetProposedByMemberName(const Aws::String& value) { m_proposedByMemberNameHasBeenSet = true; m_proposedByMemberName = value; }

    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline void SetProposedByMemberName(Aws::String&& value) { m_proposedByMemberNameHasBeenSet = true; m_proposedByMemberName = std::move(value); }

    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline void SetProposedByMemberName(const char* value) { m_proposedByMemberNameHasBeenSet = true; m_proposedByMemberName.assign(value); }

    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline Proposal& WithProposedByMemberName(const Aws::String& value) { SetProposedByMemberName(value); return *this;}

    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline Proposal& WithProposedByMemberName(Aws::String&& value) { SetProposedByMemberName(std::move(value)); return *this;}

    /**
     * <p>The name of the member that created the proposal.</p>
     */
    inline Proposal& WithProposedByMemberName(const char* value) { SetProposedByMemberName(value); return *this;}


    /**
     * <p>The status of the proposal. Values are as follows:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> - The proposal is active and open for member
     * voting.</p> </li> <li> <p> <code>APPROVED</code> - The proposal was approved
     * with sufficient <code>YES</code> votes among members according to the
     * <code>VotingPolicy</code> specified for the <code>Network</code>. The specified
     * proposal actions are carried out.</p> </li> <li> <p> <code>REJECTED</code> - The
     * proposal was rejected with insufficient <code>YES</code> votes among members
     * according to the <code>VotingPolicy</code> specified for the
     * <code>Network</code>. The specified <code>ProposalActions</code> are not carried
     * out.</p> </li> <li> <p> <code>EXPIRED</code> - Members did not cast the number
     * of votes required to determine the proposal outcome before the proposal expired.
     * The specified <code>ProposalActions</code> are not carried out.</p> </li> <li>
     * <p> <code>ACTION_FAILED</code> - One or more of the specified
     * <code>ProposalActions</code> in a proposal that was approved could not be
     * completed because of an error.</p> </li> </ul>
     */
    inline const ProposalStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the proposal. Values are as follows:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> - The proposal is active and open for member
     * voting.</p> </li> <li> <p> <code>APPROVED</code> - The proposal was approved
     * with sufficient <code>YES</code> votes among members according to the
     * <code>VotingPolicy</code> specified for the <code>Network</code>. The specified
     * proposal actions are carried out.</p> </li> <li> <p> <code>REJECTED</code> - The
     * proposal was rejected with insufficient <code>YES</code> votes among members
     * according to the <code>VotingPolicy</code> specified for the
     * <code>Network</code>. The specified <code>ProposalActions</code> are not carried
     * out.</p> </li> <li> <p> <code>EXPIRED</code> - Members did not cast the number
     * of votes required to determine the proposal outcome before the proposal expired.
     * The specified <code>ProposalActions</code> are not carried out.</p> </li> <li>
     * <p> <code>ACTION_FAILED</code> - One or more of the specified
     * <code>ProposalActions</code> in a proposal that was approved could not be
     * completed because of an error.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the proposal. Values are as follows:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> - The proposal is active and open for member
     * voting.</p> </li> <li> <p> <code>APPROVED</code> - The proposal was approved
     * with sufficient <code>YES</code> votes among members according to the
     * <code>VotingPolicy</code> specified for the <code>Network</code>. The specified
     * proposal actions are carried out.</p> </li> <li> <p> <code>REJECTED</code> - The
     * proposal was rejected with insufficient <code>YES</code> votes among members
     * according to the <code>VotingPolicy</code> specified for the
     * <code>Network</code>. The specified <code>ProposalActions</code> are not carried
     * out.</p> </li> <li> <p> <code>EXPIRED</code> - Members did not cast the number
     * of votes required to determine the proposal outcome before the proposal expired.
     * The specified <code>ProposalActions</code> are not carried out.</p> </li> <li>
     * <p> <code>ACTION_FAILED</code> - One or more of the specified
     * <code>ProposalActions</code> in a proposal that was approved could not be
     * completed because of an error.</p> </li> </ul>
     */
    inline void SetStatus(const ProposalStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the proposal. Values are as follows:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> - The proposal is active and open for member
     * voting.</p> </li> <li> <p> <code>APPROVED</code> - The proposal was approved
     * with sufficient <code>YES</code> votes among members according to the
     * <code>VotingPolicy</code> specified for the <code>Network</code>. The specified
     * proposal actions are carried out.</p> </li> <li> <p> <code>REJECTED</code> - The
     * proposal was rejected with insufficient <code>YES</code> votes among members
     * according to the <code>VotingPolicy</code> specified for the
     * <code>Network</code>. The specified <code>ProposalActions</code> are not carried
     * out.</p> </li> <li> <p> <code>EXPIRED</code> - Members did not cast the number
     * of votes required to determine the proposal outcome before the proposal expired.
     * The specified <code>ProposalActions</code> are not carried out.</p> </li> <li>
     * <p> <code>ACTION_FAILED</code> - One or more of the specified
     * <code>ProposalActions</code> in a proposal that was approved could not be
     * completed because of an error.</p> </li> </ul>
     */
    inline void SetStatus(ProposalStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the proposal. Values are as follows:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> - The proposal is active and open for member
     * voting.</p> </li> <li> <p> <code>APPROVED</code> - The proposal was approved
     * with sufficient <code>YES</code> votes among members according to the
     * <code>VotingPolicy</code> specified for the <code>Network</code>. The specified
     * proposal actions are carried out.</p> </li> <li> <p> <code>REJECTED</code> - The
     * proposal was rejected with insufficient <code>YES</code> votes among members
     * according to the <code>VotingPolicy</code> specified for the
     * <code>Network</code>. The specified <code>ProposalActions</code> are not carried
     * out.</p> </li> <li> <p> <code>EXPIRED</code> - Members did not cast the number
     * of votes required to determine the proposal outcome before the proposal expired.
     * The specified <code>ProposalActions</code> are not carried out.</p> </li> <li>
     * <p> <code>ACTION_FAILED</code> - One or more of the specified
     * <code>ProposalActions</code> in a proposal that was approved could not be
     * completed because of an error.</p> </li> </ul>
     */
    inline Proposal& WithStatus(const ProposalStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the proposal. Values are as follows:</p> <ul> <li> <p>
     * <code>IN_PROGRESS</code> - The proposal is active and open for member
     * voting.</p> </li> <li> <p> <code>APPROVED</code> - The proposal was approved
     * with sufficient <code>YES</code> votes among members according to the
     * <code>VotingPolicy</code> specified for the <code>Network</code>. The specified
     * proposal actions are carried out.</p> </li> <li> <p> <code>REJECTED</code> - The
     * proposal was rejected with insufficient <code>YES</code> votes among members
     * according to the <code>VotingPolicy</code> specified for the
     * <code>Network</code>. The specified <code>ProposalActions</code> are not carried
     * out.</p> </li> <li> <p> <code>EXPIRED</code> - Members did not cast the number
     * of votes required to determine the proposal outcome before the proposal expired.
     * The specified <code>ProposalActions</code> are not carried out.</p> </li> <li>
     * <p> <code>ACTION_FAILED</code> - One or more of the specified
     * <code>ProposalActions</code> in a proposal that was approved could not be
     * completed because of an error.</p> </li> </ul>
     */
    inline Proposal& WithStatus(ProposalStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The date and time that the proposal was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p> The date and time that the proposal was created. </p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p> The date and time that the proposal was created. </p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p> The date and time that the proposal was created. </p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p> The date and time that the proposal was created. </p>
     */
    inline Proposal& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p> The date and time that the proposal was created. </p>
     */
    inline Proposal& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p> The date and time that the proposal expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * if members have not cast enough votes to determine the outcome according to the
     * voting policy, the proposal is <code>EXPIRED</code> and <code>Actions</code> are
     * not carried out. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p> The date and time that the proposal expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * if members have not cast enough votes to determine the outcome according to the
     * voting policy, the proposal is <code>EXPIRED</code> and <code>Actions</code> are
     * not carried out. </p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p> The date and time that the proposal expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * if members have not cast enough votes to determine the outcome according to the
     * voting policy, the proposal is <code>EXPIRED</code> and <code>Actions</code> are
     * not carried out. </p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p> The date and time that the proposal expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * if members have not cast enough votes to determine the outcome according to the
     * voting policy, the proposal is <code>EXPIRED</code> and <code>Actions</code> are
     * not carried out. </p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p> The date and time that the proposal expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * if members have not cast enough votes to determine the outcome according to the
     * voting policy, the proposal is <code>EXPIRED</code> and <code>Actions</code> are
     * not carried out. </p>
     */
    inline Proposal& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p> The date and time that the proposal expires. This is the
     * <code>CreationDate</code> plus the <code>ProposalDurationInHours</code> that is
     * specified in the <code>ProposalThresholdPolicy</code>. After this date and time,
     * if members have not cast enough votes to determine the outcome according to the
     * voting policy, the proposal is <code>EXPIRED</code> and <code>Actions</code> are
     * not carried out. </p>
     */
    inline Proposal& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}


    /**
     * <p> The current total of <code>YES</code> votes cast on the proposal by members.
     * </p>
     */
    inline int GetYesVoteCount() const{ return m_yesVoteCount; }

    /**
     * <p> The current total of <code>YES</code> votes cast on the proposal by members.
     * </p>
     */
    inline bool YesVoteCountHasBeenSet() const { return m_yesVoteCountHasBeenSet; }

    /**
     * <p> The current total of <code>YES</code> votes cast on the proposal by members.
     * </p>
     */
    inline void SetYesVoteCount(int value) { m_yesVoteCountHasBeenSet = true; m_yesVoteCount = value; }

    /**
     * <p> The current total of <code>YES</code> votes cast on the proposal by members.
     * </p>
     */
    inline Proposal& WithYesVoteCount(int value) { SetYesVoteCount(value); return *this;}


    /**
     * <p> The current total of <code>NO</code> votes cast on the proposal by members.
     * </p>
     */
    inline int GetNoVoteCount() const{ return m_noVoteCount; }

    /**
     * <p> The current total of <code>NO</code> votes cast on the proposal by members.
     * </p>
     */
    inline bool NoVoteCountHasBeenSet() const { return m_noVoteCountHasBeenSet; }

    /**
     * <p> The current total of <code>NO</code> votes cast on the proposal by members.
     * </p>
     */
    inline void SetNoVoteCount(int value) { m_noVoteCountHasBeenSet = true; m_noVoteCount = value; }

    /**
     * <p> The current total of <code>NO</code> votes cast on the proposal by members.
     * </p>
     */
    inline Proposal& WithNoVoteCount(int value) { SetNoVoteCount(value); return *this;}


    /**
     * <p> The number of votes remaining to be cast on the proposal by members. In
     * other words, the number of members minus the sum of <code>YES</code> votes and
     * <code>NO</code> votes. </p>
     */
    inline int GetOutstandingVoteCount() const{ return m_outstandingVoteCount; }

    /**
     * <p> The number of votes remaining to be cast on the proposal by members. In
     * other words, the number of members minus the sum of <code>YES</code> votes and
     * <code>NO</code> votes. </p>
     */
    inline bool OutstandingVoteCountHasBeenSet() const { return m_outstandingVoteCountHasBeenSet; }

    /**
     * <p> The number of votes remaining to be cast on the proposal by members. In
     * other words, the number of members minus the sum of <code>YES</code> votes and
     * <code>NO</code> votes. </p>
     */
    inline void SetOutstandingVoteCount(int value) { m_outstandingVoteCountHasBeenSet = true; m_outstandingVoteCount = value; }

    /**
     * <p> The number of votes remaining to be cast on the proposal by members. In
     * other words, the number of members minus the sum of <code>YES</code> votes and
     * <code>NO</code> votes. </p>
     */
    inline Proposal& WithOutstandingVoteCount(int value) { SetOutstandingVoteCount(value); return *this;}

  private:

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet;

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ProposalActions m_actions;
    bool m_actionsHasBeenSet;

    Aws::String m_proposedByMemberId;
    bool m_proposedByMemberIdHasBeenSet;

    Aws::String m_proposedByMemberName;
    bool m_proposedByMemberNameHasBeenSet;

    ProposalStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet;

    int m_yesVoteCount;
    bool m_yesVoteCountHasBeenSet;

    int m_noVoteCount;
    bool m_noVoteCountHasBeenSet;

    int m_outstandingVoteCount;
    bool m_outstandingVoteCountHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
