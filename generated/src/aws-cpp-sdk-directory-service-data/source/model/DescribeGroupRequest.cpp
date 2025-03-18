/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/DescribeGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectoryServiceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_otherAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> otherAttributesJsonList(m_otherAttributes.size());
   for(unsigned otherAttributesIndex = 0; otherAttributesIndex < otherAttributesJsonList.GetLength(); ++otherAttributesIndex)
   {
     otherAttributesJsonList[otherAttributesIndex].AsString(m_otherAttributes[otherAttributesIndex]);
   }
   payload.WithArray("OtherAttributes", std::move(otherAttributesJsonList));

  }

  if(m_realmHasBeenSet)
  {
   payload.WithString("Realm", m_realm);

  }

  if(m_sAMAccountNameHasBeenSet)
  {
   payload.WithString("SAMAccountName", m_sAMAccountName);

  }

  return payload.View().WriteReadable();
}

void DescribeGroupRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_directoryIdHasBeenSet)
    {
      ss << m_directoryId;
      uri.AddQueryStringParameter("DirectoryId", ss.str());
      ss.str("");
    }

}



