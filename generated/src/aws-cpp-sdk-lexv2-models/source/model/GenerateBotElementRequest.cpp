/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/GenerateBotElementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GenerateBotElementRequest::GenerateBotElementRequest() : 
    m_intentIdHasBeenSet(false),
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false)
{
}

Aws::String GenerateBotElementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_intentIdHasBeenSet)
  {
   payload.WithString("intentId", m_intentId);

  }

  return payload.View().WriteReadable();
}




