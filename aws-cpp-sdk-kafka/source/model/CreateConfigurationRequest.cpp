/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kafka/model/CreateConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfigurationRequest::CreateConfigurationRequest() : 
    m_descriptionHasBeenSet(false),
    m_kafkaVersionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_serverPropertiesHasBeenSet(false)
{
}

Aws::String CreateConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_kafkaVersionsHasBeenSet)
  {
   Array<JsonValue> kafkaVersionsJsonList(m_kafkaVersions.size());
   for(unsigned kafkaVersionsIndex = 0; kafkaVersionsIndex < kafkaVersionsJsonList.GetLength(); ++kafkaVersionsIndex)
   {
     kafkaVersionsJsonList[kafkaVersionsIndex].AsString(m_kafkaVersions[kafkaVersionsIndex]);
   }
   payload.WithArray("kafkaVersions", std::move(kafkaVersionsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_serverPropertiesHasBeenSet)
  {
   payload.WithString("serverProperties", HashingUtils::Base64Encode(m_serverProperties));
  }

  return payload.View().WriteReadable();
}




