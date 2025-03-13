/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/IntegrationIdentifier.h>
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

IntegrationIdentifier::IntegrationIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

IntegrationIdentifier& IntegrationIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customerProfiles"))
  {
    m_customerProfiles = jsonValue.GetObject("customerProfiles");
    m_customerProfilesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qConnect"))
  {
    m_qConnect = jsonValue.GetObject("qConnect");
    m_qConnectHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_customerProfilesHasBeenSet)
  {
   payload.WithObject("customerProfiles", m_customerProfiles.Jsonize());

  }

  if(m_qConnectHasBeenSet)
  {
   payload.WithObject("qConnect", m_qConnect.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
