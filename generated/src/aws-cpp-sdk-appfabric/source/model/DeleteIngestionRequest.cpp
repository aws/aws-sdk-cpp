/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/DeleteIngestionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteIngestionRequest::DeleteIngestionRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_ingestionIdentifierHasBeenSet(false)
{
}

Aws::String DeleteIngestionRequest::SerializePayload() const
{
  return {};
}




