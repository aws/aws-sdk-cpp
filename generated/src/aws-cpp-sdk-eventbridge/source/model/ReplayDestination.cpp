﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ReplayDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

ReplayDestination::ReplayDestination(JsonView jsonValue)
{
  *this = jsonValue;
}

ReplayDestination& ReplayDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FilterArns"))
  {
    Aws::Utils::Array<JsonView> filterArnsJsonList = jsonValue.GetArray("FilterArns");
    for(unsigned filterArnsIndex = 0; filterArnsIndex < filterArnsJsonList.GetLength(); ++filterArnsIndex)
    {
      m_filterArns.push_back(filterArnsJsonList[filterArnsIndex].AsString());
    }
    m_filterArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplayDestination::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_filterArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filterArnsJsonList(m_filterArns.size());
   for(unsigned filterArnsIndex = 0; filterArnsIndex < filterArnsJsonList.GetLength(); ++filterArnsIndex)
   {
     filterArnsJsonList[filterArnsIndex].AsString(m_filterArns[filterArnsIndex]);
   }
   payload.WithArray("FilterArns", std::move(filterArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
