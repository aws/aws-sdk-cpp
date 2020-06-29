/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/CreateLedgerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLedgerRequest::CreateLedgerRequest() : 
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_permissionsMode(PermissionsMode::NOT_SET),
    m_permissionsModeHasBeenSet(false),
    m_deletionProtection(false),
    m_deletionProtectionHasBeenSet(false)
{
}

Aws::String CreateLedgerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_permissionsModeHasBeenSet)
  {
   payload.WithString("PermissionsMode", PermissionsModeMapper::GetNameForPermissionsMode(m_permissionsMode));
  }

  if(m_deletionProtectionHasBeenSet)
  {
   payload.WithBool("DeletionProtection", m_deletionProtection);

  }

  return payload.View().WriteReadable();
}




