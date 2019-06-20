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

#include <aws/glue/model/TriggerNodeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TriggerNodeDetails::TriggerNodeDetails() : 
    m_triggerHasBeenSet(false)
{
}

TriggerNodeDetails::TriggerNodeDetails(JsonView jsonValue) : 
    m_triggerHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerNodeDetails& TriggerNodeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Trigger"))
  {
    m_trigger = jsonValue.GetObject("Trigger");

    m_triggerHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerNodeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_triggerHasBeenSet)
  {
   payload.WithObject("Trigger", m_trigger.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
