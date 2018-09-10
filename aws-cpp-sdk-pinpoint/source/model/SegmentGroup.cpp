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

#include <aws/pinpoint/model/SegmentGroup.h>
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

SegmentGroup::SegmentGroup() : 
    m_dimensionsHasBeenSet(false),
    m_sourceSegmentsHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SegmentGroup::SegmentGroup(JsonView jsonValue) : 
    m_dimensionsHasBeenSet(false),
    m_sourceSegmentsHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentGroup& SegmentGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceSegments"))
  {
    Array<JsonView> sourceSegmentsJsonList = jsonValue.GetArray("SourceSegments");
    for(unsigned sourceSegmentsIndex = 0; sourceSegmentsIndex < sourceSegmentsJsonList.GetLength(); ++sourceSegmentsIndex)
    {
      m_sourceSegments.push_back(sourceSegmentsJsonList[sourceSegmentsIndex].AsObject());
    }
    m_sourceSegmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("SourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentGroup::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  if(m_sourceSegmentsHasBeenSet)
  {
   Array<JsonValue> sourceSegmentsJsonList(m_sourceSegments.size());
   for(unsigned sourceSegmentsIndex = 0; sourceSegmentsIndex < sourceSegmentsJsonList.GetLength(); ++sourceSegmentsIndex)
   {
     sourceSegmentsJsonList[sourceSegmentsIndex].AsObject(m_sourceSegments[sourceSegmentsIndex].Jsonize());
   }
   payload.WithArray("SourceSegments", std::move(sourceSegmentsJsonList));

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
