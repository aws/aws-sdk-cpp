/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribePackageRequest::DescribePackageRequest() : 
    m_packageIdHasBeenSet(false)
{
}

Aws::String DescribePackageRequest::SerializePayload() const
{
  return {};
}




