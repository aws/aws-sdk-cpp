/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/PostTimeSeriesDataPointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PostTimeSeriesDataPointsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_formsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> formsJsonList(m_forms.size());
   for(unsigned formsIndex = 0; formsIndex < formsJsonList.GetLength(); ++formsIndex)
   {
     formsJsonList[formsIndex].AsObject(m_forms[formsIndex].Jsonize());
   }
   payload.WithArray("forms", std::move(formsJsonList));

  }

  return payload.View().WriteReadable();
}




