/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/Offer.h>
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

Offer::Offer(JsonView jsonValue)
{
  *this = jsonValue;
}

Offer& Offer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("offerId"))
  {
    m_offerId = jsonValue.GetString("offerId");
    m_offerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offerToken"))
  {
    m_offerToken = jsonValue.GetString("offerToken");
    m_offerTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("termDetails"))
  {
    m_termDetails = jsonValue.GetObject("termDetails");
    m_termDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue Offer::Jsonize() const
{
  JsonValue payload;

  if(m_offerIdHasBeenSet)
  {
   payload.WithString("offerId", m_offerId);

  }

  if(m_offerTokenHasBeenSet)
  {
   payload.WithString("offerToken", m_offerToken);

  }

  if(m_termDetailsHasBeenSet)
  {
   payload.WithObject("termDetails", m_termDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
