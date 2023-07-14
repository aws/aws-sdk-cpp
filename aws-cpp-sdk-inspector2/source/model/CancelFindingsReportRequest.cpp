/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CancelFindingsReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelFindingsReportRequest::CancelFindingsReportRequest() : 
    m_reportIdHasBeenSet(false)
{
}

Aws::String CancelFindingsReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportIdHasBeenSet)
  {
   payload.WithString("reportId", m_reportId);

  }

  return payload.View().WriteReadable();
}




