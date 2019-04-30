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

#include <aws/managedblockchain/model/Invitation.h>
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

Invitation::Invitation() : 
    m_invitationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_status(InvitationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_networkSummaryHasBeenSet(false)
{
}

Invitation::Invitation(JsonView jsonValue) : 
    m_invitationIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_expirationDateHasBeenSet(false),
    m_status(InvitationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_networkSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

Invitation& Invitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvitationId"))
  {
    m_invitationId = jsonValue.GetString("InvitationId");

    m_invitationIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InvitationStatusMapper::GetInvitationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkSummary"))
  {
    m_networkSummary = jsonValue.GetObject("NetworkSummary");

    m_networkSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue Invitation::Jsonize() const
{
  JsonValue payload;

  if(m_invitationIdHasBeenSet)
  {
   payload.WithString("InvitationId", m_invitationId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_expirationDateHasBeenSet)
  {
   payload.WithString("ExpirationDate", m_expirationDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InvitationStatusMapper::GetNameForInvitationStatus(m_status));
  }

  if(m_networkSummaryHasBeenSet)
  {
   payload.WithObject("NetworkSummary", m_networkSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
