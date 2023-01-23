﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CreateWorkerConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkerConfigurationRequest::CreateWorkerConfigurationRequest() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_propertiesFileContentHasBeenSet(false)
{
}

Aws::String CreateWorkerConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_propertiesFileContentHasBeenSet)
  {
   payload.WithString("propertiesFileContent", m_propertiesFileContent);

  }

  return payload.View().WriteReadable();
}




