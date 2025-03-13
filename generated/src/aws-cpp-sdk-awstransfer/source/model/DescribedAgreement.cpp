/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedAgreement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedAgreement::DescribedAgreement(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribedAgreement& DescribedAgreement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgreementId"))
  {
    m_agreementId = jsonValue.GetString("AgreementId");
    m_agreementIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = AgreementStatusTypeMapper::GetAgreementStatusTypeForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");
    m_serverIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocalProfileId"))
  {
    m_localProfileId = jsonValue.GetString("LocalProfileId");
    m_localProfileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartnerProfileId"))
  {
    m_partnerProfileId = jsonValue.GetString("PartnerProfileId");
    m_partnerProfileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BaseDirectory"))
  {
    m_baseDirectory = jsonValue.GetString("BaseDirectory");
    m_baseDirectoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessRole"))
  {
    m_accessRole = jsonValue.GetString("AccessRole");
    m_accessRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreserveFilename"))
  {
    m_preserveFilename = PreserveFilenameTypeMapper::GetPreserveFilenameTypeForName(jsonValue.GetString("PreserveFilename"));
    m_preserveFilenameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnforceMessageSigning"))
  {
    m_enforceMessageSigning = EnforceMessageSigningTypeMapper::GetEnforceMessageSigningTypeForName(jsonValue.GetString("EnforceMessageSigning"));
    m_enforceMessageSigningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomDirectories"))
  {
    m_customDirectories = jsonValue.GetObject("CustomDirectories");
    m_customDirectoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribedAgreement::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_agreementIdHasBeenSet)
  {
   payload.WithString("AgreementId", m_agreementId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AgreementStatusTypeMapper::GetNameForAgreementStatusType(m_status));
  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_localProfileIdHasBeenSet)
  {
   payload.WithString("LocalProfileId", m_localProfileId);

  }

  if(m_partnerProfileIdHasBeenSet)
  {
   payload.WithString("PartnerProfileId", m_partnerProfileId);

  }

  if(m_baseDirectoryHasBeenSet)
  {
   payload.WithString("BaseDirectory", m_baseDirectory);

  }

  if(m_accessRoleHasBeenSet)
  {
   payload.WithString("AccessRole", m_accessRole);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_preserveFilenameHasBeenSet)
  {
   payload.WithString("PreserveFilename", PreserveFilenameTypeMapper::GetNameForPreserveFilenameType(m_preserveFilename));
  }

  if(m_enforceMessageSigningHasBeenSet)
  {
   payload.WithString("EnforceMessageSigning", EnforceMessageSigningTypeMapper::GetNameForEnforceMessageSigningType(m_enforceMessageSigning));
  }

  if(m_customDirectoriesHasBeenSet)
  {
   payload.WithObject("CustomDirectories", m_customDirectories.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
