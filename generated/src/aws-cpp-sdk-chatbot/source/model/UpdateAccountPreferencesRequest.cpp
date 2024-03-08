/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/UpdateAccountPreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAccountPreferencesRequest::UpdateAccountPreferencesRequest() : 
    m_userAuthorizationRequired(false),
    m_userAuthorizationRequiredHasBeenSet(false),
    m_trainingDataCollectionEnabled(false),
    m_trainingDataCollectionEnabledHasBeenSet(false)
{
}

Aws::String UpdateAccountPreferencesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userAuthorizationRequiredHasBeenSet)
  {
   payload.WithBool("UserAuthorizationRequired", m_userAuthorizationRequired);

  }

  if(m_trainingDataCollectionEnabledHasBeenSet)
  {
   payload.WithBool("TrainingDataCollectionEnabled", m_trainingDataCollectionEnabled);

  }

  return payload.View().WriteReadable();
}




