/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/DeleteClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteClusterRequest::DeleteClusterRequest() : 
    m_clusterArnHasBeenSet(false)
{
}

Aws::String DeleteClusterRequest::SerializePayload() const
{
  return {};
}




