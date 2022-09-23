/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AudioSpecification.h>
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

AudioSpecification::AudioSpecification() : 
    m_maxLengthMs(0),
    m_maxLengthMsHasBeenSet(false),
    m_endTimeoutMs(0),
    m_endTimeoutMsHasBeenSet(false)
{
}

AudioSpecification::AudioSpecification(JsonView jsonValue) : 
    m_maxLengthMs(0),
    m_maxLengthMsHasBeenSet(false),
    m_endTimeoutMs(0),
    m_endTimeoutMsHasBeenSet(false)
{
  *this = jsonValue;
}

AudioSpecification& AudioSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxLengthMs"))
  {
    m_maxLengthMs = jsonValue.GetInteger("maxLengthMs");

    m_maxLengthMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTimeoutMs"))
  {
    m_endTimeoutMs = jsonValue.GetInteger("endTimeoutMs");

    m_endTimeoutMsHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_maxLengthMsHasBeenSet)
  {
   payload.WithInteger("maxLengthMs", m_maxLengthMs);

  }

  if(m_endTimeoutMsHasBeenSet)
  {
   payload.WithInteger("endTimeoutMs", m_endTimeoutMs);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
