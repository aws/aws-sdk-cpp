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

#include <aws/mediaconvert/model/Mp4Settings.h>
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

Mp4Settings::Mp4Settings() : 
    m_cslgAtom(Mp4CslgAtom::NOT_SET),
    m_cslgAtomHasBeenSet(false),
    m_cttsVersion(0),
    m_cttsVersionHasBeenSet(false),
    m_freeSpaceBox(Mp4FreeSpaceBox::NOT_SET),
    m_freeSpaceBoxHasBeenSet(false),
    m_moovPlacement(Mp4MoovPlacement::NOT_SET),
    m_moovPlacementHasBeenSet(false),
    m_mp4MajorBrandHasBeenSet(false)
{
}

Mp4Settings::Mp4Settings(JsonView jsonValue) : 
    m_cslgAtom(Mp4CslgAtom::NOT_SET),
    m_cslgAtomHasBeenSet(false),
    m_cttsVersion(0),
    m_cttsVersionHasBeenSet(false),
    m_freeSpaceBox(Mp4FreeSpaceBox::NOT_SET),
    m_freeSpaceBoxHasBeenSet(false),
    m_moovPlacement(Mp4MoovPlacement::NOT_SET),
    m_moovPlacementHasBeenSet(false),
    m_mp4MajorBrandHasBeenSet(false)
{
  *this = jsonValue;
}

Mp4Settings& Mp4Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cslgAtom"))
  {
    m_cslgAtom = Mp4CslgAtomMapper::GetMp4CslgAtomForName(jsonValue.GetString("cslgAtom"));

    m_cslgAtomHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cttsVersion"))
  {
    m_cttsVersion = jsonValue.GetInteger("cttsVersion");

    m_cttsVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("freeSpaceBox"))
  {
    m_freeSpaceBox = Mp4FreeSpaceBoxMapper::GetMp4FreeSpaceBoxForName(jsonValue.GetString("freeSpaceBox"));

    m_freeSpaceBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("moovPlacement"))
  {
    m_moovPlacement = Mp4MoovPlacementMapper::GetMp4MoovPlacementForName(jsonValue.GetString("moovPlacement"));

    m_moovPlacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mp4MajorBrand"))
  {
    m_mp4MajorBrand = jsonValue.GetString("mp4MajorBrand");

    m_mp4MajorBrandHasBeenSet = true;
  }

  return *this;
}

JsonValue Mp4Settings::Jsonize() const
{
  JsonValue payload;

  if(m_cslgAtomHasBeenSet)
  {
   payload.WithString("cslgAtom", Mp4CslgAtomMapper::GetNameForMp4CslgAtom(m_cslgAtom));
  }

  if(m_cttsVersionHasBeenSet)
  {
   payload.WithInteger("cttsVersion", m_cttsVersion);

  }

  if(m_freeSpaceBoxHasBeenSet)
  {
   payload.WithString("freeSpaceBox", Mp4FreeSpaceBoxMapper::GetNameForMp4FreeSpaceBox(m_freeSpaceBox));
  }

  if(m_moovPlacementHasBeenSet)
  {
   payload.WithString("moovPlacement", Mp4MoovPlacementMapper::GetNameForMp4MoovPlacement(m_moovPlacement));
  }

  if(m_mp4MajorBrandHasBeenSet)
  {
   payload.WithString("mp4MajorBrand", m_mp4MajorBrand);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
