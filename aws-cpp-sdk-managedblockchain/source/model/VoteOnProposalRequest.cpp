/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/VoteOnProposalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VoteOnProposalRequest::VoteOnProposalRequest() : 
    m_networkIdHasBeenSet(false),
    m_proposalIdHasBeenSet(false),
    m_voterMemberIdHasBeenSet(false),
    m_vote(VoteValue::NOT_SET),
    m_voteHasBeenSet(false)
{
}

Aws::String VoteOnProposalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_voterMemberIdHasBeenSet)
  {
   payload.WithString("VoterMemberId", m_voterMemberId);

  }

  if(m_voteHasBeenSet)
  {
   payload.WithString("Vote", VoteValueMapper::GetNameForVoteValue(m_vote));
  }

  return payload.View().WriteReadable();
}




