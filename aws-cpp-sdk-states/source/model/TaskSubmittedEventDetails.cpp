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

#include <aws/states/model/TaskSubmittedEventDetails.h>
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

TaskSubmittedEventDetails::TaskSubmittedEventDetails() : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

TaskSubmittedEventDetails::TaskSubmittedEventDetails(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_outputHasBeenSet(false)
{
  *this = jsonValue;
}

TaskSubmittedEventDetails& TaskSubmittedEventDetails::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetString("output");

    m_outputHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskSubmittedEventDetails::Jsonize() const
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

  if(m_outputHasBeenSet)
  {
   payload.WithString("output", m_output);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
