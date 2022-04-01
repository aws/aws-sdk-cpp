﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ProposalSummary.h>
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

ProposalSummary::ProposalSummary() : 
    m_proposalIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_proposedByMemberIdHasBeenSet(false),
    m_proposedByMemberNameHasBeenSet(false),
    m_status(ProposalStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

ProposalSummary::ProposalSummary(JsonView jsonValue) : 
    m_proposalIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_proposedByMemberIdHasBeenSet(false),
    m_proposedByMemberNameHasBeenSet(false),
    m_status(ProposalStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

ProposalSummary& ProposalSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProposalId"))
  {
    m_proposalId = jsonValue.GetString("ProposalId");

    m_proposalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue ProposalSummary::Jsonize() const
{
  JsonValue payload;

  if(m_proposalIdHasBeenSet)
  {
   payload.WithString("ProposalId", m_proposalId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
