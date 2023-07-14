/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetMigrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMigrationRequest::GetMigrationRequest() : 
    m_migrationIdHasBeenSet(false)
{
}

Aws::String GetMigrationRequest::SerializePayload() const
{
  return {};
}




