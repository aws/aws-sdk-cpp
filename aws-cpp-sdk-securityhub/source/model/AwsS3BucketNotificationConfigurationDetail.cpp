/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsS3BucketNotificationConfigurationDetail::AwsS3BucketNotificationConfigurationDetail() : 
    m_eventsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsS3BucketNotificationConfigurationDetail::AwsS3BucketNotificationConfigurationDetail(JsonView jsonValue) : 
    m_eventsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketNotificationConfigurationDetail& AwsS3BucketNotificationConfigurationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsString());
    }
    m_eventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Filter"))
  {
    m_filter = jsonValue.GetObject("Filter");

    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketNotificationConfigurationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsString(m_events[eventsIndex]);
   }
   payload.WithArray("Events", std::move(eventsJsonList));

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
