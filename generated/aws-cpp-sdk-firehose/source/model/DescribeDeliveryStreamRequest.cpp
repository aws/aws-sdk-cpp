/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DescribeDeliveryStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDeliveryStreamRequest::DescribeDeliveryStreamRequest() : 
    m_deliveryStreamNameHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_exclusiveStartDestinationIdHasBeenSet(false)
{
}

Aws::String DescribeDeliveryStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_exclusiveStartDestinationIdHasBeenSet)
  {
   payload.WithString("ExclusiveStartDestinationId", m_exclusiveStartDestinationId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeDeliveryStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Firehose_20150804.DescribeDeliveryStream"));
  return headers;

}




