/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/StartProtectedQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartProtectedQueryRequest::StartProtectedQueryRequest() : 
    m_type(ProtectedQueryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_membershipIdentifierHasBeenSet(false),
    m_sqlParametersHasBeenSet(false),
    m_resultConfigurationHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




