/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/MeteredProductSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

MeteredProductSummary::MeteredProductSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MeteredProductSummary& MeteredProductSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("productId"))
  {
    m_productId = jsonValue.GetString("productId");
    m_productIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("family"))
  {
    m_family = jsonValue.GetString("family");
    m_familyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vendor"))
  {
    m_vendor = jsonValue.GetString("vendor");
    m_vendorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  return *this;
}

JsonValue MeteredProductSummary::Jsonize() const
{
  JsonValue payload;

  if(m_productIdHasBeenSet)
  {
   payload.WithString("productId", m_productId);

  }

  if(m_familyHasBeenSet)
  {
   payload.WithString("family", m_family);

  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("vendor", m_vendor);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
