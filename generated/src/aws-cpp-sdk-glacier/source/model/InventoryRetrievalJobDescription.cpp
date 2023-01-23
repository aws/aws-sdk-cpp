/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/InventoryRetrievalJobDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

InventoryRetrievalJobDescription::InventoryRetrievalJobDescription() : 
    m_formatHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

InventoryRetrievalJobDescription::InventoryRetrievalJobDescription(JsonView jsonValue) : 
    m_formatHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryRetrievalJobDescription& InventoryRetrievalJobDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Format"))
  {
    m_format = jsonValue.GetString("Format");

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetString("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetString("EndDate");

    m_endDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetString("Limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

    m_markerHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryRetrievalJobDescription::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", m_format);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithString("StartDate", m_startDate);

  }

  if(m_endDateHasBeenSet)
  {
   payload.WithString("EndDate", m_endDate);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithString("Limit", m_limit);

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
