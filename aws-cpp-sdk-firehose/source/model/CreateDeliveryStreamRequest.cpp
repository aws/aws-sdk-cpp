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
#include <aws/firehose/model/CreateDeliveryStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeliveryStreamRequest::CreateDeliveryStreamRequest() : 
    m_deliveryStreamNameHasBeenSet(false),
    m_s3DestinationConfigurationHasBeenSet(false),
    m_redshiftDestinationConfigurationHasBeenSet(false),
    m_elasticsearchDestinationConfigurationHasBeenSet(false)
{
}

Aws::String CreateDeliveryStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  if(m_s3DestinationConfigurationHasBeenSet)
  {
   payload.WithObject("S3DestinationConfiguration", m_s3DestinationConfiguration.Jsonize());

  }

  if(m_redshiftDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("RedshiftDestinationConfiguration", m_redshiftDestinationConfiguration.Jsonize());

  }

  if(m_elasticsearchDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("ElasticsearchDestinationConfiguration", m_elasticsearchDestinationConfiguration.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDeliveryStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.CreateDeliveryStream"));
  return headers;

}



