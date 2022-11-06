/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CreateAccountCustomizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreateAccountCustomizationRequest::CreateAccountCustomizationRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_accountCustomizationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAccountCustomizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountCustomizationHasBeenSet)
  {
   payload.WithObject("AccountCustomization", m_accountCustomization.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

void CreateAccountCustomizationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_namespaceHasBeenSet)
    {
      ss << m_namespace;
      uri.AddQueryStringParameter("namespace", ss.str());
      ss.str("");
    }

}



