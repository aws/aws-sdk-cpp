/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/UpdateTrustAnchorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RolesAnywhere::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTrustAnchorRequest::UpdateTrustAnchorRequest() : 
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_trustAnchorIdHasBeenSet(false)
{
}

Aws::String UpdateTrustAnchorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  return payload.View().WriteReadable();
}




