/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dax/model/UpdateParameterGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateParameterGroupRequest::UpdateParameterGroupRequest() : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterNameValuesHasBeenSet(false)
{
}

Aws::String UpdateParameterGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_parameterNameValuesHasBeenSet)
  {
   Array<JsonValue> parameterNameValuesJsonList(m_parameterNameValues.size());
   for(unsigned parameterNameValuesIndex = 0; parameterNameValuesIndex < parameterNameValuesJsonList.GetLength(); ++parameterNameValuesIndex)
   {
     parameterNameValuesJsonList[parameterNameValuesIndex].AsObject(m_parameterNameValues[parameterNameValuesIndex].Jsonize());
   }
   payload.WithArray("ParameterNameValues", std::move(parameterNameValuesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateParameterGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.UpdateParameterGroup"));
  return headers;

}




