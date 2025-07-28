/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateComputationModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateComputationModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computationModelNameHasBeenSet)
  {
   payload.WithString("computationModelName", m_computationModelName);

  }

  if(m_computationModelDescriptionHasBeenSet)
  {
   payload.WithString("computationModelDescription", m_computationModelDescription);

  }

  if(m_computationModelConfigurationHasBeenSet)
  {
   payload.WithObject("computationModelConfiguration", m_computationModelConfiguration.Jsonize());

  }

  if(m_computationModelDataBindingHasBeenSet)
  {
   JsonValue computationModelDataBindingJsonMap;
   for(auto& computationModelDataBindingItem : m_computationModelDataBinding)
   {
     computationModelDataBindingJsonMap.WithObject(computationModelDataBindingItem.first, computationModelDataBindingItem.second.Jsonize());
   }
   payload.WithObject("computationModelDataBinding", std::move(computationModelDataBindingJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




