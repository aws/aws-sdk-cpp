/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/StopModelCustomizationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopModelCustomizationJobRequest::StopModelCustomizationJobRequest() : 
    m_jobIdentifierHasBeenSet(false)
{
}

Aws::String StopModelCustomizationJobRequest::SerializePayload() const
{
  return {};
}




