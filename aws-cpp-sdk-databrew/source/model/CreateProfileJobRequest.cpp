/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/CreateProfileJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProfileJobRequest::CreateProfileJobRequest() : 
    m_datasetNameHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_encryptionMode(EncryptionMode::NOT_SET),
    m_encryptionModeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logSubscription(LogSubscription::NOT_SET),
    m_logSubscriptionHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_validationConfigurationsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false),
    m_jobSampleHasBeenSet(false)
{
}

Aws::String CreateProfileJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_encryptionModeHasBeenSet)
  {
   payload.WithString("EncryptionMode", EncryptionModeMapper::GetNameForEncryptionMode(m_encryptionMode));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_logSubscriptionHasBeenSet)
  {
   payload.WithString("LogSubscription", LogSubscriptionMapper::GetNameForLogSubscription(m_logSubscription));
  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("MaxCapacity", m_maxCapacity);

  }

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInteger("MaxRetries", m_maxRetries);

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("OutputLocation", m_outputLocation.Jsonize());

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("Configuration", m_configuration.Jsonize());

  }

  if(m_validationConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationConfigurationsJsonList(m_validationConfigurations.size());
   for(unsigned validationConfigurationsIndex = 0; validationConfigurationsIndex < validationConfigurationsJsonList.GetLength(); ++validationConfigurationsIndex)
   {
     validationConfigurationsJsonList[validationConfigurationsIndex].AsObject(m_validationConfigurations[validationConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ValidationConfigurations", std::move(validationConfigurationsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

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

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  if(m_jobSampleHasBeenSet)
  {
   payload.WithObject("JobSample", m_jobSample.Jsonize());

  }

  return payload.View().WriteReadable();
}




