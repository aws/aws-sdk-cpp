﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/StartPolicyGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartPolicyGenerationRequest::StartPolicyGenerationRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_cloudTrailDetailsHasBeenSet(false),
    m_policyGenerationDetailsHasBeenSet(false)
{
}

Aws::String StartPolicyGenerationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_cloudTrailDetailsHasBeenSet)
  {
   payload.WithObject("cloudTrailDetails", m_cloudTrailDetails.Jsonize());

  }

  if(m_policyGenerationDetailsHasBeenSet)
  {
   payload.WithObject("policyGenerationDetails", m_policyGenerationDetails.Jsonize());

  }

  return payload.View().WriteReadable();
}




