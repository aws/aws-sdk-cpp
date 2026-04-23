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

#include <aws/elasticfilesystem/model/PutLifecycleConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutLifecycleConfigurationRequest::PutLifecycleConfigurationRequest() : 
    m_fileSystemIdHasBeenSet(false),
    m_lifecyclePoliciesHasBeenSet(false)
{
}

Aws::String PutLifecycleConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lifecyclePoliciesHasBeenSet)
  {
   Array<JsonValue> lifecyclePoliciesJsonList(m_lifecyclePolicies.size());
   for(unsigned lifecyclePoliciesIndex = 0; lifecyclePoliciesIndex < lifecyclePoliciesJsonList.GetLength(); ++lifecyclePoliciesIndex)
   {
     lifecyclePoliciesJsonList[lifecyclePoliciesIndex].AsObject(m_lifecyclePolicies[lifecyclePoliciesIndex].Jsonize());
   }
   payload.WithArray("LifecyclePolicies", std::move(lifecyclePoliciesJsonList));

  }

  return payload.View().WriteReadable();
}




