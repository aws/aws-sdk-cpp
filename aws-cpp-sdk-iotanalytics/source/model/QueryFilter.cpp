/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
