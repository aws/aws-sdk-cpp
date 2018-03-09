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

#include <aws/mediaconvert/model/MovSettings.h>
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

MovSettings::MovSettings() : 
    m_clapAtom(MovClapAtom::NOT_SET),
    m_clapAtomHasBeenSet(false),
    m_cslgAtom(MovCslgAtom::NOT_SET),
    m_cslgAtomHasBeenSet(false),
    m_mpeg2FourCCControl(MovMpeg2FourCCControl::NOT_SET),
    m_mpeg2FourCCControlHasBeenSet(false),
    m_paddingControl(MovPaddingControl::NOT_SET),
    m_paddingControlHasBeenSet(false),
    m_reference(MovReference::NOT_SET),
    m_referenceHasBeenSet(false)
{
}

MovSettings::MovSettings(const JsonValue& jsonValue) : 
    m_clapAtom(MovClapAtom::NOT_SET),
    m_clapAtomHasBeenSet(false),
    m_cslgAtom(MovCslgAtom::NOT_SET),
    m_cslgAtomHasBeenSet(false),
    m_mpeg2FourCCControl(MovMpeg2FourCCControl::NOT_SET),
    m_mpeg2FourCCControlHasBeenSet(false),
    m_paddingControl(MovPaddingControl::NOT_SET),
    m_paddingControlHasBeenSet(false),
    m_reference(MovReference::NOT_SET),
    m_referenceHasBeenSet(false)
{
  *this = jsonValue;
}

MovSettings& MovSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("clapAtom"))
  {
    m_clapAtom = MovClapAtomMapper::GetMovClapAtomForName(jsonValue.GetString("clapAtom"));

    m_clapAtomHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cslgAtom"))
  {
    m_cslgAtom = MovCslgAtomMapper::GetMovCslgAtomForName(jsonValue.GetString("cslgAtom"));

    m_cslgAtomHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mpeg2FourCCControl"))
  {
    m_mpeg2FourCCControl = MovMpeg2FourCCControlMapper::GetMovMpeg2FourCCControlForName(jsonValue.GetString("mpeg2FourCCControl"));

    m_mpeg2FourCCControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("paddingControl"))
  {
    m_paddingControl = MovPaddingControlMapper::GetMovPaddingControlForName(jsonValue.GetString("paddingControl"));

    m_paddingControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reference"))
  {
    m_reference = MovReferenceMapper::GetMovReferenceForName(jsonValue.GetString("reference"));

    m_referenceHasBeenSet = true;
  }

  return *this;
}

JsonValue MovSettings::Jsonize() const
{
  JsonValue payload;

  if(m_clapAtomHasBeenSet)
  {
   payload.WithString("clapAtom", MovClapAtomMapper::GetNameForMovClapAtom(m_clapAtom));
  }

  if(m_cslgAtomHasBeenSet)
  {
   payload.WithString("cslgAtom", MovCslgAtomMapper::GetNameForMovCslgAtom(m_cslgAtom));
  }

  if(m_mpeg2FourCCControlHasBeenSet)
  {
   payload.WithString("mpeg2FourCCControl", MovMpeg2FourCCControlMapper::GetNameForMovMpeg2FourCCControl(m_mpeg2FourCCControl));
  }

  if(m_paddingControlHasBeenSet)
  {
   payload.WithString("paddingControl", MovPaddingControlMapper::GetNameForMovPaddingControl(m_paddingControl));
  }

  if(m_referenceHasBeenSet)
  {
   payload.WithString("reference", MovReferenceMapper::GetNameForMovReference(m_reference));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
