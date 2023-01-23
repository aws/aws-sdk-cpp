/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AllowedInputTypes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AllowedInputTypes::AllowedInputTypes() : 
    m_allowAudioInput(false),
    m_allowAudioInputHasBeenSet(false),
    m_allowDTMFInput(false),
    m_allowDTMFInputHasBeenSet(false)
{
}

AllowedInputTypes::AllowedInputTypes(JsonView jsonValue) : 
    m_allowAudioInput(false),
    m_allowAudioInputHasBeenSet(false),
    m_allowDTMFInput(false),
    m_allowDTMFInputHasBeenSet(false)
{
  *this = jsonValue;
}

AllowedInputTypes& AllowedInputTypes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowAudioInput"))
  {
    m_allowAudioInput = jsonValue.GetBool("allowAudioInput");

    m_allowAudioInputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowDTMFInput"))
  {
    m_allowDTMFInput = jsonValue.GetBool("allowDTMFInput");

    m_allowDTMFInputHasBeenSet = true;
  }

  return *this;
}

JsonValue AllowedInputTypes::Jsonize() const
{
  JsonValue payload;

  if(m_allowAudioInputHasBeenSet)
  {
   payload.WithBool("allowAudioInput", m_allowAudioInput);

  }

  if(m_allowDTMFInputHasBeenSet)
  {
   payload.WithBool("allowDTMFInput", m_allowDTMFInput);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
