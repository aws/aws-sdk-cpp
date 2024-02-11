/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateGroupProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGroupProfileRequest::UpdateGroupProfileRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_groupIdentifierHasBeenSet(false),
    m_status(GroupProfileStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String UpdateGroupProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GroupProfileStatusMapper::GetNameForGroupProfileStatus(m_status));
  }

  return payload.View().WriteReadable();
}




