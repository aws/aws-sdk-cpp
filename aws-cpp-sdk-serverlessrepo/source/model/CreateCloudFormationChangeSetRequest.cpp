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

#include <aws/serverlessrepo/model/CreateCloudFormationChangeSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCloudFormationChangeSetRequest::CreateCloudFormationChangeSetRequest() : 
    m_applicationIdHasBeenSet(false),
    m_parameterOverridesHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_stackNameHasBeenSet(false)
{
}

Aws::String CreateCloudFormationChangeSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parameterOverridesHasBeenSet)
  {
   Array<JsonValue> parameterOverridesJsonList(m_parameterOverrides.size());
   for(unsigned parameterOverridesIndex = 0; parameterOverridesIndex < parameterOverridesJsonList.GetLength(); ++parameterOverridesIndex)
   {
     parameterOverridesJsonList[parameterOverridesIndex].AsObject(m_parameterOverrides[parameterOverridesIndex].Jsonize());
   }
   payload.WithArray("parameterOverrides", std::move(parameterOverridesJsonList));

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("stackName", m_stackName);

  }

  return payload.WriteReadable();
}




