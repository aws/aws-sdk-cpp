/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CapacityAssignment.h>
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

CapacityAssignment::CapacityAssignment() : 
    m_workGroupNamesHasBeenSet(false)
{
}

CapacityAssignment::CapacityAssignment(JsonView jsonValue) : 
    m_workGroupNamesHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityAssignment& CapacityAssignment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkGroupNames"))
  {
    Aws::Utils::Array<JsonView> workGroupNamesJsonList = jsonValue.GetArray("WorkGroupNames");
    for(unsigned workGroupNamesIndex = 0; workGroupNamesIndex < workGroupNamesJsonList.GetLength(); ++workGroupNamesIndex)
    {
      m_workGroupNames.push_back(workGroupNamesJsonList[workGroupNamesIndex].AsString());
    }
    m_workGroupNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityAssignment::Jsonize() const
{
  JsonValue payload;

  if(m_workGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workGroupNamesJsonList(m_workGroupNames.size());
   for(unsigned workGroupNamesIndex = 0; workGroupNamesIndex < workGroupNamesJsonList.GetLength(); ++workGroupNamesIndex)
   {
     workGroupNamesJsonList[workGroupNamesIndex].AsString(m_workGroupNames[workGroupNamesIndex]);
   }
   payload.WithArray("WorkGroupNames", std::move(workGroupNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
