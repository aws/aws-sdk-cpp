/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/CustomerProfilesIntegrationIdentifier.h>
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

CustomerProfilesIntegrationIdentifier::CustomerProfilesIntegrationIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomerProfilesIntegrationIdentifier& CustomerProfilesIntegrationIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainArn"))
  {
    m_domainArn = jsonValue.GetString("domainArn");
    m_domainArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerProfilesIntegrationIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_domainArnHasBeenSet)
  {
   payload.WithString("domainArn", m_domainArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
