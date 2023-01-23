/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeEventDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEventDetailsRequest::DescribeEventDetailsRequest() : 
    m_eventArnsHasBeenSet(false),
    m_localeHasBeenSet(false)
{
}

Aws::String DescribeEventDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventArnsJsonList(m_eventArns.size());
   for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
   {
     eventArnsJsonList[eventArnsIndex].AsString(m_eventArns[eventArnsIndex]);
   }
   payload.WithArray("eventArns", std::move(eventArnsJsonList));

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEventDetailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHealth_20160804.DescribeEventDetails"));
  return headers;

}




