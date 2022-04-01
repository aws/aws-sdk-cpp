/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/SubscribedWorkteam.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

SubscribedWorkteam::SubscribedWorkteam() : 
    m_workteamArnHasBeenSet(false),
    m_marketplaceTitleHasBeenSet(false),
    m_sellerNameHasBeenSet(false),
    m_marketplaceDescriptionHasBeenSet(false),
    m_listingIdHasBeenSet(false)
{
}

SubscribedWorkteam::SubscribedWorkteam(JsonView jsonValue) : 
    m_workteamArnHasBeenSet(false),
    m_marketplaceTitleHasBeenSet(false),
    m_sellerNameHasBeenSet(false),
    m_marketplaceDescriptionHasBeenSet(false),
    m_listingIdHasBeenSet(false)
{
  *this = jsonValue;
}

SubscribedWorkteam& SubscribedWorkteam::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkteamArn"))
  {
    m_workteamArn = jsonValue.GetString("WorkteamArn");

    m_workteamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MarketplaceTitle"))
  {
    m_marketplaceTitle = jsonValue.GetString("MarketplaceTitle");

    m_marketplaceTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SellerName"))
  {
    m_sellerName = jsonValue.GetString("SellerName");

    m_sellerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MarketplaceDescription"))
  {
    m_marketplaceDescription = jsonValue.GetString("MarketplaceDescription");

    m_marketplaceDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListingId"))
  {
    m_listingId = jsonValue.GetString("ListingId");

    m_listingIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscribedWorkteam::Jsonize() const
{
  JsonValue payload;

  if(m_workteamArnHasBeenSet)
  {
   payload.WithString("WorkteamArn", m_workteamArn);

  }

  if(m_marketplaceTitleHasBeenSet)
  {
   payload.WithString("MarketplaceTitle", m_marketplaceTitle);

  }

  if(m_sellerNameHasBeenSet)
  {
   payload.WithString("SellerName", m_sellerName);

  }

  if(m_marketplaceDescriptionHasBeenSet)
  {
   payload.WithString("MarketplaceDescription", m_marketplaceDescription);

  }

  if(m_listingIdHasBeenSet)
  {
   payload.WithString("ListingId", m_listingId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
