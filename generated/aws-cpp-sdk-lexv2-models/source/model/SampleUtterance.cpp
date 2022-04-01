/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SampleUtterance.h>
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

SampleUtterance::SampleUtterance() : 
    m_utteranceHasBeenSet(false)
{
}

SampleUtterance::SampleUtterance(JsonView jsonValue) : 
    m_utteranceHasBeenSet(false)
{
  *this = jsonValue;
}

SampleUtterance& SampleUtterance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("utterance"))
  {
    m_utterance = jsonValue.GetString("utterance");

    m_utteranceHasBeenSet = true;
  }

  return *this;
}

JsonValue SampleUtterance::Jsonize() const
{
  JsonValue payload;

  if(m_utteranceHasBeenSet)
  {
   payload.WithString("utterance", m_utterance);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
