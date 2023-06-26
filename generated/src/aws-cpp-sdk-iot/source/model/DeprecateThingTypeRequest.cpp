/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeprecateThingTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeprecateThingTypeRequest::DeprecateThingTypeRequest() : 
    m_thingTypeNameHasBeenSet(false),
    m_undoDeprecate(false),
    m_undoDeprecateHasBeenSet(false)
{
}

Aws::String DeprecateThingTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_undoDeprecateHasBeenSet)
  {
   payload.WithBool("undoDeprecate", m_undoDeprecate);

  }

  return payload.View().WriteReadable();
}




