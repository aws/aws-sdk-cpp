/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/CampaignFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

CampaignFilters::CampaignFilters() : 
    m_instanceIdFilterHasBeenSet(false)
{
}

CampaignFilters::CampaignFilters(JsonView jsonValue) : 
    m_instanceIdFilterHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignFilters& CampaignFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceIdFilter"))
  {
    m_instanceIdFilter = jsonValue.GetObject("instanceIdFilter");

    m_instanceIdFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue CampaignFilters::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdFilterHasBeenSet)
  {
   payload.WithObject("instanceIdFilter", m_instanceIdFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
