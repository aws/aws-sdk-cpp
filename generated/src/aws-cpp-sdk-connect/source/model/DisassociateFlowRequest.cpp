/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateFlowRequest::DisassociateFlowRequest() : 
    m_instanceIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(FlowAssociationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String DisassociateFlowRequest::SerializePayload() const
{
  return {};
}




