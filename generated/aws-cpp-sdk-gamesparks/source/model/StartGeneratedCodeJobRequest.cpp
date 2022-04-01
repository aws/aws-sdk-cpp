/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/StartGeneratedCodeJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartGeneratedCodeJobRequest::StartGeneratedCodeJobRequest() : 
    m_gameNameHasBeenSet(false),
    m_generatorHasBeenSet(false),
    m_snapshotIdHasBeenSet(false)
{
}

Aws::String StartGeneratedCodeJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_generatorHasBeenSet)
  {
   payload.WithObject("Generator", m_generator.Jsonize());

  }

  return payload.View().WriteReadable();
}




