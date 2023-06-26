/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetResourceLFTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourceLFTagsRequest::GetResourceLFTagsRequest() : 
    m_catalogIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_showAssignedLFTags(false),
    m_showAssignedLFTagsHasBeenSet(false)
{
}

Aws::String GetResourceLFTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("Resource", m_resource.Jsonize());

  }

  if(m_showAssignedLFTagsHasBeenSet)
  {
   payload.WithBool("ShowAssignedLFTags", m_showAssignedLFTags);

  }

  return payload.View().WriteReadable();
}




