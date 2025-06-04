/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/CurrencyExchangeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

CurrencyExchangeDetails::CurrencyExchangeDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

CurrencyExchangeDetails& CurrencyExchangeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceCurrencyCode"))
  {
    m_sourceCurrencyCode = jsonValue.GetString("SourceCurrencyCode");
    m_sourceCurrencyCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetCurrencyCode"))
  {
    m_targetCurrencyCode = jsonValue.GetString("TargetCurrencyCode");
    m_targetCurrencyCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Rate"))
  {
    m_rate = jsonValue.GetString("Rate");
    m_rateHasBeenSet = true;
  }
  return *this;
}

JsonValue CurrencyExchangeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_sourceCurrencyCodeHasBeenSet)
  {
   payload.WithString("SourceCurrencyCode", m_sourceCurrencyCode);

  }

  if(m_targetCurrencyCodeHasBeenSet)
  {
   payload.WithString("TargetCurrencyCode", m_targetCurrencyCode);

  }

  if(m_rateHasBeenSet)
  {
   payload.WithString("Rate", m_rate);

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
