/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/DescribeScraperRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PrometheusService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeScraperRequest::DescribeScraperRequest() : 
    m_scraperIdHasBeenSet(false)
{
}

Aws::String DescribeScraperRequest::SerializePayload() const
{
  return {};
}




