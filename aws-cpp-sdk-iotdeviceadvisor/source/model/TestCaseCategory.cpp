/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/TestCaseCategory.h>
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

TestCaseCategory::TestCaseCategory() : 
    m_nameHasBeenSet(false),
    m_testsHasBeenSet(false)
{
}

TestCaseCategory::TestCaseCategory(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_testsHasBeenSet(false)
{
  *this = jsonValue;
}

TestCaseCategory& TestCaseCategory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tests"))
  {
    Array<JsonView> testsJsonList = jsonValue.GetArray("tests");
    for(unsigned testsIndex = 0; testsIndex < testsJsonList.GetLength(); ++testsIndex)
    {
      m_tests.push_back(testsJsonList[testsIndex].AsObject());
    }
    m_testsHasBeenSet = true;
  }

  return *this;
}

JsonValue TestCaseCategory::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_testsHasBeenSet)
  {
   Array<JsonValue> testsJsonList(m_tests.size());
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
