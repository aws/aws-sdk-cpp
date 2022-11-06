/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ResetParameterGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResetParameterGroupRequest::ResetParameterGroupRequest() : 
    m_parameterGroupNameHasBeenSet(false),
    m_allParameters(false),
    m_allParametersHasBeenSet(false),
    m_parameterNamesHasBeenSet(false)
{
}

Aws::String ResetParameterGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_allParametersHasBeenSet)
  {
   payload.WithBool("AllParameters", m_allParameters);

  }

  if(m_parameterNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterNamesJsonList(m_parameterNames.size());
   for(unsigned parameterNamesIndex = 0; parameterNamesIndex < parameterNamesJsonList.GetLength(); ++parameterNamesIndex)
   {
     parameterNamesJsonList[parameterNamesIndex].AsString(m_parameterNames[parameterNamesIndex]);
   }
   payload.WithArray("ParameterNames", std::move(parameterNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResetParameterGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonMemoryDB.ResetParameterGroup"));
  return headers;

}




