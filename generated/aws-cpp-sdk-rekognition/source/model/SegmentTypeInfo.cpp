/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
