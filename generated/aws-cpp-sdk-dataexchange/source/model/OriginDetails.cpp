/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/OriginDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

OriginDetails::OriginDetails() : 
    m_productIdHasBeenSet(false)
{
}

OriginDetails::OriginDetails(JsonView jsonValue) : 
    m_productIdHasBeenSet(false)
{
  *this = jsonValue;
}

OriginDetails& OriginDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  return *this;
}

JsonValue OriginDetails::Jsonize() const
{
  JsonValue payload;

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
