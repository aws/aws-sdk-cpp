/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_autoSubDomainCreationPatternsHasBeenSet(false),
    m_autoSubDomainIAMRoleHasBeenSet(false),
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
    m_autoSubDomainCreationPatternsHasBeenSet(false),
    m_autoSubDomainIAMRoleHasBeenSet(false),
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

  if(jsonValue.ValueExists("autoSubDomainCreationPatterns"))
  {
    Aws::Utils::Array<JsonView> autoSubDomainCreationPatternsJsonList = jsonValue.GetArray("autoSubDomainCreationPatterns");
    for(unsigned autoSubDomainCreationPatternsIndex = 0; autoSubDomainCreationPatternsIndex < autoSubDomainCreationPatternsJsonList.GetLength(); ++autoSubDomainCreationPatternsIndex)
    {
      m_autoSubDomainCreationPatterns.push_back(autoSubDomainCreationPatternsJsonList[autoSubDomainCreationPatternsIndex].AsString());
    }
    m_autoSubDomainCreationPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoSubDomainIAMRole"))
  {
    m_autoSubDomainIAMRole = jsonValue.GetString("autoSubDomainIAMRole");

    m_autoSubDomainIAMRoleHasBeenSet = true;
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
    Aws::Utils::Array<JsonView> subDomainsJsonList = jsonValue.GetArray("subDomains");
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

  if(m_autoSubDomainCreationPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoSubDomainCreationPatternsJsonList(m_autoSubDomainCreationPatterns.size());
   for(unsigned autoSubDomainCreationPatternsIndex = 0; autoSubDomainCreationPatternsIndex < autoSubDomainCreationPatternsJsonList.GetLength(); ++autoSubDomainCreationPatternsIndex)
   {
     autoSubDomainCreationPatternsJsonList[autoSubDomainCreationPatternsIndex].AsString(m_autoSubDomainCreationPatterns[autoSubDomainCreationPatternsIndex]);
   }
   payload.WithArray("autoSubDomainCreationPatterns", std::move(autoSubDomainCreationPatternsJsonList));

  }

  if(m_autoSubDomainIAMRoleHasBeenSet)
  {
   payload.WithString("autoSubDomainIAMRole", m_autoSubDomainIAMRole);

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
   Aws::Utils::Array<JsonValue> subDomainsJsonList(m_subDomains.size());
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
