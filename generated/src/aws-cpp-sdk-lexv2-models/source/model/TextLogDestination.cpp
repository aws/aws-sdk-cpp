/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TextLogDestination.h>
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

TextLogDestination::TextLogDestination() : 
    m_cloudWatchHasBeenSet(false)
{
}

TextLogDestination::TextLogDestination(JsonView jsonValue) : 
    m_cloudWatchHasBeenSet(false)
{
  *this = jsonValue;
}

TextLogDestination& TextLogDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatch"))
  {
    m_cloudWatch = jsonValue.GetObject("cloudWatch");

    m_cloudWatchHasBeenSet = true;
  }

  return *this;
}

JsonValue TextLogDestination::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchHasBeenSet)
  {
   payload.WithObject("cloudWatch", m_cloudWatch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
