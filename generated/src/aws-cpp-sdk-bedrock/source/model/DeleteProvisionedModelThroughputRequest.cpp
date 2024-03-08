/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/DeleteProvisionedModelThroughputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProvisionedModelThroughputRequest::DeleteProvisionedModelThroughputRequest() : 
    m_provisionedModelIdHasBeenSet(false)
{
}

Aws::String DeleteProvisionedModelThroughputRequest::SerializePayload() const
{
  return {};
}




