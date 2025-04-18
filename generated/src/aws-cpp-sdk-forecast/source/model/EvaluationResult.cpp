﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/EvaluationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

EvaluationResult::EvaluationResult(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationResult& EvaluationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlgorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("AlgorithmArn");
    m_algorithmArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TestWindows"))
  {
    Aws::Utils::Array<JsonView> testWindowsJsonList = jsonValue.GetArray("TestWindows");
    for(unsigned testWindowsIndex = 0; testWindowsIndex < testWindowsJsonList.GetLength(); ++testWindowsIndex)
    {
      m_testWindows.push_back(testWindowsJsonList[testWindowsIndex].AsObject());
    }
    m_testWindowsHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationResult::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmArnHasBeenSet)
  {
   payload.WithString("AlgorithmArn", m_algorithmArn);

  }

  if(m_testWindowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> testWindowsJsonList(m_testWindows.size());
   for(unsigned testWindowsIndex = 0; testWindowsIndex < testWindowsJsonList.GetLength(); ++testWindowsIndex)
   {
     testWindowsJsonList[testWindowsIndex].AsObject(m_testWindows[testWindowsIndex].Jsonize());
   }
   payload.WithArray("TestWindows", std::move(testWindowsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
