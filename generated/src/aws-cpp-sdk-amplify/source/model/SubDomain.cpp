/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/SubDomain.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

SubDomain::SubDomain() : 
    m_subDomainSettingHasBeenSet(false),
    m_verified(false),
    m_verifiedHasBeenSet(false),
    m_dnsRecordHasBeenSet(false)
{
}

SubDomain::SubDomain(JsonView jsonValue) : 
    m_subDomainSettingHasBeenSet(false),
    m_verified(false),
    m_verifiedHasBeenSet(false),
    m_dnsRecordHasBeenSet(false)
{
  *this = jsonValue;
}

SubDomain& SubDomain::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subDomainSetting"))
  {
    m_subDomainSetting = jsonValue.GetObject("subDomainSetting");

    m_subDomainSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("verified"))
  {
    m_verified = jsonValue.GetBool("verified");

    m_verifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsRecord"))
  {
    m_dnsRecord = jsonValue.GetString("dnsRecord");

    m_dnsRecordHasBeenSet = true;
  }

  return *this;
}

JsonValue SubDomain::Jsonize() const
{
  JsonValue payload;

  if(m_subDomainSettingHasBeenSet)
  {
   payload.WithObject("subDomainSetting", m_subDomainSetting.Jsonize());

  }

  if(m_verifiedHasBeenSet)
  {
   payload.WithBool("verified", m_verified);

  }

  if(m_dnsRecordHasBeenSet)
  {
   payload.WithString("dnsRecord", m_dnsRecord);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
