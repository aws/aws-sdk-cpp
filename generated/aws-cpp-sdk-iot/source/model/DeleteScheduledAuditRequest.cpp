/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteScheduledAuditRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteScheduledAuditRequest::DeleteScheduledAuditRequest() : 
    m_scheduledAuditNameHasBeenSet(false)
{
}

Aws::String DeleteScheduledAuditRequest::SerializePayload() const
{
  return {};
}




