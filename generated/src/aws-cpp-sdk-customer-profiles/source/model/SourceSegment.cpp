/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/SourceSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

SourceSegment::SourceSegment(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceSegment& SourceSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SegmentDefinitionName"))
  {
    m_segmentDefinitionName = jsonValue.GetString("SegmentDefinitionName");
    m_segmentDefinitionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceSegment::Jsonize() const
{
  JsonValue payload;

  if(m_segmentDefinitionNameHasBeenSet)
  {
   payload.WithString("SegmentDefinitionName", m_segmentDefinitionName);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
