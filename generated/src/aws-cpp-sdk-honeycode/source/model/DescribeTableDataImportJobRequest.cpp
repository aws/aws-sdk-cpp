/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/DescribeTableDataImportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTableDataImportJobRequest::DescribeTableDataImportJobRequest() : 
    m_workbookIdHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_jobIdHasBeenSet(false)
{
}

Aws::String DescribeTableDataImportJobRequest::SerializePayload() const
{
  return {};
}




