/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CapacityAssignmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

CapacityAssignmentConfiguration::CapacityAssignmentConfiguration() : 
    m_capacityReservationNameHasBeenSet(false),
    m_capacityAssignmentsHasBeenSet(false)
{
}

CapacityAssignmentConfiguration::CapacityAssignmentConfiguration(JsonView jsonValue) : 
    m_capacityReservationNameHasBeenSet(false),
    m_capacityAssignmentsHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityAssignmentConfiguration& CapacityAssignmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CapacityReservationName"))
  {
    m_capacityReservationName = jsonValue.GetString("CapacityReservationName");

    m_capacityReservationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityAssignments"))
  {
    Aws::Utils::Array<JsonView> capacityAssignmentsJsonList = jsonValue.GetArray("CapacityAssignments");
    for(unsigned capacityAssignmentsIndex = 0; capacityAssignmentsIndex < capacityAssignmentsJsonList.GetLength(); ++capacityAssignmentsIndex)
    {
      m_capacityAssignments.push_back(capacityAssignmentsJsonList[capacityAssignmentsIndex].AsObject());
    }
    m_capacityAssignmentsHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityAssignmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_capacityReservationNameHasBeenSet)
  {
   payload.WithString("CapacityReservationName", m_capacityReservationName);

  }

  if(m_capacityAssignmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityAssignmentsJsonList(m_capacityAssignments.size());
   for(unsigned capacityAssignmentsIndex = 0; capacityAssignmentsIndex < capacityAssignmentsJsonList.GetLength(); ++capacityAssignmentsIndex)
   {
     capacityAssignmentsJsonList[capacityAssignmentsIndex].AsObject(m_capacityAssignments[capacityAssignmentsIndex].Jsonize());
   }
   payload.WithArray("CapacityAssignments", std::move(capacityAssignmentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
