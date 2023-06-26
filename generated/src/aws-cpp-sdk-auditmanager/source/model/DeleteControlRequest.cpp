/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DeleteControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteControlRequest::DeleteControlRequest() : 
    m_controlIdHasBeenSet(false)
{
}

Aws::String DeleteControlRequest::SerializePayload() const
{
  return {};
}




