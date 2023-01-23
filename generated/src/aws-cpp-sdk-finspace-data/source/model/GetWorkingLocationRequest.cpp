/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetWorkingLocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorkingLocationRequest::GetWorkingLocationRequest() : 
    m_locationType(LocationType::NOT_SET),
    m_locationTypeHasBeenSet(false)
{
}

Aws::String GetWorkingLocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationTypeHasBeenSet)
  {
   payload.WithString("locationType", LocationTypeMapper::GetNameForLocationType(m_locationType));
  }

  return payload.View().WriteReadable();
}




