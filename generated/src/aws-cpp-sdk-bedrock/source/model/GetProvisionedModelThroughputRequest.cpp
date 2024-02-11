/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetProvisionedModelThroughputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProvisionedModelThroughputRequest::GetProvisionedModelThroughputRequest() : 
    m_provisionedModelIdHasBeenSet(false)
{
}

Aws::String GetProvisionedModelThroughputRequest::SerializePayload() const
{
  return {};
}




