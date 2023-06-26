/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UpdateResourceProfileDetectionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateResourceProfileDetectionsRequest::UpdateResourceProfileDetectionsRequest() : 
    m_resourceArnHasBeenSet(false),
    m_suppressDataIdentifiersHasBeenSet(false)
{
}

Aws::String UpdateResourceProfileDetectionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_suppressDataIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suppressDataIdentifiersJsonList(m_suppressDataIdentifiers.size());
   for(unsigned suppressDataIdentifiersIndex = 0; suppressDataIdentifiersIndex < suppressDataIdentifiersJsonList.GetLength(); ++suppressDataIdentifiersIndex)
   {
     suppressDataIdentifiersJsonList[suppressDataIdentifiersIndex].AsObject(m_suppressDataIdentifiers[suppressDataIdentifiersIndex].Jsonize());
   }
   payload.WithArray("suppressDataIdentifiers", std::move(suppressDataIdentifiersJsonList));

  }

  return payload.View().WriteReadable();
}

void UpdateResourceProfileDetectionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceArnHasBeenSet)
    {
      ss << m_resourceArn;
      uri.AddQueryStringParameter("resourceArn", ss.str());
      ss.str("");
    }

}



