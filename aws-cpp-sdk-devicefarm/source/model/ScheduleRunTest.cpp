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
#include <aws/devicefarm/model/ScheduleRunTest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

ScheduleRunTest::ScheduleRunTest() : 
    m_type(TestType::NOT_SET),
    m_typeHasBeenSet(false),
    m_testPackageArnHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

ScheduleRunTest::ScheduleRunTest(const JsonValue& jsonValue) : 
    m_type(TestType::NOT_SET),
    m_typeHasBeenSet(false),
    m_testPackageArnHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleRunTest& ScheduleRunTest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = TestTypeMapper::GetTestTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testPackageArn"))
  {
    m_testPackageArn = jsonValue.GetString("testPackageArn");

    m_testPackageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetString("filter");

    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonValue> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleRunTest::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TestTypeMapper::GetNameForTestType(m_type));
  }

  if(m_testPackageArnHasBeenSet)
  {
   payload.WithString("testPackageArn", m_testPackageArn);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithString("filter", m_filter);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws