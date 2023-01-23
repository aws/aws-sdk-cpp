/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/DeleteLoggerDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLoggerDefinitionRequest::DeleteLoggerDefinitionRequest() : 
    m_loggerDefinitionIdHasBeenSet(false)
{
}

Aws::String DeleteLoggerDefinitionRequest::SerializePayload() const
{
  return {};
}




