/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/DeleteManagedEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRContainers::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteManagedEndpointRequest::DeleteManagedEndpointRequest() : 
    m_idHasBeenSet(false),
    m_virtualClusterIdHasBeenSet(false)
{
}

Aws::String DeleteManagedEndpointRequest::SerializePayload() const
{
  return {};
}




