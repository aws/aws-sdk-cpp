/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> lifecyclePoliciesJsonList(m_lifecyclePolicies.size());
   for(unsigned lifecyclePoliciesIndex = 0; lifecyclePoliciesIndex < lifecyclePoliciesJsonList.GetLength(); ++lifecyclePoliciesIndex)
   {
     lifecyclePoliciesJsonList[lifecyclePoliciesIndex].AsObject(m_lifecyclePolicies[lifecyclePoliciesIndex].Jsonize());
   }
   payload.WithArray("LifecyclePolicies", std::move(lifecyclePoliciesJsonList));

  }

  return payload.View().WriteReadable();
}




