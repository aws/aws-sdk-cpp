/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeleteProjectMembershipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProjectMembershipRequest::DeleteProjectMembershipRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_memberHasBeenSet(false),
    m_projectIdentifierHasBeenSet(false)
{
}

Aws::String DeleteProjectMembershipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberHasBeenSet)
  {
   payload.WithObject("member", m_member.Jsonize());

  }

  return payload.View().WriteReadable();
}




