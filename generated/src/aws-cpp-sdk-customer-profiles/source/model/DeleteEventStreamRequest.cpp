/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DeleteEventStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteEventStreamRequest::DeleteEventStreamRequest() : 
    m_domainNameHasBeenSet(false),
    m_eventStreamNameHasBeenSet(false)
{
}

Aws::String DeleteEventStreamRequest::SerializePayload() const
{
  return {};
}




