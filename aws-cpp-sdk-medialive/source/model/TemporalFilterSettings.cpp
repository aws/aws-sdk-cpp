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

#include <aws/medialive/model/TemporalFilterSettings.h>
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

TemporalFilterSettings::TemporalFilterSettings() : 
    m_postFilterSharpening(TemporalFilterPostFilterSharpening::NOT_SET),
    m_postFilterSharpeningHasBeenSet(false),
    m_strength(TemporalFilterStrength::NOT_SET),
    m_strengthHasBeenSet(false)
{
}

TemporalFilterSettings::TemporalFilterSettings(JsonView jsonValue) : 
    m_postFilterSharpening(TemporalFilterPostFilterSharpening::NOT_SET),
    m_postFilterSharpeningHasBeenSet(false),
    m_strength(TemporalFilterStrength::NOT_SET),
    m_strengthHasBeenSet(false)
{
  *this = jsonValue;
}

TemporalFilterSettings& TemporalFilterSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("postFilterSharpening"))
  {
    m_postFilterSharpening = TemporalFilterPostFilterSharpeningMapper::GetTemporalFilterPostFilterSharpeningForName(jsonValue.GetString("postFilterSharpening"));

    m_postFilterSharpeningHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strength"))
  {
    m_strength = TemporalFilterStrengthMapper::GetTemporalFilterStrengthForName(jsonValue.GetString("strength"));

    m_strengthHasBeenSet = true;
  }

  return *this;
}

JsonValue TemporalFilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_postFilterSharpeningHasBeenSet)
  {
   payload.WithString("postFilterSharpening", TemporalFilterPostFilterSharpeningMapper::GetNameForTemporalFilterPostFilterSharpening(m_postFilterSharpening));
  }

  if(m_strengthHasBeenSet)
  {
   payload.WithString("strength", TemporalFilterStrengthMapper::GetNameForTemporalFilterStrength(m_strength));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
