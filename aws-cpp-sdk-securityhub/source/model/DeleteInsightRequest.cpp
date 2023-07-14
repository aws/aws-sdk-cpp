/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DeleteInsightRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteInsightRequest::DeleteInsightRequest() : 
    m_insightArnHasBeenSet(false)
{
}

Aws::String DeleteInsightRequest::SerializePayload() const
{
  return {};
}




