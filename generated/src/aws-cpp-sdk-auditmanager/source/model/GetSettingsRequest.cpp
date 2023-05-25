/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSettingsRequest::GetSettingsRequest() : 
    m_attribute(SettingAttribute::NOT_SET),
    m_attributeHasBeenSet(false)
{
}

Aws::String GetSettingsRequest::SerializePayload() const
{
  return {};
}




