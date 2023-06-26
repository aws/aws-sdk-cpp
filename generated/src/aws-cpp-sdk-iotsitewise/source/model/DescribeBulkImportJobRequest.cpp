/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeBulkImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeBulkImportJobRequest::DescribeBulkImportJobRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String DescribeBulkImportJobRequest::SerializePayload() const
{
  return {};
}




