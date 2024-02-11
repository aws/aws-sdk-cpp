/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/StopIngestionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopIngestionRequest::StopIngestionRequest() : 
    m_ingestionIdentifierHasBeenSet(false),
    m_appBundleIdentifierHasBeenSet(false)
{
}

Aws::String StopIngestionRequest::SerializePayload() const
{
  return {};
}




