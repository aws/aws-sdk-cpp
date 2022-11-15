/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeExclusionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeExclusionsRequest::DescribeExclusionsRequest() : 
    m_exclusionArnsHasBeenSet(false),
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false)
{
}

Aws::String DescribeExclusionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exclusionArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionArnsJsonList(m_exclusionArns.size());
   for(unsigned exclusionArnsIndex = 0; exclusionArnsIndex < exclusionArnsJsonList.GetLength(); ++exclusionArnsIndex)
   {
     exclusionArnsJsonList[exclusionArnsIndex].AsString(m_exclusionArns[exclusionArnsIndex]);
   }
   payload.WithArray("exclusionArns", std::move(exclusionArnsJsonList));

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", LocaleMapper::GetNameForLocale(m_locale));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeExclusionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeExclusions"));
  return headers;

}




