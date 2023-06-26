/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/model/StartConfigurationSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfigData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartConfigurationSessionRequest::StartConfigurationSessionRequest() : 
    m_applicationIdentifierHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_configurationProfileIdentifierHasBeenSet(false),
    m_requiredMinimumPollIntervalInSeconds(0),
    m_requiredMinimumPollIntervalInSecondsHasBeenSet(false)
{
}

Aws::String StartConfigurationSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationIdentifierHasBeenSet)
  {
   payload.WithString("ApplicationIdentifier", m_applicationIdentifier);

  }

  if(m_environmentIdentifierHasBeenSet)
  {
   payload.WithString("EnvironmentIdentifier", m_environmentIdentifier);

  }

  if(m_configurationProfileIdentifierHasBeenSet)
  {
   payload.WithString("ConfigurationProfileIdentifier", m_configurationProfileIdentifier);

  }

  if(m_requiredMinimumPollIntervalInSecondsHasBeenSet)
  {
   payload.WithInteger("RequiredMinimumPollIntervalInSeconds", m_requiredMinimumPollIntervalInSeconds);

  }

  return payload.View().WriteReadable();
}




