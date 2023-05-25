/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetControlRequest::GetControlRequest() : 
    m_controlIdHasBeenSet(false)
{
}

Aws::String GetControlRequest::SerializePayload() const
{
  return {};
}




