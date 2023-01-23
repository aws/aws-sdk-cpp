/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListRecommendationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRecommendationsRequest::ListRecommendationsRequest() : 
    m_insightIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

Aws::String ListRecommendationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_insightIdHasBeenSet)
  {
   payload.WithString("InsightId", m_insightId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", LocaleMapper::GetNameForLocale(m_locale));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload.View().WriteReadable();
}




