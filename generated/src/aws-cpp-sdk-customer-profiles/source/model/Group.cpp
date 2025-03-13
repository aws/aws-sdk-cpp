/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Group.h>
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

Group::Group(JsonView jsonValue)
{
  *this = jsonValue;
}

Group& Group::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceSegments"))
  {
    Aws::Utils::Array<JsonView> sourceSegmentsJsonList = jsonValue.GetArray("SourceSegments");
    for(unsigned sourceSegmentsIndex = 0; sourceSegmentsIndex < sourceSegmentsJsonList.GetLength(); ++sourceSegmentsIndex)
    {
      m_sourceSegments.push_back(sourceSegmentsJsonList[sourceSegmentsIndex].AsObject());
    }
    m_sourceSegmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = IncludeOptionsMapper::GetIncludeOptionsForName(jsonValue.GetString("SourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = IncludeOptionsMapper::GetIncludeOptionsForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Group::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  if(m_sourceSegmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceSegmentsJsonList(m_sourceSegments.size());
   for(unsigned sourceSegmentsIndex = 0; sourceSegmentsIndex < sourceSegmentsJsonList.GetLength(); ++sourceSegmentsIndex)
   {
     sourceSegmentsJsonList[sourceSegmentsIndex].AsObject(m_sourceSegments[sourceSegmentsIndex].Jsonize());
   }
   payload.WithArray("SourceSegments", std::move(sourceSegmentsJsonList));

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", IncludeOptionsMapper::GetNameForIncludeOptions(m_sourceType));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", IncludeOptionsMapper::GetNameForIncludeOptions(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
