/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/CreateComponentVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateComponentVersionRequest::CreateComponentVersionRequest() : 
    m_inlineRecipeHasBeenSet(false),
    m_lambdaFunctionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateComponentVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inlineRecipeHasBeenSet)
  {
   payload.WithString("inlineRecipe", HashingUtils::Base64Encode(m_inlineRecipe));
  }

  if(m_lambdaFunctionHasBeenSet)
  {
   payload.WithObject("lambdaFunction", m_lambdaFunction.Jsonize());

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




