/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kinesisanalytics/model/DiscoverInputSchemaRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DiscoverInputSchemaRequest::DiscoverInputSchemaRequest() : 
    m_resourceARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_inputStartingPositionConfigurationHasBeenSet(false)
{
}

Aws::String DiscoverInputSchemaRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_inputStartingPositionConfigurationHasBeenSet)
  {
   payload.WithObject("InputStartingPositionConfiguration", m_inputStartingPositionConfiguration.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DiscoverInputSchemaRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20150814.DiscoverInputSchema"));
  return headers;

}



