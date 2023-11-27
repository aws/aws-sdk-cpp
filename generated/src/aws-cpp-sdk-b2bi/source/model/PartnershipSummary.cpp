/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/PartnershipSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

PartnershipSummary::PartnershipSummary() : 
    m_profileIdHasBeenSet(false),
    m_partnershipIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tradingPartnerIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
}

PartnershipSummary::PartnershipSummary(JsonView jsonValue) : 
    m_profileIdHasBeenSet(false),
    m_partnershipIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_capabilitiesHasBeenSet(false),
    m_tradingPartnerIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
  *this = jsonValue;
}

PartnershipSummary& PartnershipSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("profileId"))
  {
    m_profileId = jsonValue.GetString("profileId");

    m_profileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partnershipId"))
  {
    m_partnershipId = jsonValue.GetString("partnershipId");

    m_partnershipIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capabilities"))
  {
    Aws::Utils::Array<JsonView> capabilitiesJsonList = jsonValue.GetArray("capabilities");
    for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
    {
      m_capabilities.push_back(capabilitiesJsonList[capabilitiesIndex].AsString());
    }
    m_capabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tradingPartnerId"))
  {
    m_tradingPartnerId = jsonValue.GetString("tradingPartnerId");

    m_tradingPartnerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue PartnershipSummary::Jsonize() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("profileId", m_profileId);

  }

  if(m_partnershipIdHasBeenSet)
  {
   payload.WithString("partnershipId", m_partnershipId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_capabilitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capabilitiesJsonList(m_capabilities.size());
   for(unsigned capabilitiesIndex = 0; capabilitiesIndex < capabilitiesJsonList.GetLength(); ++capabilitiesIndex)
   {
     capabilitiesJsonList[capabilitiesIndex].AsString(m_capabilities[capabilitiesIndex]);
   }
   payload.WithArray("capabilities", std::move(capabilitiesJsonList));

  }

  if(m_tradingPartnerIdHasBeenSet)
  {
   payload.WithString("tradingPartnerId", m_tradingPartnerId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
