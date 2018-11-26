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

#include <aws/amplify/model/DomainAssociation.h>
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

DomainAssociation::DomainAssociation() : 
    m_domainAssociationArnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_enableAutoSubDomain(false),
    m_enableAutoSubDomainHasBeenSet(false),
    m_domainStatus(DomainStatus::NOT_SET),
    m_domainStatusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_certificateVerificationDNSRecordHasBeenSet(false),
    m_subDomainsHasBeenSet(false)
{
}

DomainAssociation::DomainAssociation(JsonView jsonValue) : 
    m_domainAssociationArnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_enableAutoSubDomain(false),
    m_enableAutoSubDomainHasBeenSet(false),
    m_domainStatus(DomainStatus::NOT_SET),
    m_domainStatusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_certificateVerificationDNSRecordHasBeenSet(false),
    m_subDomainsHasBeenSet(false)
{
  *this = jsonValue;
}

DomainAssociation& DomainAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainAssociationArn"))
  {
    m_domainAssociationArn = jsonValue.GetString("domainAssociationArn");

    m_domainAssociationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableAutoSubDomain"))
  {
    m_enableAutoSubDomain = jsonValue.GetBool("enableAutoSubDomain");

    m_enableAutoSubDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainStatus"))
  {
    m_domainStatus = DomainStatusMapper::GetDomainStatusForName(jsonValue.GetString("domainStatus"));

    m_domainStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateVerificationDNSRecord"))
  {
    m_certificateVerificationDNSRecord = jsonValue.GetString("certificateVerificationDNSRecord");

    m_certificateVerificationDNSRecordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subDomains"))
  {
    Array<JsonView> subDomainsJsonList = jsonValue.GetArray("subDomains");
    for(unsigned subDomainsIndex = 0; subDomainsIndex < subDomainsJsonList.GetLength(); ++subDomainsIndex)
    {
      m_subDomains.push_back(subDomainsJsonList[subDomainsIndex].AsObject());
    }
    m_subDomainsHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_domainAssociationArnHasBeenSet)
  {
   payload.WithString("domainAssociationArn", m_domainAssociationArn);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_enableAutoSubDomainHasBeenSet)
  {
   payload.WithBool("enableAutoSubDomain", m_enableAutoSubDomain);

  }

  if(m_domainStatusHasBeenSet)
  {
   payload.WithString("domainStatus", DomainStatusMapper::GetNameForDomainStatus(m_domainStatus));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_certificateVerificationDNSRecordHasBeenSet)
  {
   payload.WithString("certificateVerificationDNSRecord", m_certificateVerificationDNSRecord);

  }

  if(m_subDomainsHasBeenSet)
  {
   Array<JsonValue> subDomainsJsonList(m_subDomains.size());
   for(unsigned subDomainsIndex = 0; subDomainsIndex < subDomainsJsonList.GetLength(); ++subDomainsIndex)
   {
     subDomainsJsonList[subDomainsIndex].AsObject(m_subDomains[subDomainsIndex].Jsonize());
   }
   payload.WithArray("subDomains", std::move(subDomainsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
