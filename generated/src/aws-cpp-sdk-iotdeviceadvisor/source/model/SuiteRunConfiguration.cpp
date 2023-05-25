/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/SuiteRunConfiguration.h>
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

SuiteRunConfiguration::SuiteRunConfiguration() : 
    m_primaryDeviceHasBeenSet(false),
    m_selectedTestListHasBeenSet(false),
    m_parallelRun(false),
    m_parallelRunHasBeenSet(false)
{
}

SuiteRunConfiguration::SuiteRunConfiguration(JsonView jsonValue) : 
    m_primaryDeviceHasBeenSet(false),
    m_selectedTestListHasBeenSet(false),
    m_parallelRun(false),
    m_parallelRunHasBeenSet(false)
{
  *this = jsonValue;
}

SuiteRunConfiguration& SuiteRunConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("primaryDevice"))
  {
    m_primaryDevice = jsonValue.GetObject("primaryDevice");

    m_primaryDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectedTestList"))
  {
    Aws::Utils::Array<JsonView> selectedTestListJsonList = jsonValue.GetArray("selectedTestList");
    for(unsigned selectedTestListIndex = 0; selectedTestListIndex < selectedTestListJsonList.GetLength(); ++selectedTestListIndex)
    {
      m_selectedTestList.push_back(selectedTestListJsonList[selectedTestListIndex].AsString());
    }
    m_selectedTestListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parallelRun"))
  {
    m_parallelRun = jsonValue.GetBool("parallelRun");

    m_parallelRunHasBeenSet = true;
  }

  return *this;
}

JsonValue SuiteRunConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_primaryDeviceHasBeenSet)
  {
   payload.WithObject("primaryDevice", m_primaryDevice.Jsonize());

  }

  if(m_selectedTestListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> selectedTestListJsonList(m_selectedTestList.size());
   for(unsigned selectedTestListIndex = 0; selectedTestListIndex < selectedTestListJsonList.GetLength(); ++selectedTestListIndex)
   {
     selectedTestListJsonList[selectedTestListIndex].AsString(m_selectedTestList[selectedTestListIndex]);
   }
   payload.WithArray("selectedTestList", std::move(selectedTestListJsonList));

  }

  if(m_parallelRunHasBeenSet)
  {
   payload.WithBool("parallelRun", m_parallelRun);

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
