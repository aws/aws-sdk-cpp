/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeAddonRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAddonRequest::DescribeAddonRequest() : 
    m_clusterNameHasBeenSet(false),
    m_addonNameHasBeenSet(false)
{
}

Aws::String DescribeAddonRequest::SerializePayload() const
{
  return {};
}




