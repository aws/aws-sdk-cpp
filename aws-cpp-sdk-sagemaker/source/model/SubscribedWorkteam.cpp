/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
