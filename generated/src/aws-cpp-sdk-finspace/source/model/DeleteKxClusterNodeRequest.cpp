/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/DeleteKxClusterNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteKxClusterNodeRequest::DeleteKxClusterNodeRequest() : 
    m_environmentIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

Aws::String DeleteKxClusterNodeRequest::SerializePayload() const
{
  return {};
}




