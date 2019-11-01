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

#include <aws/pinpoint/model/StartCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

StartCondition::StartCondition() : 
    m_descriptionHasBeenSet(false),
    m_segmentStartConditionHasBeenSet(false)
{
}

StartCondition::StartCondition(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_segmentStartConditionHasBeenSet(false)
{
  *this = jsonValue;
}

StartCondition& StartCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentStartCondition"))
  {
    m_segmentStartCondition = jsonValue.GetObject("SegmentStartCondition");

    m_segmentStartConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue StartCondition::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_segmentStartConditionHasBeenSet)
  {
   payload.WithObject("SegmentStartCondition", m_segmentStartCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
