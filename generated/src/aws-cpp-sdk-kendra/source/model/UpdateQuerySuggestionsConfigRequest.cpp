/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UpdateQuerySuggestionsConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateQuerySuggestionsConfigRequest::UpdateQuerySuggestionsConfigRequest() : 
    m_indexIdHasBeenSet(false),
    m_mode(Mode::NOT_SET),
    m_modeHasBeenSet(false),
    m_queryLogLookBackWindowInDays(0),
    m_queryLogLookBackWindowInDaysHasBeenSet(false),
    m_includeQueriesWithoutUserInformation(false),
    m_includeQueriesWithoutUserInformationHasBeenSet(false),
    m_minimumNumberOfQueryingUsers(0),
    m_minimumNumberOfQueryingUsersHasBeenSet(false),
    m_minimumQueryCount(0),
    m_minimumQueryCountHasBeenSet(false),
    m_attributeSuggestionsConfigHasBeenSet(false)
{
}

Aws::String UpdateQuerySuggestionsConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", ModeMapper::GetNameForMode(m_mode));
  }

  if(m_queryLogLookBackWindowInDaysHasBeenSet)
  {
   payload.WithInteger("QueryLogLookBackWindowInDays", m_queryLogLookBackWindowInDays);

  }

  if(m_includeQueriesWithoutUserInformationHasBeenSet)
  {
   payload.WithBool("IncludeQueriesWithoutUserInformation", m_includeQueriesWithoutUserInformation);

  }

  if(m_minimumNumberOfQueryingUsersHasBeenSet)
  {
   payload.WithInteger("MinimumNumberOfQueryingUsers", m_minimumNumberOfQueryingUsers);

  }

  if(m_minimumQueryCountHasBeenSet)
  {
   payload.WithInteger("MinimumQueryCount", m_minimumQueryCount);

  }

  if(m_attributeSuggestionsConfigHasBeenSet)
  {
   payload.WithObject("AttributeSuggestionsConfig", m_attributeSuggestionsConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateQuerySuggestionsConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.UpdateQuerySuggestionsConfig"));
  return headers;

}




