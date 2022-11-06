/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeRulesPackagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRulesPackagesRequest::DescribeRulesPackagesRequest() : 
    m_rulesPackageArnsHasBeenSet(false),
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false)
{
}

Aws::String DescribeRulesPackagesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_rulesPackageArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
   for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
   {
     rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString(m_rulesPackageArns[rulesPackageArnsIndex]);
   }
   payload.WithArray("rulesPackageArns", std::move(rulesPackageArnsJsonList));

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", LocaleMapper::GetNameForLocale(m_locale));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeRulesPackagesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DescribeRulesPackages"));
  return headers;

}




