/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/GroupResult.h>
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

GroupResult::GroupResult() : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_testsHasBeenSet(false)
{
}

GroupResult::GroupResult(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_testsHasBeenSet(false)
{
  *this = jsonValue;
}

GroupResult& GroupResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupId"))
  {
    m_groupId = jsonValue.GetString("groupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tests"))
  {
    Aws::Utils::Array<JsonView> testsJsonList = jsonValue.GetArray("tests");
    for(unsigned testsIndex = 0; testsIndex < testsJsonList.GetLength(); ++testsIndex)
    {
      m_tests.push_back(testsJsonList[testsIndex].AsObject());
    }
    m_testsHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupResult::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("groupId", m_groupId);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_testsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> testsJsonList(m_tests.size());
   for(unsigned testsIndex = 0; testsIndex < testsJsonList.GetLength(); ++testsIndex)
   {
     testsJsonList[testsIndex].AsObject(m_tests[testsIndex].Jsonize());
   }
   payload.WithArray("tests", std::move(testsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
