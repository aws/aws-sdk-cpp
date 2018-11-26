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
