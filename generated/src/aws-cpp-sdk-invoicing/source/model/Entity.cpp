/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/Entity.h>
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

Entity::Entity(JsonView jsonValue)
{
  *this = jsonValue;
}

Entity& Entity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvoicingEntity"))
  {
    m_invoicingEntity = jsonValue.GetString("InvoicingEntity");
    m_invoicingEntityHasBeenSet = true;
  }
  return *this;
}

JsonValue Entity::Jsonize() const
{
  JsonValue payload;

  if(m_invoicingEntityHasBeenSet)
  {
   payload.WithString("InvoicingEntity", m_invoicingEntity);

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
