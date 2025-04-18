﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DeliveryStreamDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DeliveryStreamDescription::DeliveryStreamDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

DeliveryStreamDescription& DeliveryStreamDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryStreamName"))
  {
    m_deliveryStreamName = jsonValue.GetString("DeliveryStreamName");
    m_deliveryStreamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeliveryStreamARN"))
  {
    m_deliveryStreamARN = jsonValue.GetString("DeliveryStreamARN");
    m_deliveryStreamARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeliveryStreamStatus"))
  {
    m_deliveryStreamStatus = DeliveryStreamStatusMapper::GetDeliveryStreamStatusForName(jsonValue.GetString("DeliveryStreamStatus"));
    m_deliveryStreamStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureDescription"))
  {
    m_failureDescription = jsonValue.GetObject("FailureDescription");
    m_failureDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeliveryStreamEncryptionConfiguration"))
  {
    m_deliveryStreamEncryptionConfiguration = jsonValue.GetObject("DeliveryStreamEncryptionConfiguration");
    m_deliveryStreamEncryptionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeliveryStreamType"))
  {
    m_deliveryStreamType = DeliveryStreamTypeMapper::GetDeliveryStreamTypeForName(jsonValue.GetString("DeliveryStreamType"));
    m_deliveryStreamTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");
    m_versionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("CreateTimestamp");
    m_createTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateTimestamp"))
  {
    m_lastUpdateTimestamp = jsonValue.GetDouble("LastUpdateTimestamp");
    m_lastUpdateTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetObject("Source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HasMoreDestinations"))
  {
    m_hasMoreDestinations = jsonValue.GetBool("HasMoreDestinations");
    m_hasMoreDestinationsHasBeenSet = true;
  }
  return *this;
}

JsonValue DeliveryStreamDescription::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("DeliveryStreamName", m_deliveryStreamName);

  }

  if(m_deliveryStreamARNHasBeenSet)
  {
   payload.WithString("DeliveryStreamARN", m_deliveryStreamARN);

  }

  if(m_deliveryStreamStatusHasBeenSet)
  {
   payload.WithString("DeliveryStreamStatus", DeliveryStreamStatusMapper::GetNameForDeliveryStreamStatus(m_deliveryStreamStatus));
  }

  if(m_failureDescriptionHasBeenSet)
  {
   payload.WithObject("FailureDescription", m_failureDescription.Jsonize());

  }

  if(m_deliveryStreamEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("DeliveryStreamEncryptionConfiguration", m_deliveryStreamEncryptionConfiguration.Jsonize());

  }

  if(m_deliveryStreamTypeHasBeenSet)
  {
   payload.WithString("DeliveryStreamType", DeliveryStreamTypeMapper::GetNameForDeliveryStreamType(m_deliveryStreamType));
  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("CreateTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdateTimestamp", m_lastUpdateTimestamp.SecondsWithMSPrecision());
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  if(m_hasMoreDestinationsHasBeenSet)
  {
   payload.WithBool("HasMoreDestinations", m_hasMoreDestinations);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
