/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GenerateEmbedUrlForRegisteredUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GenerateEmbedUrlForRegisteredUserRequest::GenerateEmbedUrlForRegisteredUserRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_sessionLifetimeInMinutes(0),
    m_sessionLifetimeInMinutesHasBeenSet(false),
    m_userArnHasBeenSet(false),
    m_experienceConfigurationHasBeenSet(false),
    m_allowedDomainsHasBeenSet(false)
{
}

Aws::String GenerateEmbedUrlForRegisteredUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionLifetimeInMinutesHasBeenSet)
  {
   payload.WithInt64("SessionLifetimeInMinutes", m_sessionLifetimeInMinutes);

  }

  if(m_userArnHasBeenSet)
  {
   payload.WithString("UserArn", m_userArn);

  }

  if(m_experienceConfigurationHasBeenSet)
  {
   payload.WithObject("ExperienceConfiguration", m_experienceConfiguration.Jsonize());

  }

  if(m_allowedDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedDomainsJsonList(m_allowedDomains.size());
   for(unsigned allowedDomainsIndex = 0; allowedDomainsIndex < allowedDomainsJsonList.GetLength(); ++allowedDomainsIndex)
   {
     allowedDomainsJsonList[allowedDomainsIndex].AsString(m_allowedDomains[allowedDomainsIndex]);
   }
   payload.WithArray("AllowedDomains", std::move(allowedDomainsJsonList));

  }

  return payload.View().WriteReadable();
}




