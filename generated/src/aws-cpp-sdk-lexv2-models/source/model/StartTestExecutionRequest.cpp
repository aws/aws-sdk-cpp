/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartTestExecutionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartTestExecutionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  if(m_apiModeHasBeenSet)
  {
   payload.WithString("apiMode", TestExecutionApiModeMapper::GetNameForTestExecutionApiMode(m_apiMode));
  }

  if(m_testExecutionModalityHasBeenSet)
  {
   payload.WithString("testExecutionModality", TestExecutionModalityMapper::GetNameForTestExecutionModality(m_testExecutionModality));
  }

  return payload.View().WriteReadable();
}




