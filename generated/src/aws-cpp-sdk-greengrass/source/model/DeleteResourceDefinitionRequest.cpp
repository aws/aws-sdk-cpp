/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/DeleteResourceDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResourceDefinitionRequest::DeleteResourceDefinitionRequest() : 
    m_resourceDefinitionIdHasBeenSet(false)
{
}

Aws::String DeleteResourceDefinitionRequest::SerializePayload() const
{
  return {};
}




