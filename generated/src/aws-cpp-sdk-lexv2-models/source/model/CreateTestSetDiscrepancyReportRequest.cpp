/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateTestSetDiscrepancyReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTestSetDiscrepancyReportRequest::CreateTestSetDiscrepancyReportRequest() : 
    m_testSetIdHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

Aws::String CreateTestSetDiscrepancyReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  return payload.View().WriteReadable();
}




