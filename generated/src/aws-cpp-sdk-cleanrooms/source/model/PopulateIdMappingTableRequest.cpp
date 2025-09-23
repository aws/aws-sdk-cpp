/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PopulateIdMappingTableRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PopulateIdMappingTableRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("jobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  return payload.View().WriteReadable();
}




