/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/DeleteLFTagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLFTagRequest::DeleteLFTagRequest() : 
    m_catalogIdHasBeenSet(false),
    m_tagKeyHasBeenSet(false)
{
}

Aws::String DeleteLFTagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_tagKeyHasBeenSet)
  {
   payload.WithString("TagKey", m_tagKey);

  }

  return payload.View().WriteReadable();
}




