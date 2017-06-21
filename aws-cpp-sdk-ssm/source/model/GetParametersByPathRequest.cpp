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

#include <aws/ssm/model/GetParametersByPathRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetParametersByPathRequest::GetParametersByPathRequest() : 
    m_pathHasBeenSet(false),
    m_recursive(false),
    m_recursiveHasBeenSet(false),
    m_parameterFiltersHasBeenSet(false),
    m_withDecryption(false),
    m_withDecryptionHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetParametersByPathRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_recursiveHasBeenSet)
  {
   payload.WithBool("Recursive", m_recursive);

  }

  if(m_parameterFiltersHasBeenSet)
  {
   Array<JsonValue> parameterFiltersJsonList(m_parameterFilters.size());
   for(unsigned parameterFiltersIndex = 0; parameterFiltersIndex < parameterFiltersJsonList.GetLength(); ++parameterFiltersIndex)
   {
     parameterFiltersJsonList[parameterFiltersIndex].AsObject(m_parameterFilters[parameterFiltersIndex].Jsonize());
   }
   payload.WithArray("ParameterFilters", std::move(parameterFiltersJsonList));

  }

  if(m_withDecryptionHasBeenSet)
  {
   payload.WithBool("WithDecryption", m_withDecryption);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetParametersByPathRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.GetParametersByPath"));
  return headers;

}




