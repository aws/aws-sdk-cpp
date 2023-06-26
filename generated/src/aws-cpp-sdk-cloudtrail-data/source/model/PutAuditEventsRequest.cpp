/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail-data/model/PutAuditEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrailData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

PutAuditEventsRequest::PutAuditEventsRequest() : 
    m_auditEventsHasBeenSet(false),
    m_channelArnHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

Aws::String PutAuditEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_auditEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> auditEventsJsonList(m_auditEvents.size());
   for(unsigned auditEventsIndex = 0; auditEventsIndex < auditEventsJsonList.GetLength(); ++auditEventsIndex)
   {
     auditEventsJsonList[auditEventsIndex].AsObject(m_auditEvents[auditEventsIndex].Jsonize());
   }
   payload.WithArray("auditEvents", std::move(auditEventsJsonList));

  }

  return payload.View().WriteReadable();
}

void PutAuditEventsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_channelArnHasBeenSet)
    {
      ss << m_channelArn;
      uri.AddQueryStringParameter("channelArn", ss.str());
      ss.str("");
    }

    if(m_externalIdHasBeenSet)
    {
      ss << m_externalId;
      uri.AddQueryStringParameter("externalId", ss.str());
      ss.str("");
    }

}



