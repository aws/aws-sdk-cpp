﻿/*
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

#include <aws/pinpoint/model/SegmentBehaviors.h>
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

SegmentBehaviors::SegmentBehaviors() : 
    m_recencyHasBeenSet(false)
{
}

SegmentBehaviors::SegmentBehaviors(JsonView jsonValue) : 
    m_recencyHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentBehaviors& SegmentBehaviors::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Recency"))
  {
    m_recency = jsonValue.GetObject("Recency");

    m_recencyHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentBehaviors::Jsonize() const
{
  JsonValue payload;

  if(m_recencyHasBeenSet)
  {
   payload.WithObject("Recency", m_recency.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
