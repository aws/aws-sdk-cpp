/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCertificateManagerCertificateDetails.h>
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

AwsCertificateManagerCertificateDetails::AwsCertificateManagerCertificateDetails() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainValidationOptionsHasBeenSet(false),
    m_extendedKeyUsagesHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_importedAtHasBeenSet(false),
    m_inUseByHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_keyAlgorithmHasBeenSet(false),
    m_keyUsagesHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_renewalEligibilityHasBeenSet(false),
    m_renewalSummaryHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

AwsCertificateManagerCertificateDetails::AwsCertificateManagerCertificateDetails(JsonView jsonValue) : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainValidationOptionsHasBeenSet(false),
    m_extendedKeyUsagesHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_importedAtHasBeenSet(false),
    m_inUseByHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_keyAlgorithmHasBeenSet(false),
    m_keyUsagesHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_renewalEligibilityHasBeenSet(false),
    m_renewalSummaryHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCertificateManagerCertificateDetails& AwsCertificateManagerCertificateDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateAuthorityArn"))
  {
    m_certificateAuthorityArn = jsonValue.GetString("CertificateAuthorityArn");

    m_certificateAuthorityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainValidationOptions"))
  {
    Aws::Utils::Array<JsonView> domainValidationOptionsJsonList = jsonValue.GetArray("DomainValidationOptions");
    for(unsigned domainValidationOptionsIndex = 0; domainValidationOptionsIndex < domainValidationOptionsJsonList.GetLength(); ++domainValidationOptionsIndex)
    {
      m_domainValidationOptions.push_back(domainValidationOptionsJsonList[domainValidationOptionsIndex].AsObject());
    }
    m_domainValidationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtendedKeyUsages"))
  {
    Aws::Utils::Array<JsonView> extendedKeyUsagesJsonList = jsonValue.GetArray("ExtendedKeyUsages");
    for(unsigned extendedKeyUsagesIndex = 0; extendedKeyUsagesIndex < extendedKeyUsagesJsonList.GetLength(); ++extendedKeyUsagesIndex)
    {
      m_extendedKeyUsages.push_back(extendedKeyUsagesJsonList[extendedKeyUsagesIndex].AsObject());
    }
    m_extendedKeyUsagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedAt"))
  {
    m_importedAt = jsonValue.GetString("ImportedAt");

    m_importedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InUseBy"))
  {
    Aws::Utils::Array<JsonView> inUseByJsonList = jsonValue.GetArray("InUseBy");
    for(unsigned inUseByIndex = 0; inUseByIndex < inUseByJsonList.GetLength(); ++inUseByIndex)
    {
      m_inUseBy.push_back(inUseByJsonList[inUseByIndex].AsString());
    }
    m_inUseByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IssuedAt"))
  {
    m_issuedAt = jsonValue.GetString("IssuedAt");

    m_issuedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyAlgorithm"))
  {
    m_keyAlgorithm = jsonValue.GetString("KeyAlgorithm");

    m_keyAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyUsages"))
  {
    Aws::Utils::Array<JsonView> keyUsagesJsonList = jsonValue.GetArray("KeyUsages");
    for(unsigned keyUsagesIndex = 0; keyUsagesIndex < keyUsagesJsonList.GetLength(); ++keyUsagesIndex)
    {
      m_keyUsages.push_back(keyUsagesJsonList[keyUsagesIndex].AsObject());
    }
    m_keyUsagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotAfter"))
  {
    m_notAfter = jsonValue.GetString("NotAfter");

    m_notAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotBefore"))
  {
    m_notBefore = jsonValue.GetString("NotBefore");

    m_notBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Options"))
  {
    m_options = jsonValue.GetObject("Options");

    m_optionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenewalEligibility"))
  {
    m_renewalEligibility = jsonValue.GetString("RenewalEligibility");

    m_renewalEligibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RenewalSummary"))
  {
    m_renewalSummary = jsonValue.GetObject("RenewalSummary");

    m_renewalSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Serial"))
  {
    m_serial = jsonValue.GetString("Serial");

    m_serialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignatureAlgorithm"))
  {
    m_signatureAlgorithm = jsonValue.GetString("SignatureAlgorithm");

    m_signatureAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubjectAlternativeNames"))
  {
    Aws::Utils::Array<JsonView> subjectAlternativeNamesJsonList = jsonValue.GetArray("SubjectAlternativeNames");
    for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
    {
      m_subjectAlternativeNames.push_back(subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsString());
    }
    m_subjectAlternativeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCertificateManagerCertificateDetails::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_domainValidationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainValidationOptionsJsonList(m_domainValidationOptions.size());
   for(unsigned domainValidationOptionsIndex = 0; domainValidationOptionsIndex < domainValidationOptionsJsonList.GetLength(); ++domainValidationOptionsIndex)
   {
     domainValidationOptionsJsonList[domainValidationOptionsIndex].AsObject(m_domainValidationOptions[domainValidationOptionsIndex].Jsonize());
   }
   payload.WithArray("DomainValidationOptions", std::move(domainValidationOptionsJsonList));

  }

  if(m_extendedKeyUsagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> extendedKeyUsagesJsonList(m_extendedKeyUsages.size());
   for(unsigned extendedKeyUsagesIndex = 0; extendedKeyUsagesIndex < extendedKeyUsagesJsonList.GetLength(); ++extendedKeyUsagesIndex)
   {
     extendedKeyUsagesJsonList[extendedKeyUsagesIndex].AsObject(m_extendedKeyUsages[extendedKeyUsagesIndex].Jsonize());
   }
   payload.WithArray("ExtendedKeyUsages", std::move(extendedKeyUsagesJsonList));

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  if(m_importedAtHasBeenSet)
  {
   payload.WithString("ImportedAt", m_importedAt);

  }

  if(m_inUseByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inUseByJsonList(m_inUseBy.size());
   for(unsigned inUseByIndex = 0; inUseByIndex < inUseByJsonList.GetLength(); ++inUseByIndex)
   {
     inUseByJsonList[inUseByIndex].AsString(m_inUseBy[inUseByIndex]);
   }
   payload.WithArray("InUseBy", std::move(inUseByJsonList));

  }

  if(m_issuedAtHasBeenSet)
  {
   payload.WithString("IssuedAt", m_issuedAt);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  if(m_keyAlgorithmHasBeenSet)
  {
   payload.WithString("KeyAlgorithm", m_keyAlgorithm);

  }

  if(m_keyUsagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> keyUsagesJsonList(m_keyUsages.size());
   for(unsigned keyUsagesIndex = 0; keyUsagesIndex < keyUsagesJsonList.GetLength(); ++keyUsagesIndex)
   {
     keyUsagesJsonList[keyUsagesIndex].AsObject(m_keyUsages[keyUsagesIndex].Jsonize());
   }
   payload.WithArray("KeyUsages", std::move(keyUsagesJsonList));

  }

  if(m_notAfterHasBeenSet)
  {
   payload.WithString("NotAfter", m_notAfter);

  }

  if(m_notBeforeHasBeenSet)
  {
   payload.WithString("NotBefore", m_notBefore);

  }

  if(m_optionsHasBeenSet)
  {
   payload.WithObject("Options", m_options.Jsonize());

  }

  if(m_renewalEligibilityHasBeenSet)
  {
   payload.WithString("RenewalEligibility", m_renewalEligibility);

  }

  if(m_renewalSummaryHasBeenSet)
  {
   payload.WithObject("RenewalSummary", m_renewalSummary.Jsonize());

  }

  if(m_serialHasBeenSet)
  {
   payload.WithString("Serial", m_serial);

  }

  if(m_signatureAlgorithmHasBeenSet)
  {
   payload.WithString("SignatureAlgorithm", m_signatureAlgorithm);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_subjectAlternativeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subjectAlternativeNamesJsonList(m_subjectAlternativeNames.size());
   for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
   {
     subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsString(m_subjectAlternativeNames[subjectAlternativeNamesIndex]);
   }
   payload.WithArray("SubjectAlternativeNames", std::move(subjectAlternativeNamesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
