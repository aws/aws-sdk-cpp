/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeAccessEntryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAccessEntryRequest::DescribeAccessEntryRequest() : 
    m_clusterNameHasBeenSet(false),
    m_principalArnHasBeenSet(false)
{
}

Aws::String DescribeAccessEntryRequest::SerializePayload() const
{
  return {};
}




