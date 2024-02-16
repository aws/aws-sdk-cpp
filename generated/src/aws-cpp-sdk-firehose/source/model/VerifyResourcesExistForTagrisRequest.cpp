/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/VerifyResourcesExistForTagrisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyResourcesExistForTagrisRequest::VerifyResourcesExistForTagrisRequest() : 
    m_tagrisSweepListHasBeenSet(false)
{
}

Aws::String VerifyResourcesExistForTagrisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagrisSweepListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagrisSweepListJsonList(m_tagrisSweepList.size());
   for(unsigned tagrisSweepListIndex = 0; tagrisSweepListIndex < tagrisSweepListJsonList.GetLength(); ++tagrisSweepListIndex)
   {
     tagrisSweepListJsonList[tagrisSweepListIndex].AsObject(m_tagrisSweepList[tagrisSweepListIndex].Jsonize());
   }
   payload.WithArray("TagrisSweepList", std::move(tagrisSweepListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection VerifyResourcesExistForTagrisRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.VerifyResourcesExistForTagris"));
  return headers;

}




