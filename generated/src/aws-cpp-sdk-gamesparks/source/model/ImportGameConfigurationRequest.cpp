/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ImportGameConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportGameConfigurationRequest::ImportGameConfigurationRequest() : 
    m_gameNameHasBeenSet(false),
    m_importSourceHasBeenSet(false)
{
}

Aws::String ImportGameConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importSourceHasBeenSet)
  {
   payload.WithObject("ImportSource", m_importSource.Jsonize());

  }

  return payload.View().WriteReadable();
}




