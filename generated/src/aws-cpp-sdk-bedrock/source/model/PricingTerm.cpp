/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PricingTerm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

PricingTerm::PricingTerm(JsonView jsonValue)
{
  *this = jsonValue;
}

PricingTerm& PricingTerm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rateCard"))
  {
    Aws::Utils::Array<JsonView> rateCardJsonList = jsonValue.GetArray("rateCard");
    for(unsigned rateCardIndex = 0; rateCardIndex < rateCardJsonList.GetLength(); ++rateCardIndex)
    {
      m_rateCard.push_back(rateCardJsonList[rateCardIndex].AsObject());
    }
    m_rateCardHasBeenSet = true;
  }
  return *this;
}

JsonValue PricingTerm::Jsonize() const
{
  JsonValue payload;

  if(m_rateCardHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rateCardJsonList(m_rateCard.size());
   for(unsigned rateCardIndex = 0; rateCardIndex < rateCardJsonList.GetLength(); ++rateCardIndex)
   {
     rateCardJsonList[rateCardIndex].AsObject(m_rateCard[rateCardIndex].Jsonize());
   }
   payload.WithArray("rateCard", std::move(rateCardJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
