/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetPropertyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAssetPropertyRequest::DescribeAssetPropertyRequest() : 
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false)
{
}

Aws::String DescribeAssetPropertyRequest::SerializePayload() const
{
  return {};
}




