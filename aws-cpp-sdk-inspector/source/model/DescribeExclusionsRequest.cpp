/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> exclusionArnsJsonList(m_exclusionArns.size());
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




