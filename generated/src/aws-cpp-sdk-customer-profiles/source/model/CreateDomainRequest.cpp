/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/CreateDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_defaultExpirationDaysHasBeenSet)
  {
   payload.WithInteger("DefaultExpirationDays", m_defaultExpirationDays);

  }

  if(m_defaultEncryptionKeyHasBeenSet)
  {
   payload.WithString("DefaultEncryptionKey", m_defaultEncryptionKey);

  }

  if(m_deadLetterQueueUrlHasBeenSet)
  {
   payload.WithString("DeadLetterQueueUrl", m_deadLetterQueueUrl);

  }

  if(m_matchingHasBeenSet)
  {
   payload.WithObject("Matching", m_matching.Jsonize());

  }

  if(m_ruleBasedMatchingHasBeenSet)
  {
   payload.WithObject("RuleBasedMatching", m_ruleBasedMatching.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




