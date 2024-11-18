/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateContactFlowVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateContactFlowVersionRequest::CreateContactFlowVersionRequest() : 
    m_instanceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contactFlowIdHasBeenSet(false),
    m_flowContentSha256HasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastModifiedRegionHasBeenSet(false)
{
}

Aws::String CreateContactFlowVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_flowContentSha256HasBeenSet)
  {
   payload.WithString("FlowContentSha256", m_flowContentSha256);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedRegionHasBeenSet)
  {
   payload.WithString("LastModifiedRegion", m_lastModifiedRegion);

  }

  return payload.View().WriteReadable();
}




