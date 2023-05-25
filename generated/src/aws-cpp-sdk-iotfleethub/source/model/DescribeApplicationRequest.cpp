/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleethub/model/DescribeApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeApplicationRequest::DescribeApplicationRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String DescribeApplicationRequest::SerializePayload() const
{
  return {};
}




