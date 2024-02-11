/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeBotResourceGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBotResourceGenerationRequest::DescribeBotResourceGenerationRequest() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_generationIdHasBeenSet(false)
{
}

Aws::String DescribeBotResourceGenerationRequest::SerializePayload() const
{
  return {};
}




