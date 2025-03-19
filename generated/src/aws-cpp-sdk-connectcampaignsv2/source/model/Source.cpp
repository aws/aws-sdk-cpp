/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/Source.h>
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

Source::Source(JsonView jsonValue)
{
  *this = jsonValue;
}

Source& Source::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customerProfilesSegmentArn"))
  {
    m_customerProfilesSegmentArn = jsonValue.GetString("customerProfilesSegmentArn");
    m_customerProfilesSegmentArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventTrigger"))
  {
    m_eventTrigger = jsonValue.GetObject("eventTrigger");
    m_eventTriggerHasBeenSet = true;
  }
  return *this;
}

JsonValue Source::Jsonize() const
{
  JsonValue payload;

  if(m_customerProfilesSegmentArnHasBeenSet)
  {
   payload.WithString("customerProfilesSegmentArn", m_customerProfilesSegmentArn);

  }

  if(m_eventTriggerHasBeenSet)
  {
   payload.WithObject("eventTrigger", m_eventTrigger.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
