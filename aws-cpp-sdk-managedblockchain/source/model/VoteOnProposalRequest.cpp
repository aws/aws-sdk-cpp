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




