/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Organization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Organization::Organization() : 
    m_asnHasBeenSet(false),
    m_asnOrgHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_orgHasBeenSet(false)
{
}

Organization::Organization(JsonView jsonValue) : 
    m_asnHasBeenSet(false),
    m_asnOrgHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_orgHasBeenSet(false)
{
  *this = jsonValue;
}

Organization& Organization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("asn"))
  {
    m_asn = jsonValue.GetString("asn");

    m_asnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("asnOrg"))
  {
    m_asnOrg = jsonValue.GetString("asnOrg");

    m_asnOrgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isp"))
  {
    m_isp = jsonValue.GetString("isp");

    m_ispHasBeenSet = true;
  }

  if(jsonValue.ValueExists("org"))
  {
    m_org = jsonValue.GetString("org");

    m_orgHasBeenSet = true;
  }

  return *this;
}

JsonValue Organization::Jsonize() const
{
  JsonValue payload;

  if(m_asnHasBeenSet)
  {
   payload.WithString("asn", m_asn);

  }

  if(m_asnOrgHasBeenSet)
  {
   payload.WithString("asnOrg", m_asnOrg);

  }

  if(m_ispHasBeenSet)
  {
   payload.WithString("isp", m_isp);

  }

  if(m_orgHasBeenSet)
  {
   payload.WithString("org", m_org);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
