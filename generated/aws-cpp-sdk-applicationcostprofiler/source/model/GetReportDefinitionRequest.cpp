/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/GetReportDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationCostProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetReportDefinitionRequest::GetReportDefinitionRequest() : 
    m_reportIdHasBeenSet(false)
{
}

Aws::String GetReportDefinitionRequest::SerializePayload() const
{
  return {};
}




