/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StopBotRecommendationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopBotRecommendationRequest::StopBotRecommendationRequest() : 
    m_botIdHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_botRecommendationIdHasBeenSet(false)
{
}

Aws::String StopBotRecommendationRequest::SerializePayload() const
{
  return {};
}




