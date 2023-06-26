/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/CancelPolicyGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelPolicyGenerationRequest::CancelPolicyGenerationRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String CancelPolicyGenerationRequest::SerializePayload() const
{
  return {};
}




