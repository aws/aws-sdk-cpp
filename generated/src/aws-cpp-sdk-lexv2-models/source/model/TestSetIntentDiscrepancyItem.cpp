/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetIntentDiscrepancyItem.h>
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

TestSetIntentDiscrepancyItem::TestSetIntentDiscrepancyItem() : 
    m_intentNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

TestSetIntentDiscrepancyItem::TestSetIntentDiscrepancyItem(JsonView jsonValue) : 
    m_intentNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetIntentDiscrepancyItem& TestSetIntentDiscrepancyItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("intentName"))
  {
    m_intentName = jsonValue.GetString("intentName");

    m_intentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetIntentDiscrepancyItem::Jsonize() const
{
  JsonValue payload;

  if(m_intentNameHasBeenSet)
  {
   payload.WithString("intentName", m_intentName);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
