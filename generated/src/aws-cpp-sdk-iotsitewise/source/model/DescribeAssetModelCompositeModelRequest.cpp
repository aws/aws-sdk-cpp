/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAssetModelCompositeModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAssetModelCompositeModelRequest::DescribeAssetModelCompositeModelRequest() : 
    m_assetModelIdHasBeenSet(false),
    m_assetModelCompositeModelIdHasBeenSet(false)
{
}

Aws::String DescribeAssetModelCompositeModelRequest::SerializePayload() const
{
  return {};
}




