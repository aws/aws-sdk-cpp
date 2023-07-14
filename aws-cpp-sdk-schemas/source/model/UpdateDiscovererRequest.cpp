﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/UpdateDiscovererRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDiscovererRequest::UpdateDiscovererRequest() : 
    m_descriptionHasBeenSet(false),
    m_discovererIdHasBeenSet(false),
    m_crossAccount(false),
    m_crossAccountHasBeenSet(false)
{
}

Aws::String UpdateDiscovererRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_crossAccountHasBeenSet)
  {
   payload.WithBool("CrossAccount", m_crossAccount);

  }

  return payload.View().WriteReadable();
}




