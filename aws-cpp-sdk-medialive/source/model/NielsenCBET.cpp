/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NielsenCBET.h>
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

NielsenCBET::NielsenCBET() : 
    m_cbetCheckDigitStringHasBeenSet(false),
    m_cbetStepaside(NielsenWatermarksCbetStepaside::NOT_SET),
    m_cbetStepasideHasBeenSet(false),
    m_csidHasBeenSet(false)
{
}

NielsenCBET::NielsenCBET(JsonView jsonValue) : 
    m_cbetCheckDigitStringHasBeenSet(false),
    m_cbetStepaside(NielsenWatermarksCbetStepaside::NOT_SET),
    m_cbetStepasideHasBeenSet(false),
    m_csidHasBeenSet(false)
{
  *this = jsonValue;
}

NielsenCBET& NielsenCBET::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cbetCheckDigitString"))
  {
    m_cbetCheckDigitString = jsonValue.GetString("cbetCheckDigitString");

    m_cbetCheckDigitStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cbetStepaside"))
  {
    m_cbetStepaside = NielsenWatermarksCbetStepasideMapper::GetNielsenWatermarksCbetStepasideForName(jsonValue.GetString("cbetStepaside"));

    m_cbetStepasideHasBeenSet = true;
  }

  if(jsonValue.ValueExists("csid"))
  {
    m_csid = jsonValue.GetString("csid");

    m_csidHasBeenSet = true;
  }

  return *this;
}

JsonValue NielsenCBET::Jsonize() const
{
  JsonValue payload;

  if(m_cbetCheckDigitStringHasBeenSet)
  {
   payload.WithString("cbetCheckDigitString", m_cbetCheckDigitString);

  }

  if(m_cbetStepasideHasBeenSet)
  {
   payload.WithString("cbetStepaside", NielsenWatermarksCbetStepasideMapper::GetNameForNielsenWatermarksCbetStepaside(m_cbetStepaside));
  }

  if(m_csidHasBeenSet)
  {
   payload.WithString("csid", m_csid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
