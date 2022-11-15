/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/GetViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceExplorer2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetViewRequest::GetViewRequest() : 
    m_viewArnHasBeenSet(false)
{
}

Aws::String GetViewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_viewArnHasBeenSet)
  {
   payload.WithString("ViewArn", m_viewArn);

  }

  return payload.View().WriteReadable();
}




