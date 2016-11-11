/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/acm/model/CertificateDetail.h>
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

CertificateDetail::CertificateDetail() : 
    m_certificateArnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false),
    m_domainValidationOptionsHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_importedAtHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_revocationReason(RevocationReason::NOT_SET),
    m_revocationReasonHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_keyAlgorithm(KeyAlgorithm::NOT_SET),
    m_keyAlgorithmHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false),
    m_inUseByHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

CertificateDetail::CertificateDetail(const JsonValue& jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false),
    m_domainValidationOptionsHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_importedAtHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_revocationReason(RevocationReason::NOT_SET),
    m_revocationReasonHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_keyAlgorithm(KeyAlgorithm::NOT_SET),
    m_keyAlgorithmHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false),
    m_inUseByHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_type(CertificateType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateDetail& CertificateDetail::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("SubjectAlternativeNames"))
  {
    Array<JsonValue> subjectAlternativeNamesJsonList = jsonValue.GetArray("SubjectAlternativeNames");
    for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
    {
      m_subjectAlternativeNames.push_back(subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsString());
    }
    m_subjectAlternativeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainValidationOptions"))
  {
    Array<JsonValue> domainValidationOptionsJsonList = jsonValue.GetArray("DomainValidationOptions");
    for(unsigned domainValidationOptionsIndex = 0; domainValidationOptionsIndex < domainValidationOptionsJsonList.GetLength(); ++domainValidationOptionsIndex)
    {
      m_domainValidationOptions.push_back(domainValidationOptionsJsonList[domainValidationOptionsIndex].AsObject());
    }
    m_domainValidationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Serial"))
  {
    m_serial = jsonValue.GetString("Serial");

    m_serialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetString("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");

    m_issuerHasBeenSet = true;
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CertificateStatusMapper::GetCertificateStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevokedAt"))
  {
    m_revokedAt = jsonValue.GetDouble("RevokedAt");

    m_revokedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevocationReason"))
  {
    m_revocationReason = RevocationReasonMapper::GetRevocationReasonForName(jsonValue.GetString("RevocationReason"));

    m_revocationReasonHasBeenSet = true;
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

  if(jsonValue.ValueExists("KeyAlgorithm"))
  {
    m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("KeyAlgorithm"));

    m_keyAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignatureAlgorithm"))
  {
    m_signatureAlgorithm = jsonValue.GetString("SignatureAlgorithm");

    m_signatureAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InUseBy"))
  {
    Array<JsonValue> inUseByJsonList = jsonValue.GetArray("InUseBy");
    for(unsigned inUseByIndex = 0; inUseByIndex < inUseByJsonList.GetLength(); ++inUseByIndex)
    {
      m_inUseBy.push_back(inUseByJsonList[inUseByIndex].AsString());
    }
    m_inUseByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = FailureReasonMapper::GetFailureReasonForName(jsonValue.GetString("FailureReason"));

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CertificateTypeMapper::GetCertificateTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateDetail::Jsonize() const
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

  if(m_subjectAlternativeNamesHasBeenSet)
  {
   Array<JsonValue> subjectAlternativeNamesJsonList(m_subjectAlternativeNames.size());
   for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
   {
     subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsString(m_subjectAlternativeNames[subjectAlternativeNamesIndex]);
   }
   payload.WithArray("SubjectAlternativeNames", std::move(subjectAlternativeNamesJsonList));

  }

  if(m_domainValidationOptionsHasBeenSet)
  {
   Array<JsonValue> domainValidationOptionsJsonList(m_domainValidationOptions.size());
   for(unsigned domainValidationOptionsIndex = 0; domainValidationOptionsIndex < domainValidationOptionsJsonList.GetLength(); ++domainValidationOptionsIndex)
   {
     domainValidationOptionsJsonList[domainValidationOptionsIndex].AsObject(m_domainValidationOptions[domainValidationOptionsIndex].Jsonize());
   }
   payload.WithArray("DomainValidationOptions", std::move(domainValidationOptionsJsonList));

  }

  if(m_serialHasBeenSet)
  {
   payload.WithString("Serial", m_serial);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("Subject", m_subject);

  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateStatusMapper::GetNameForCertificateStatus(m_status));
  }

  if(m_revokedAtHasBeenSet)
  {
   payload.WithDouble("RevokedAt", m_revokedAt.SecondsWithMSPrecision());
  }

  if(m_revocationReasonHasBeenSet)
  {
   payload.WithString("RevocationReason", RevocationReasonMapper::GetNameForRevocationReason(m_revocationReason));
  }

  if(m_notBeforeHasBeenSet)
  {
   payload.WithDouble("NotBefore", m_notBefore.SecondsWithMSPrecision());
  }

  if(m_notAfterHasBeenSet)
  {
   payload.WithDouble("NotAfter", m_notAfter.SecondsWithMSPrecision());
  }

  if(m_keyAlgorithmHasBeenSet)
  {
   payload.WithString("KeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyAlgorithm));
  }

  if(m_signatureAlgorithmHasBeenSet)
  {
   payload.WithString("SignatureAlgorithm", m_signatureAlgorithm);

  }

  if(m_inUseByHasBeenSet)
  {
   Array<JsonValue> inUseByJsonList(m_inUseBy.size());
   for(unsigned inUseByIndex = 0; inUseByIndex < inUseByJsonList.GetLength(); ++inUseByIndex)
   {
     inUseByJsonList[inUseByIndex].AsString(m_inUseBy[inUseByIndex]);
   }
   payload.WithArray("InUseBy", std::move(inUseByJsonList));

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", FailureReasonMapper::GetNameForFailureReason(m_failureReason));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateTypeMapper::GetNameForCertificateType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws