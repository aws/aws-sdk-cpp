/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssociateEnvironmentRoleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateEnvironmentRoleRequest::AssociateEnvironmentRoleRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_environmentRoleArnHasBeenSet(false)
{
}

Aws::String AssociateEnvironmentRoleRequest::SerializePayload() const
{
  return {};
}




