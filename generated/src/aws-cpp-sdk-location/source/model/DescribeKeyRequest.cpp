/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DescribeKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeKeyRequest::DescribeKeyRequest() : 
    m_keyNameHasBeenSet(false)
{
}

Aws::String DescribeKeyRequest::SerializePayload() const
{
  return {};
}




