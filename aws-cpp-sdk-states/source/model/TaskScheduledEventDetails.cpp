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

#include <aws/states/model/TaskScheduledEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

TaskScheduledEventDetails::TaskScheduledEventDetails() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false)
{
}

TaskScheduledEventDetails::TaskScheduledEventDetails(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

TaskScheduledEventDetails& TaskScheduledEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetString("parameters");

    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInt64("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskScheduledEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_parametersHasBeenSet)
  {
   payload.WithString("parameters", m_parameters);

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInt64("timeoutInSeconds", m_timeoutInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
