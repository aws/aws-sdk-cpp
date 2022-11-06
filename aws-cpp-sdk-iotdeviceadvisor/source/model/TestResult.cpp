/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/TestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

TestResult::TestResult() : 
    m_groupsHasBeenSet(false)
{
}

TestResult::TestResult(JsonView jsonValue) : 
    m_groupsHasBeenSet(false)
{
  *this = jsonValue;
}

TestResult& TestResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
    m_groupsHasBeenSet = true;
  }

  return *this;
}

JsonValue TestResult::Jsonize() const
{
  JsonValue payload;

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsObject(m_groups[groupsIndex].Jsonize());
   }
   payload.WithArray("groups", std::move(groupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
