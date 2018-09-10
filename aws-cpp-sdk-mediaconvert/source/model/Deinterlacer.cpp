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

#include <aws/mediaconvert/model/Deinterlacer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Deinterlacer::Deinterlacer() : 
    m_algorithm(DeinterlaceAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_control(DeinterlacerControl::NOT_SET),
    m_controlHasBeenSet(false),
    m_mode(DeinterlacerMode::NOT_SET),
    m_modeHasBeenSet(false)
{
}

Deinterlacer::Deinterlacer(JsonView jsonValue) : 
    m_algorithm(DeinterlaceAlgorithm::NOT_SET),
    m_algorithmHasBeenSet(false),
    m_control(DeinterlacerControl::NOT_SET),
    m_controlHasBeenSet(false),
    m_mode(DeinterlacerMode::NOT_SET),
    m_modeHasBeenSet(false)
{
  *this = jsonValue;
}

Deinterlacer& Deinterlacer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("algorithm"))
  {
    m_algorithm = DeinterlaceAlgorithmMapper::GetDeinterlaceAlgorithmForName(jsonValue.GetString("algorithm"));

    m_algorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("control"))
  {
    m_control = DeinterlacerControlMapper::GetDeinterlacerControlForName(jsonValue.GetString("control"));

    m_controlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mode"))
  {
    m_mode = DeinterlacerModeMapper::GetDeinterlacerModeForName(jsonValue.GetString("mode"));

    m_modeHasBeenSet = true;
  }

  return *this;
}

JsonValue Deinterlacer::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmHasBeenSet)
  {
   payload.WithString("algorithm", DeinterlaceAlgorithmMapper::GetNameForDeinterlaceAlgorithm(m_algorithm));
  }

  if(m_controlHasBeenSet)
  {
   payload.WithString("control", DeinterlacerControlMapper::GetNameForDeinterlacerControl(m_control));
  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("mode", DeinterlacerModeMapper::GetNameForDeinterlacerMode(m_mode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
