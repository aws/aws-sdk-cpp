/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/LineItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

LineItemRequest::LineItemRequest() : 
    m_catalogItemIdHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false)
{
}

LineItemRequest::LineItemRequest(JsonView jsonValue) : 
    m_catalogItemIdHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false)
{
  *this = jsonValue;
}

LineItemRequest& LineItemRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogItemId"))
  {
    m_catalogItemId = jsonValue.GetString("CatalogItemId");

    m_catalogItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Quantity"))
  {
    m_quantity = jsonValue.GetInteger("Quantity");

    m_quantityHasBeenSet = true;
  }

  return *this;
}

JsonValue LineItemRequest::Jsonize() const
{
  JsonValue payload;

  if(m_catalogItemIdHasBeenSet)
  {
   payload.WithString("CatalogItemId", m_catalogItemId);

  }

  if(m_quantityHasBeenSet)
  {
   payload.WithInteger("Quantity", m_quantity);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
