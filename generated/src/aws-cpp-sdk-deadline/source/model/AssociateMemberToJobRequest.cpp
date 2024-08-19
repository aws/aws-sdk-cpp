/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AssociateMemberToJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateMemberToJobRequest::AssociateMemberToJobRequest() : 
    m_farmIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_identityStoreIdHasBeenSet(false),
    m_membershipLevel(MembershipLevel::NOT_SET),
    m_membershipLevelHasBeenSet(false)
{
}

Aws::String AssociateMemberToJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("principalType", PrincipalTypeMapper::GetNameForPrincipalType(m_principalType));
  }

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("identityStoreId", m_identityStoreId);

  }

  if(m_membershipLevelHasBeenSet)
  {
   payload.WithString("membershipLevel", MembershipLevelMapper::GetNameForMembershipLevel(m_membershipLevel));
  }

  return payload.View().WriteReadable();
}




