/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentClosingSetting.h>
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

IntentClosingSetting::IntentClosingSetting() : 
    m_closingResponseHasBeenSet(false)
{
}

IntentClosingSetting::IntentClosingSetting(JsonView jsonValue) : 
    m_closingResponseHasBeenSet(false)
{
  *this = jsonValue;
}

IntentClosingSetting& IntentClosingSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("closingResponse"))
  {
    m_closingResponse = jsonValue.GetObject("closingResponse");

    m_closingResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue IntentClosingSetting::Jsonize() const
{
  JsonValue payload;

  if(m_closingResponseHasBeenSet)
  {
   payload.WithObject("closingResponse", m_closingResponse.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
