/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/RuntimeSettings.h>
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

RuntimeSettings::RuntimeSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

RuntimeSettings& RuntimeSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slotResolutionImprovement"))
  {
    m_slotResolutionImprovement = jsonValue.GetObject("slotResolutionImprovement");
    m_slotResolutionImprovementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nluImprovement"))
  {
    m_nluImprovement = jsonValue.GetObject("nluImprovement");
    m_nluImprovementHasBeenSet = true;
  }
  return *this;
}

JsonValue RuntimeSettings::Jsonize() const
{
  JsonValue payload;

  if(m_slotResolutionImprovementHasBeenSet)
  {
   payload.WithObject("slotResolutionImprovement", m_slotResolutionImprovement.Jsonize());

  }

  if(m_nluImprovementHasBeenSet)
  {
   payload.WithObject("nluImprovement", m_nluImprovement.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
