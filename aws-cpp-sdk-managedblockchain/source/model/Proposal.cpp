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

#include <aws/managedblockchain/model/Proposal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

Proposal::Proposal() : 
    m_proposalIdHasBeenSet(false),
    m_networkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_proposedByMemberIdHasBeenSet(false),
    m_proposedByMemberNameHasBeenSet(false),
    m_status(ProposalStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_yesVoteCount(0),
    m_yesVoteCountHasBeenSet(false),
    m_noVoteCount(0),
    m_noVoteCountHasBeenSet(false),
    m_outstandingVoteCount(0),
    m_outstandingVoteCountHasBeenSet(false)
{
}

Proposal::Proposal(JsonView jsonValue) : 
    m_proposalIdHasBeenSet(false),
    m_networkIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_proposedByMemberIdHasBeenSet(false),
    m_proposedByMemberNameHasBeenSet(false),
    m_status(ProposalStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_yesVoteCount(0),
    m_yesVoteCountHasBeenSet(false),
    m_noVoteCount(0),
    m_noVoteCountHasBeenSet(false),
    m_outstandingVoteCount(0),
    m_outstandingVoteCountHasBeenSet(false)
{
  *this = jsonValue;
}

Proposal& Proposal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProposalId"))
  {
    m_proposalId = jsonValue.GetString("ProposalId");

    m_proposalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkId"))
  {
    m_networkId = jsonValue.GetString("NetworkId");

    m_networkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    m_actions = jsonValue.GetObject("Actions");

    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProposedByMemberId"))
  {
    m_proposedByMemberId = jsonValue.GetString("ProposedByMemberId");

    m_proposedByMemberIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProposedByMemberName"))
  {
    m_proposedByMemberName = jsonValue.GetString("ProposedByMemberName");

    m_proposedByMemberNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProposalStatusMapper::GetProposalStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationDate"))
  {
    m_expirationDate = jsonValue.GetString("ExpirationDate");

    m_expirationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("YesVoteCount"))
  {
    m_yesVoteCount = jsonValue.GetInteger("YesVoteCount");

    m_yesVoteCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NoVoteCount"))
  {
    m_noVoteCount = jsonValue.GetInteger("NoVoteCount");

    m_noVoteCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutstandingVoteCount"))
  {
    m_outstandingVoteCount = jsonValue.GetInteger("OutstandingVoteCount");

    m_outstandingVoteCountHasBeenSet = true;
  }

  return *this;
}

JsonValue Proposal::Jsonize() const
{
  JsonValue payload;

  if(m_proposalIdHasBeenSet)
  {
   payload.WithString("ProposalId", m_proposalId);

  }

  if(m_networkIdHasBeenSet)
  {
   payload.WithString("NetworkId", m_networkId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_actionsHasBeenSet)
  {
   payload.WithObject("Actions", m_actions.Jsonize());

  }

  if(m_proposedByMemberIdHasBeenSet)
  {
   payload.WithString("ProposedByMemberId", m_proposedByMemberId);

  }

  if(m_proposedByMemberNameHasBeenSet)
  {
   payload.WithString("ProposedByMemberName", m_proposedByMemberName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProposalStatusMapper::GetNameForProposalStatus(m_status));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("ExpirationDate", m_expirationDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_yesVoteCountHasBeenSet)
  {
   payload.WithInteger("YesVoteCount", m_yesVoteCount);

  }

  if(m_noVoteCountHasBeenSet)
  {
   payload.WithInteger("NoVoteCount", m_noVoteCount);

  }

  if(m_outstandingVoteCountHasBeenSet)
  {
   payload.WithInteger("OutstandingVoteCount", m_outstandingVoteCount);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
