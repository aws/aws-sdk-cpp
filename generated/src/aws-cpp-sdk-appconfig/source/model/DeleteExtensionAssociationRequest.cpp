/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeleteExtensionAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteExtensionAssociationRequest::DeleteExtensionAssociationRequest() : 
    m_extensionAssociationIdHasBeenSet(false)
{
}

Aws::String DeleteExtensionAssociationRequest::SerializePayload() const
{
  return {};
}




