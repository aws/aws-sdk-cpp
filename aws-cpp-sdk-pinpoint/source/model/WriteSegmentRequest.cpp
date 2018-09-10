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

#include <aws/pinpoint/model/WriteSegmentRequest.h>
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

WriteSegmentRequest::WriteSegmentRequest() : 
    m_dimensionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_segmentGroupsHasBeenSet(false)
{
}

WriteSegmentRequest::WriteSegmentRequest(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_segmentGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

WriteSegmentRequest& WriteSegmentRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    m_dimensions = jsonValue.GetObject("Dimensions");

    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SegmentGroups"))
  {
    m_segmentGroups = jsonValue.GetObject("SegmentGroups");

    m_segmentGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue WriteSegmentRequest::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   payload.WithObject("Dimensions", m_dimensions.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_segmentGroupsHasBeenSet)
  {
   payload.WithObject("SegmentGroups", m_segmentGroups.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
