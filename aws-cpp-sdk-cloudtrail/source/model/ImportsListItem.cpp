/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ImportsListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

ImportsListItem::ImportsListItem() : 
    m_importIdHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
}

ImportsListItem::ImportsListItem(JsonView jsonValue) : 
    m_importIdHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ImportsListItem& ImportsListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImportId"))
  {
    m_importId = jsonValue.GetString("ImportId");

    m_importIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("ImportStatus"));

    m_importStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsString());
    }
    m_destinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetDouble("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportsListItem::Jsonize() const
{
  JsonValue payload;

  if(m_importIdHasBeenSet)
  {
   payload.WithString("ImportId", m_importId);

  }

  if(m_importStatusHasBeenSet)
  {
   payload.WithString("ImportStatus", ImportStatusMapper::GetNameForImportStatus(m_importStatus));
  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsString(m_destinations[destinationsIndex]);
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithDouble("UpdatedTimestamp", m_updatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
