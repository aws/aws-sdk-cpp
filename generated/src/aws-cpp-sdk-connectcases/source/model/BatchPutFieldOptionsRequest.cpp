/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchPutFieldOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchPutFieldOptionsRequest::BatchPutFieldOptionsRequest() : 
    m_domainIdHasBeenSet(false),
    m_fieldIdHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

Aws::String BatchPutFieldOptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_optionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optionsJsonList(m_options.size());
   for(unsigned optionsIndex = 0; optionsIndex < optionsJsonList.GetLength(); ++optionsIndex)
   {
     optionsJsonList[optionsIndex].AsObject(m_options[optionsIndex].Jsonize());
   }
   payload.WithArray("options", std::move(optionsJsonList));

  }

  return payload.View().WriteReadable();
}




