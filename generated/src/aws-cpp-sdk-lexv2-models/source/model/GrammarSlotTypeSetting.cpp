/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/GrammarSlotTypeSetting.h>
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

GrammarSlotTypeSetting::GrammarSlotTypeSetting() : 
    m_sourceHasBeenSet(false)
{
}

GrammarSlotTypeSetting::GrammarSlotTypeSetting(JsonView jsonValue) : 
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

GrammarSlotTypeSetting& GrammarSlotTypeSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue GrammarSlotTypeSetting::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
