/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/DescribeBundleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Mobile::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBundleRequest::DescribeBundleRequest() : 
    m_bundleIdHasBeenSet(false)
{
}

Aws::String DescribeBundleRequest::SerializePayload() const
{
  return {};
}




