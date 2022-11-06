/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/TimeSignalMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

TimeSignalMessage::TimeSignalMessage() : 
    m_segmentationDescriptorsHasBeenSet(false)
{
}

TimeSignalMessage::TimeSignalMessage(JsonView jsonValue) : 
    m_segmentationDescriptorsHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSignalMessage& TimeSignalMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SegmentationDescriptors"))
  {
    Aws::Utils::Array<JsonView> segmentationDescriptorsJsonList = jsonValue.GetArray("SegmentationDescriptors");
    for(unsigned segmentationDescriptorsIndex = 0; segmentationDescriptorsIndex < segmentationDescriptorsJsonList.GetLength(); ++segmentationDescriptorsIndex)
    {
      m_segmentationDescriptors.push_back(segmentationDescriptorsJsonList[segmentationDescriptorsIndex].AsObject());
    }
    m_segmentationDescriptorsHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSignalMessage::Jsonize() const
{
  JsonValue payload;

  if(m_segmentationDescriptorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentationDescriptorsJsonList(m_segmentationDescriptors.size());
   for(unsigned segmentationDescriptorsIndex = 0; segmentationDescriptorsIndex < segmentationDescriptorsJsonList.GetLength(); ++segmentationDescriptorsIndex)
   {
     segmentationDescriptorsJsonList[segmentationDescriptorsIndex].AsObject(m_segmentationDescriptors[segmentationDescriptorsIndex].Jsonize());
   }
   payload.WithArray("SegmentationDescriptors", std::move(segmentationDescriptorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
