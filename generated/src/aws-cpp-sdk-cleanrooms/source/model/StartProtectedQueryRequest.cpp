﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/StartProtectedQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartProtectedQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ProtectedQueryTypeMapper::GetNameForProtectedQueryType(m_type));
  }

  if(m_sqlParametersHasBeenSet)
  {
   payload.WithObject("sqlParameters", m_sqlParameters.Jsonize());

  }

  if(m_resultConfigurationHasBeenSet)
  {
   payload.WithObject("resultConfiguration", m_resultConfiguration.Jsonize());

  }

  if(m_computeConfigurationHasBeenSet)
  {
   payload.WithObject("computeConfiguration", m_computeConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




