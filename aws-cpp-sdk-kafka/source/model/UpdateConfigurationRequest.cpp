/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConfigurationRequest::UpdateConfigurationRequest() : 
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_serverPropertiesHasBeenSet(false)
{
}

Aws::String UpdateConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_serverPropertiesHasBeenSet)
  {
   payload.WithString("serverProperties", HashingUtils::Base64Encode(m_serverProperties));
  }

  return payload.View().WriteReadable();
}




