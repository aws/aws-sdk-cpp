/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/GetMinuteUsageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMinuteUsageRequest::GetMinuteUsageRequest() : 
    m_month(0),
    m_monthHasBeenSet(false),
    m_year(0),
    m_yearHasBeenSet(false)
{
}

Aws::String GetMinuteUsageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monthHasBeenSet)
  {
   payload.WithInteger("month", m_month);

  }

  if(m_yearHasBeenSet)
  {
   payload.WithInteger("year", m_year);

  }

  return payload.View().WriteReadable();
}




