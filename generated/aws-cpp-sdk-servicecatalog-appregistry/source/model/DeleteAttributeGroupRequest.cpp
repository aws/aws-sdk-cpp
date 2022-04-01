/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/DeleteAttributeGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRegistry::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAttributeGroupRequest::DeleteAttributeGroupRequest() : 
    m_attributeGroupHasBeenSet(false)
{
}

Aws::String DeleteAttributeGroupRequest::SerializePayload() const
{
  return {};
}




