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

#include <aws/mediaconvert/model/DolbyVision.h>
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

DolbyVision::DolbyVision() : 
    m_l6MetadataHasBeenSet(false),
    m_l6Mode(DolbyVisionLevel6Mode::NOT_SET),
    m_l6ModeHasBeenSet(false),
    m_profile(DolbyVisionProfile::NOT_SET),
    m_profileHasBeenSet(false)
{
}

DolbyVision::DolbyVision(JsonView jsonValue) : 
    m_l6MetadataHasBeenSet(false),
    m_l6Mode(DolbyVisionLevel6Mode::NOT_SET),
    m_l6ModeHasBeenSet(false),
    m_profile(DolbyVisionProfile::NOT_SET),
    m_profileHasBeenSet(false)
{
  *this = jsonValue;
}

DolbyVision& DolbyVision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("l6Metadata"))
  {
    m_l6Metadata = jsonValue.GetObject("l6Metadata");

    m_l6MetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("l6Mode"))
  {
    m_l6Mode = DolbyVisionLevel6ModeMapper::GetDolbyVisionLevel6ModeForName(jsonValue.GetString("l6Mode"));

    m_l6ModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = DolbyVisionProfileMapper::GetDolbyVisionProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  return *this;
}

JsonValue DolbyVision::Jsonize() const
{
  JsonValue payload;

  if(m_l6MetadataHasBeenSet)
  {
   payload.WithObject("l6Metadata", m_l6Metadata.Jsonize());

  }

  if(m_l6ModeHasBeenSet)
  {
   payload.WithString("l6Mode", DolbyVisionLevel6ModeMapper::GetNameForDolbyVisionLevel6Mode(m_l6Mode));
  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", DolbyVisionProfileMapper::GetNameForDolbyVisionProfile(m_profile));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
