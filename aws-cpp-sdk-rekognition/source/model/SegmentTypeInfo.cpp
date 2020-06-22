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

#include <aws/rekognition/model/SegmentTypeInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

SegmentTypeInfo::SegmentTypeInfo() : 
    m_type(SegmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
}

SegmentTypeInfo::SegmentTypeInfo(JsonView jsonValue) : 
    m_type(SegmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_modelVersionHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentTypeInfo& SegmentTypeInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SegmentTypeMapper::GetSegmentTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetString("ModelVersion");

    m_modelVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentTypeInfo::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SegmentTypeMapper::GetNameForSegmentType(m_type));
  }

  if(m_modelVersionHasBeenSet)
  {
   payload.WithString("ModelVersion", m_modelVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
