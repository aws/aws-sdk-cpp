/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/EventTrigger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

EventTrigger::EventTrigger(JsonView jsonValue)
{
  *this = jsonValue;
}

EventTrigger& EventTrigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customerProfilesDomainArn"))
  {
    m_customerProfilesDomainArn = jsonValue.GetString("customerProfilesDomainArn");
    m_customerProfilesDomainArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EventTrigger::Jsonize() const
{
  JsonValue payload;

  if(m_customerProfilesDomainArnHasBeenSet)
  {
   payload.WithString("customerProfilesDomainArn", m_customerProfilesDomainArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
