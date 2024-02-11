/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeInsightRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInsightRequest::DescribeInsightRequest() : 
    m_clusterNameHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String DescribeInsightRequest::SerializePayload() const
{
  return {};
}




