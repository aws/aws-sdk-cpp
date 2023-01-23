/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/GetClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetClusterRequest::GetClusterRequest() : 
    m_clusterArnHasBeenSet(false)
{
}

Aws::String GetClusterRequest::SerializePayload() const
{
  return {};
}




