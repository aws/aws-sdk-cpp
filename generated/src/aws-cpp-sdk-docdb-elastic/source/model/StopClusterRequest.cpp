/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/StopClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopClusterRequest::StopClusterRequest() : 
    m_clusterArnHasBeenSet(false)
{
}

Aws::String StopClusterRequest::SerializePayload() const
{
  return {};
}




