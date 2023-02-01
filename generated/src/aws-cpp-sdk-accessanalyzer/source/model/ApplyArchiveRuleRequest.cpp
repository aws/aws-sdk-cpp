/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ApplyArchiveRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ApplyArchiveRuleRequest::ApplyArchiveRuleRequest() : 
    m_analyzerArnHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String ApplyArchiveRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_analyzerArnHasBeenSet)
  {
   payload.WithString("analyzerArn", m_analyzerArn);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




