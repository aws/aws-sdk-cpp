/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ResolveComponentCandidatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResolveComponentCandidatesRequest::ResolveComponentCandidatesRequest() : 
    m_platformHasBeenSet(false),
    m_componentCandidatesHasBeenSet(false)
{
}

Aws::String ResolveComponentCandidatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_platformHasBeenSet)
  {
   payload.WithObject("platform", m_platform.Jsonize());

  }

  if(m_componentCandidatesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentCandidatesJsonList(m_componentCandidates.size());
   for(unsigned componentCandidatesIndex = 0; componentCandidatesIndex < componentCandidatesJsonList.GetLength(); ++componentCandidatesIndex)
   {
     componentCandidatesJsonList[componentCandidatesIndex].AsObject(m_componentCandidates[componentCandidatesIndex].Jsonize());
   }
   payload.WithArray("componentCandidates", std::move(componentCandidatesJsonList));

  }

  return payload.View().WriteReadable();
}




