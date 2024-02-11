/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/DeleteIngestionDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteIngestionDestinationRequest::DeleteIngestionDestinationRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_ingestionIdentifierHasBeenSet(false),
    m_ingestionDestinationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteIngestionDestinationRequest::SerializePayload() const
{
  return {};
}




