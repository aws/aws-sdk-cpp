/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AutoTune.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AutoTune::AutoTune() : 
    m_autoTuneType(AutoTuneType::NOT_SET),
    m_autoTuneTypeHasBeenSet(false),
    m_autoTuneDetailsHasBeenSet(false)
{
}

AutoTune::AutoTune(JsonView jsonValue) : 
    m_autoTuneType(AutoTuneType::NOT_SET),
    m_autoTuneTypeHasBeenSet(false),
    m_autoTuneDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoTune& AutoTune::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoTuneType"))
  {
    m_autoTuneType = AutoTuneTypeMapper::GetAutoTuneTypeForName(jsonValue.GetString("AutoTuneType"));

    m_autoTuneTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoTuneDetails"))
  {
    m_autoTuneDetails = jsonValue.GetObject("AutoTuneDetails");

    m_autoTuneDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoTune::Jsonize() const
{
  JsonValue payload;

  if(m_autoTuneTypeHasBeenSet)
  {
   payload.WithString("AutoTuneType", AutoTuneTypeMapper::GetNameForAutoTuneType(m_autoTuneType));
  }

  if(m_autoTuneDetailsHasBeenSet)
  {
   payload.WithObject("AutoTuneDetails", m_autoTuneDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
