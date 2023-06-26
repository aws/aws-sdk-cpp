/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteProvisioningTemplateVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProvisioningTemplateVersionRequest::DeleteProvisioningTemplateVersionRequest() : 
    m_templateNameHasBeenSet(false),
    m_versionId(0),
    m_versionIdHasBeenSet(false)
{
}

Aws::String DeleteProvisioningTemplateVersionRequest::SerializePayload() const
{
  return {};
}




