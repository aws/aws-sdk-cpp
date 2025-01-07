/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/GetSearchResultExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupSearch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSearchResultExportJobRequest::GetSearchResultExportJobRequest() : 
    m_exportJobIdentifierHasBeenSet(false)
{
}

Aws::String GetSearchResultExportJobRequest::SerializePayload() const
{
  return {};
}




