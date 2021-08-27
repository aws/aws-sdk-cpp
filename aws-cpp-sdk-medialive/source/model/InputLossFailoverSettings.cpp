/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputLossFailoverSettings.h>
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

InputLossFailoverSettings::InputLossFailoverSettings() : 
    m_inputLossThresholdMsec(0),
    m_inputLossThresholdMsecHasBeenSet(false)
{
}

InputLossFailoverSettings::InputLossFailoverSettings(JsonView jsonValue) : 
    m_inputLossThresholdMsec(0),
    m_inputLossThresholdMsecHasBeenSet(false)
{
  *this = jsonValue;
}

InputLossFailoverSettings& InputLossFailoverSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputLossThresholdMsec"))
  {
    m_inputLossThresholdMsec = jsonValue.GetInteger("inputLossThresholdMsec");

    m_inputLossThresholdMsecHasBeenSet = true;
  }

  return *this;
}

JsonValue InputLossFailoverSettings::Jsonize() const
{
  JsonValue payload;

  if(m_inputLossThresholdMsecHasBeenSet)
  {
   payload.WithInteger("inputLossThresholdMsec", m_inputLossThresholdMsec);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
