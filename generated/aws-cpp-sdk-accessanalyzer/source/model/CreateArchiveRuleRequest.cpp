﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CreateArchiveRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateArchiveRuleRequest::CreateArchiveRuleRequest() : 
    m_analyzerNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_filterHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
}

Aws::String CreateArchiveRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_filterHasBeenSet)
  {
   JsonValue filterJsonMap;
   for(auto& filterItem : m_filter)
   {
     filterJsonMap.WithObject(filterItem.first, filterItem.second.Jsonize());
   }
   payload.WithObject("filter", std::move(filterJsonMap));

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  return payload.View().WriteReadable();
}




