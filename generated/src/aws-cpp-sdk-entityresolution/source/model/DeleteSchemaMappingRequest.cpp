/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/DeleteSchemaMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSchemaMappingRequest::DeleteSchemaMappingRequest() : 
    m_schemaNameHasBeenSet(false)
{
}

Aws::String DeleteSchemaMappingRequest::SerializePayload() const
{
  return {};
}




