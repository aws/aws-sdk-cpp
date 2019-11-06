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

#include <aws/signer/model/PutSigningProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::signer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutSigningProfileRequest::PutSigningProfileRequest() : 
    m_profileNameHasBeenSet(false),
    m_signingMaterialHasBeenSet(false),
    m_platformIdHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_signingParametersHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutSigningProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_signingMaterialHasBeenSet)
  {
   payload.WithObject("signingMaterial", m_signingMaterial.Jsonize());

  }

  if(m_platformIdHasBeenSet)
  {
   payload.WithString("platformId", m_platformId);

  }

  if(m_overridesHasBeenSet)
  {
   payload.WithObject("overrides", m_overrides.Jsonize());

  }

  if(m_signingParametersHasBeenSet)
  {
   JsonValue signingParametersJsonMap;
   for(auto& signingParametersItem : m_signingParameters)
   {
     signingParametersJsonMap.WithString(signingParametersItem.first, signingParametersItem.second);
   }
   payload.WithObject("signingParameters", std::move(signingParametersJsonMap));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




