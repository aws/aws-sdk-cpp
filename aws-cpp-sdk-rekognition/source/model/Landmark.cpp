/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/Landmark.h>
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

Landmark::Landmark() : 
    m_type(LandmarkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_x(0.0),
    m_xHasBeenSet(false),
    m_y(0.0),
    m_yHasBeenSet(false)
{
}

Landmark::Landmark(JsonView jsonValue) : 
    m_type(LandmarkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_x(0.0),
    m_xHasBeenSet(false),
    m_y(0.0),
    m_yHasBeenSet(false)
{
  *this = jsonValue;
}

Landmark& Landmark::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = LandmarkTypeMapper::GetLandmarkTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("X"))
  {
    m_x = jsonValue.GetDouble("X");

    m_xHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Y"))
  {
    m_y = jsonValue.GetDouble("Y");

    m_yHasBeenSet = true;
  }

  return *this;
}

JsonValue Landmark::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", LandmarkTypeMapper::GetNameForLandmarkType(m_type));
  }

  if(m_xHasBeenSet)
  {
   payload.WithDouble("X", m_x);

  }

  if(m_yHasBeenSet)
  {
   payload.WithDouble("Y", m_y);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
