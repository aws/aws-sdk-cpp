/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CreateAccessPreviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAccessPreviewRequest::CreateAccessPreviewRequest() : 
    m_analyzerArnHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateAccessPreviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analyzerArnHasBeenSet)
  {
   payload.WithString("analyzerArn", m_analyzerArn);

  }

  if(m_configurationsHasBeenSet)
  {
   JsonValue configurationsJsonMap;
   for(auto& configurationsItem : m_configurations)
   {
     configurationsJsonMap.WithObject(configurationsItem.first, configurationsItem.second.Jsonize());
   }
   payload.WithObject("configurations", std::move(configurationsJsonMap));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




