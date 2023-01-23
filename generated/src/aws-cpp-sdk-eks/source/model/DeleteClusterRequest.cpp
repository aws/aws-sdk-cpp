/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DeleteClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteClusterRequest::DeleteClusterRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteClusterRequest::SerializePayload() const
{
  return {};
}




