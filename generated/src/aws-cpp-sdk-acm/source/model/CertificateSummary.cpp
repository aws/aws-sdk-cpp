/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace Model
{

CertificateSummary::CertificateSummary() : 
    m_certificateArnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_subjectAlternativeNameSummariesHasBeenSet(false),
    m_hasAdditionalSubjectAlternativeNames(false),
    m_hasAdditionalSubjectAlternativeNamesHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyAlgorithm(KeyAlgorithm::NOT_SET),
    m_keyAlgorithmHasBeenSet(false),
    m_keyUsagesHasBeenSet(false),
    m_extendedKeyUsagesHasBeenSet(false),
    m_inUse(false),
    m_inUseHasBeenSet(false),
    m_exported(false),
    m_exportedHasBeenSet(false),
    m_renewalEligibility(RenewalEligibility::NOT_SET),
    m_renewalEligibilityHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_importedAtHasBeenSet(false),
    m_revokedAtHasBeenSet(false)
{
}

CertificateSummary::CertificateSummary(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_subjectAlternativeNameSummariesHasBeenSet(false),
    m_hasAdditionalSubjectAlternativeNames(false),
    m_hasAdditionalSubjectAlternativeNamesHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyAlgorithm(KeyAlgorithm::NOT_SET),
    m_keyAlgorithmHasBeenSet(false),
    m_keyUsagesHasBeenSet(false),
    m_extendedKeyUsagesHasBeenSet(false),
    m_inUse(false),
    m_inUseHasBeenSet(false),
    m_exported(false),
    m_exportedHasBeenSet(false),
    m_renewalEligibility(RenewalEligibility::NOT_SET),
    m_renewalEligibilityHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_importedAtHasBeenSet(false),
    m_revokedAtHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateSummary& CertificateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubjectAlternativeNameSummaries"))
  {
    Aws::Utils::Array<JsonView> subjectAlternativeNameSummariesJsonList = jsonValue.GetArray("SubjectAlternativeNameSummaries");
    for(unsigned subjectAlternativeNameSummariesIndex = 0; subjectAlternativeNameSummariesIndex < subjectAlternativeNameSummariesJsonList.GetLength(); ++subjectAlternativeNameSummariesIndex)
    {
      m_subjectAlternativeNameSummaries.push_back(subjectAlternativeNameSummariesJsonList[subjectAlternativeNameSummariesIndex].AsString());
    }
    m_subjectAlternativeNameSummariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HasAdditionalSubjectAlternativeNames"))
  {
    m_hasAdditionalSubjectAlternativeNames = jsonValue.GetBool("HasAdditionalSubjectAlternativeNames");

    m_hasAdditionalSubjectAlternativeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CertificateStatusMapper::GetCertificateStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CertificateTypeMapper::GetCertificateTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyAlgorithm"))
  {
    m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("KeyAlgorithm"));

    m_keyAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyUsages"))
  {
    Aws::Utils::Array<JsonView> keyUsagesJsonList = jsonValue.GetArray("KeyUsages");
    for(unsigned keyUsagesIndex = 0; keyUsagesIndex < keyUsagesJsonList.GetLength(); ++keyUsagesIndex)
    {
      m_keyUsages.push_back(KeyUsageNameMapper::GetKeyUsageNameForName(keyUsagesJsonList[keyUsagesIndex].AsString()));
    }
    m_keyUsagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtendedKeyUsages"))
  {
    Aws::Utils::Array<JsonView> extendedKeyUsagesJsonList = jsonValue.GetArray("ExtendedKeyUsages");
    for(unsigned extendedKeyUsagesIndex = 0; extendedKeyUsagesIndex < extendedKeyUsagesJsonList.GetLength(); ++extendedKeyUsagesIndex)
    {
      m_extendedKeyUsages.push_back(ExtendedKeyUsageNameMapper::GetExtendedKeyUsageNameForName(extendedKeyUsagesJsonList[extendedKeyUsagesIndex].AsString()));
    }
    m_extendedKeyUsagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InUse"))
  {
    m_inUse = jsonValue.GetBool("InUse");

    m_inUseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Exported"))
  {
    m_exported = jsonValue.GetBool("Exported");

    m_exportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenewalEligibility"))
  {
    m_renewalEligibility = RenewalEligibilityMapper::GetRenewalEligibilityForName(jsonValue.GetString("RenewalEligibility"));

    m_renewalEligibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotBefore"))
  {
    m_notBefore = jsonValue.GetDouble("NotBefore");

    m_notBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotAfter"))
  {
    m_notAfter = jsonValue.GetDouble("NotAfter");

    m_notAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IssuedAt"))
  {
    m_issuedAt = jsonValue.GetDouble("IssuedAt");

    m_issuedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedAt"))
  {
    m_importedAt = jsonValue.GetDouble("ImportedAt");

    m_importedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevokedAt"))
  {
    m_revokedAt = jsonValue.GetDouble("RevokedAt");

    m_revokedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("CertificateArn", m_certificateArn);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_subjectAlternativeNameSummariesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subjectAlternativeNameSummariesJsonList(m_subjectAlternativeNameSummaries.size());
   for(unsigned subjectAlternativeNameSummariesIndex = 0; subjectAlternativeNameSummariesIndex < subjectAlternativeNameSummariesJsonList.GetLength(); ++subjectAlternativeNameSummariesIndex)
   {
     subjectAlternativeNameSummariesJsonList[subjectAlternativeNameSummariesIndex].AsString(m_subjectAlternativeNameSummaries[subjectAlternativeNameSummariesIndex]);
   }
   payload.WithArray("SubjectAlternativeNameSummaries", std::move(subjectAlternativeNameSummariesJsonList));

  }

  if(m_hasAdditionalSubjectAlternativeNamesHasBeenSet)
  {
   payload.WithBool("HasAdditionalSubjectAlternativeNames", m_hasAdditionalSubjectAlternativeNames);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateStatusMapper::GetNameForCertificateStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  if(m_keyAlgorithmHasBeenSet)
  {
   payload.WithString("KeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyAlgorithm));
  }

  if(m_keyUsagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keyUsagesJsonList(m_keyUsages.size());
   for(unsigned keyUsagesIndex = 0; keyUsagesIndex < keyUsagesJsonList.GetLength(); ++keyUsagesIndex)
   {
     keyUsagesJsonList[keyUsagesIndex].AsString(KeyUsageNameMapper::GetNameForKeyUsageName(m_keyUsages[keyUsagesIndex]));
   }
   payload.WithArray("KeyUsages", std::move(keyUsagesJsonList));

  }

  if(m_extendedKeyUsagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> extendedKeyUsagesJsonList(m_extendedKeyUsages.size());
   for(unsigned extendedKeyUsagesIndex = 0; extendedKeyUsagesIndex < extendedKeyUsagesJsonList.GetLength(); ++extendedKeyUsagesIndex)
   {
     extendedKeyUsagesJsonList[extendedKeyUsagesIndex].AsString(ExtendedKeyUsageNameMapper::GetNameForExtendedKeyUsageName(m_extendedKeyUsages[extendedKeyUsagesIndex]));
   }
   payload.WithArray("ExtendedKeyUsages", std::move(extendedKeyUsagesJsonList));

  }

  if(m_inUseHasBeenSet)
  {
   payload.WithBool("InUse", m_inUse);

  }

  if(m_exportedHasBeenSet)
  {
   payload.WithBool("Exported", m_exported);

  }

  if(m_renewalEligibilityHasBeenSet)
  {
   payload.WithString("RenewalEligibility", RenewalEligibilityMapper::GetNameForRenewalEligibility(m_renewalEligibility));
  }

  if(m_notBeforeHasBeenSet)
  {
   payload.WithDouble("NotBefore", m_notBefore.SecondsWithMSPrecision());
  }

  if(m_notAfterHasBeenSet)
  {
   payload.WithDouble("NotAfter", m_notAfter.SecondsWithMSPrecision());
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_issuedAtHasBeenSet)
  {
   payload.WithDouble("IssuedAt", m_issuedAt.SecondsWithMSPrecision());
  }

  if(m_importedAtHasBeenSet)
  {
   payload.WithDouble("ImportedAt", m_importedAt.SecondsWithMSPrecision());
  }

  if(m_revokedAtHasBeenSet)
  {
   payload.WithDouble("RevokedAt", m_revokedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
