/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/DeleteReportDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationCostProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteReportDefinitionRequest::DeleteReportDefinitionRequest() : 
    m_reportIdHasBeenSet(false)
{
}

Aws::String DeleteReportDefinitionRequest::SerializePayload() const
{
  return {};
}




