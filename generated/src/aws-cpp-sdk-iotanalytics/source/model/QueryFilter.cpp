/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/QueryFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

QueryFilter::QueryFilter() : 
    m_deltaTimeHasBeenSet(false)
{
}

QueryFilter::QueryFilter(JsonView jsonValue) : 
    m_deltaTimeHasBeenSet(false)
{
  *this = jsonValue;
}

QueryFilter& QueryFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deltaTime"))
  {
    m_deltaTime = jsonValue.GetObject("deltaTime");

    m_deltaTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryFilter::Jsonize() const
{
  JsonValue payload;

  if(m_deltaTimeHasBeenSet)
  {
   payload.WithObject("deltaTime", m_deltaTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
