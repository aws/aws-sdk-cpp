/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/MarketplaceInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

MarketplaceInformation::MarketplaceInformation() : 
    m_productIdHasBeenSet(false),
    m_productUrlHasBeenSet(false)
{
}

MarketplaceInformation::MarketplaceInformation(JsonView jsonValue) : 
    m_productIdHasBeenSet(false),
    m_productUrlHasBeenSet(false)
{
  *this = jsonValue;
}

MarketplaceInformation& MarketplaceInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("productId"))
  {
    m_productId = jsonValue.GetString("productId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productUrl"))
  {
    m_productUrl = jsonValue.GetString("productUrl");

    m_productUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue MarketplaceInformation::Jsonize() const
{
  JsonValue payload;

  if(m_productIdHasBeenSet)
  {
   payload.WithString("productId", m_productId);

  }

  if(m_productUrlHasBeenSet)
  {
   payload.WithString("productUrl", m_productUrl);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
