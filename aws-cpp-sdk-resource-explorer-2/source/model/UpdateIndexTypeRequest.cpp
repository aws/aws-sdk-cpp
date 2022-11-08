/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/UpdateIndexTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIndexTypeRequest::UpdateIndexTypeRequest() : 
    m_arnHasBeenSet(false),
    m_type(IndexType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String UpdateIndexTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", IndexTypeMapper::GetNameForIndexType(m_type));
  }

  return payload.View().WriteReadable();
}




