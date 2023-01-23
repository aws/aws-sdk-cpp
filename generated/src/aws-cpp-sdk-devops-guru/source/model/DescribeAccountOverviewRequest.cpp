/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeAccountOverviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAccountOverviewRequest::DescribeAccountOverviewRequest() : 
    m_fromTimeHasBeenSet(false),
    m_toTimeHasBeenSet(false)
{
}

Aws::String DescribeAccountOverviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fromTimeHasBeenSet)
  {
   payload.WithDouble("FromTime", m_fromTime.SecondsWithMSPrecision());
  }

  if(m_toTimeHasBeenSet)
  {
   payload.WithDouble("ToTime", m_toTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}




