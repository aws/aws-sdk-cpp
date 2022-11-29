/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/UpdateDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDestinationRequest::UpdateDestinationRequest() : 
    m_deliveryStreamNameHasBeenSet(false),
    m_currentDeliveryStreamVersionIdHasBeenSet(false),
    m_destinationIdHasBeenSet(false),
    m_extendedS3DestinationUpdateHasBeenSet(false),
    m_redshiftDestinationUpdateHasBeenSet(false),
    m_elasticsearchDestinationUpdateHasBeenSet(false),
    m_amazonopensearchserviceDestinationUpdateHasBeenSet(false),
    m_splunkDestinationUpdateHasBeenSet(false),
    m_httpEndpointDestinationUpdateHasBeenSet(false),
    m_amazonOpenSearchServerlessDestinationUpdateHasBeenSet(false)
{
}

Aws::String UpdateDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  if(m_currentDeliveryStreamVersionIdHasBeenSet)
  {
   payload.WithString("CurrentDeliveryStreamVersionId", m_currentDeliveryStreamVersionId);

  }

  if(m_destinationIdHasBeenSet)
  {
   payload.WithString("DestinationId", m_destinationId);

  }

  if(m_extendedS3DestinationUpdateHasBeenSet)
  {
   payload.WithObject("ExtendedS3DestinationUpdate", m_extendedS3DestinationUpdate.Jsonize());

  }

  if(m_redshiftDestinationUpdateHasBeenSet)
  {
   payload.WithObject("RedshiftDestinationUpdate", m_redshiftDestinationUpdate.Jsonize());

  }

  if(m_elasticsearchDestinationUpdateHasBeenSet)
  {
   payload.WithObject("ElasticsearchDestinationUpdate", m_elasticsearchDestinationUpdate.Jsonize());

  }

  if(m_amazonopensearchserviceDestinationUpdateHasBeenSet)
  {
   payload.WithObject("AmazonopensearchserviceDestinationUpdate", m_amazonopensearchserviceDestinationUpdate.Jsonize());

  }

  if(m_splunkDestinationUpdateHasBeenSet)
  {
   payload.WithObject("SplunkDestinationUpdate", m_splunkDestinationUpdate.Jsonize());

  }

  if(m_httpEndpointDestinationUpdateHasBeenSet)
  {
   payload.WithObject("HttpEndpointDestinationUpdate", m_httpEndpointDestinationUpdate.Jsonize());

  }

  if(m_amazonOpenSearchServerlessDestinationUpdateHasBeenSet)
  {
   payload.WithObject("AmazonOpenSearchServerlessDestinationUpdate", m_amazonOpenSearchServerlessDestinationUpdate.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDestinationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.UpdateDestination"));
  return headers;

}




