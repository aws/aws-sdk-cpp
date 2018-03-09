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

#include <aws/medialive/model/InputLossBehavior.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

InputLossBehavior::InputLossBehavior() : 
    m_blackFrameMsec(0),
    m_blackFrameMsecHasBeenSet(false),
    m_inputLossImageColorHasBeenSet(false),
    m_inputLossImageSlateHasBeenSet(false),
    m_inputLossImageType(InputLossImageType::NOT_SET),
    m_inputLossImageTypeHasBeenSet(false),
    m_repeatFrameMsec(0),
    m_repeatFrameMsecHasBeenSet(false)
{
}

InputLossBehavior::InputLossBehavior(const JsonValue& jsonValue) : 
    m_blackFrameMsec(0),
    m_blackFrameMsecHasBeenSet(false),
    m_inputLossImageColorHasBeenSet(false),
    m_inputLossImageSlateHasBeenSet(false),
    m_inputLossImageType(InputLossImageType::NOT_SET),
    m_inputLossImageTypeHasBeenSet(false),
    m_repeatFrameMsec(0),
    m_repeatFrameMsecHasBeenSet(false)
{
  *this = jsonValue;
}

InputLossBehavior& InputLossBehavior::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("blackFrameMsec"))
  {
    m_blackFrameMsec = jsonValue.GetInteger("blackFrameMsec");

    m_blackFrameMsecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossImageColor"))
  {
    m_inputLossImageColor = jsonValue.GetString("inputLossImageColor");

    m_inputLossImageColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossImageSlate"))
  {
    m_inputLossImageSlate = jsonValue.GetObject("inputLossImageSlate");

    m_inputLossImageSlateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossImageType"))
  {
    m_inputLossImageType = InputLossImageTypeMapper::GetInputLossImageTypeForName(jsonValue.GetString("inputLossImageType"));

    m_inputLossImageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repeatFrameMsec"))
  {
    m_repeatFrameMsec = jsonValue.GetInteger("repeatFrameMsec");

    m_repeatFrameMsecHasBeenSet = true;
  }

  return *this;
}

JsonValue InputLossBehavior::Jsonize() const
{
  JsonValue payload;

  if(m_blackFrameMsecHasBeenSet)
  {
   payload.WithInteger("blackFrameMsec", m_blackFrameMsec);

  }

  if(m_inputLossImageColorHasBeenSet)
  {
   payload.WithString("inputLossImageColor", m_inputLossImageColor);

  }

  if(m_inputLossImageSlateHasBeenSet)
  {
   payload.WithObject("inputLossImageSlate", m_inputLossImageSlate.Jsonize());

  }

  if(m_inputLossImageTypeHasBeenSet)
  {
   payload.WithString("inputLossImageType", InputLossImageTypeMapper::GetNameForInputLossImageType(m_inputLossImageType));
  }

  if(m_repeatFrameMsecHasBeenSet)
  {
   payload.WithInteger("repeatFrameMsec", m_repeatFrameMsec);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
