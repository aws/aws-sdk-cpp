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

Landmark::Landmark(const JsonValue& jsonValue) : 
    m_type(LandmarkType::NOT_SET),
    m_typeHasBeenSet(false),
    m_x(0.0),
    m_xHasBeenSet(false),
    m_y(0.0),
    m_yHasBeenSet(false)
{
  *this = jsonValue;
}

Landmark& Landmark::operator =(const JsonValue& jsonValue)
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