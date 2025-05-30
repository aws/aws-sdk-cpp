﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ScheduleRunTest::ScheduleRunTest(JsonView jsonValue)
{
  *this = jsonValue;
}

ScheduleRunTest& ScheduleRunTest::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("testSpecArn"))
  {
    m_testSpecArn = jsonValue.GetString("testSpecArn");
    m_testSpecArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetString("filter");
    m_filterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("parameters").GetAllObjects();
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

  if(m_testSpecArnHasBeenSet)
  {
   payload.WithString("testSpecArn", m_testSpecArn);

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
