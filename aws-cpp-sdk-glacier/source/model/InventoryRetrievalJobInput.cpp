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
#include <aws/glacier/model/InventoryRetrievalJobInput.h>
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

InventoryRetrievalJobInput::InventoryRetrievalJobInput() : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

InventoryRetrievalJobInput::InventoryRetrievalJobInput(const JsonValue& jsonValue) : 
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryRetrievalJobInput& InventoryRetrievalJobInput::operator =(const JsonValue& jsonValue)
{
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

JsonValue InventoryRetrievalJobInput::Jsonize() const
{
  JsonValue payload;

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