/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/DeleteViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteViewRequest::DeleteViewRequest() : 
    m_viewArnHasBeenSet(false)
{
}

Aws::String DeleteViewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_viewArnHasBeenSet)
  {
   payload.WithString("ViewArn", m_viewArn);

  }

  return payload.View().WriteReadable();
}




