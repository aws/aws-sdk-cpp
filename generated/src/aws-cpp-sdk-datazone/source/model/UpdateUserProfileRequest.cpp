/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateUserProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserProfileRequest::UpdateUserProfileRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_status(UserProfileStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(UserProfileType::NOT_SET),
    m_typeHasBeenSet(false),
    m_userIdentifierHasBeenSet(false)
{
}

Aws::String UpdateUserProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", UserProfileStatusMapper::GetNameForUserProfileStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UserProfileTypeMapper::GetNameForUserProfileType(m_type));
  }

  return payload.View().WriteReadable();
}




