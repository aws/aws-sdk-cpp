/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/IpOrganizationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

IpOrganizationDetails::IpOrganizationDetails() : 
    m_asn(0),
    m_asnHasBeenSet(false),
    m_asnOrgHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_orgHasBeenSet(false)
{
}

IpOrganizationDetails::IpOrganizationDetails(JsonView jsonValue) : 
    m_asn(0),
    m_asnHasBeenSet(false),
    m_asnOrgHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_orgHasBeenSet(false)
{
  *this = jsonValue;
}

IpOrganizationDetails& IpOrganizationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Asn"))
  {
    m_asn = jsonValue.GetInteger("Asn");

    m_asnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AsnOrg"))
  {
    m_asnOrg = jsonValue.GetString("AsnOrg");

    m_asnOrgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Isp"))
  {
    m_isp = jsonValue.GetString("Isp");

    m_ispHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Org"))
  {
    m_org = jsonValue.GetString("Org");

    m_orgHasBeenSet = true;
  }

  return *this;
}

JsonValue IpOrganizationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_asnHasBeenSet)
  {
   payload.WithInteger("Asn", m_asn);

  }

  if(m_asnOrgHasBeenSet)
  {
   payload.WithString("AsnOrg", m_asnOrg);

  }

  if(m_ispHasBeenSet)
  {
   payload.WithString("Isp", m_isp);

  }

  if(m_orgHasBeenSet)
  {
   payload.WithString("Org", m_org);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
