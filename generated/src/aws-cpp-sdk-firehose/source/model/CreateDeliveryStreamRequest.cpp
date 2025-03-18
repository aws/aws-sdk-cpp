/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/CreateDeliveryStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDeliveryStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  if(m_deliveryStreamTypeHasBeenSet)
  {
   payload.WithString("DeliveryStreamType", DeliveryStreamTypeMapper::GetNameForDeliveryStreamType(m_deliveryStreamType));
  }

  if(m_directPutSourceConfigurationHasBeenSet)
  {
   payload.WithObject("DirectPutSourceConfiguration", m_directPutSourceConfiguration.Jsonize());

  }

  if(m_kinesisStreamSourceConfigurationHasBeenSet)
  {
   payload.WithObject("KinesisStreamSourceConfiguration", m_kinesisStreamSourceConfiguration.Jsonize());

  }

  if(m_deliveryStreamEncryptionConfigurationInputHasBeenSet)
  {
   payload.WithObject("DeliveryStreamEncryptionConfigurationInput", m_deliveryStreamEncryptionConfigurationInput.Jsonize());

  }

  if(m_extendedS3DestinationConfigurationHasBeenSet)
  {
   payload.WithObject("ExtendedS3DestinationConfiguration", m_extendedS3DestinationConfiguration.Jsonize());

  }

  if(m_redshiftDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("RedshiftDestinationConfiguration", m_redshiftDestinationConfiguration.Jsonize());

  }

  if(m_elasticsearchDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("ElasticsearchDestinationConfiguration", m_elasticsearchDestinationConfiguration.Jsonize());

  }

  if(m_amazonopensearchserviceDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("AmazonopensearchserviceDestinationConfiguration", m_amazonopensearchserviceDestinationConfiguration.Jsonize());

  }

  if(m_splunkDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("SplunkDestinationConfiguration", m_splunkDestinationConfiguration.Jsonize());

  }

  if(m_httpEndpointDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("HttpEndpointDestinationConfiguration", m_httpEndpointDestinationConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_amazonOpenSearchServerlessDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("AmazonOpenSearchServerlessDestinationConfiguration", m_amazonOpenSearchServerlessDestinationConfiguration.Jsonize());

  }

  if(m_mSKSourceConfigurationHasBeenSet)
  {
   payload.WithObject("MSKSourceConfiguration", m_mSKSourceConfiguration.Jsonize());

  }

  if(m_snowflakeDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("SnowflakeDestinationConfiguration", m_snowflakeDestinationConfiguration.Jsonize());

  }

  if(m_icebergDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("IcebergDestinationConfiguration", m_icebergDestinationConfiguration.Jsonize());

  }

  if(m_databaseSourceConfigurationHasBeenSet)
  {
   payload.WithObject("DatabaseSourceConfiguration", m_databaseSourceConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDeliveryStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.CreateDeliveryStream"));
  return headers;

}




