/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Certificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Certificate::Certificate() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false),
    m_domainValidationRecordsHasBeenSet(false),
    m_requestFailureReasonHasBeenSet(false),
    m_inUseResourceCount(0),
    m_inUseResourceCountHasBeenSet(false),
    m_keyAlgorithmHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_issuerCAHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_eligibleToRenewHasBeenSet(false),
    m_renewalSummaryHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_revocationReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_supportCodeHasBeenSet(false)
{
}

Certificate::Certificate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_status(CertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false),
    m_domainValidationRecordsHasBeenSet(false),
    m_requestFailureReasonHasBeenSet(false),
    m_inUseResourceCount(0),
    m_inUseResourceCountHasBeenSet(false),
    m_keyAlgorithmHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_issuerCAHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_eligibleToRenewHasBeenSet(false),
    m_renewalSummaryHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_revocationReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_supportCodeHasBeenSet(false)
{
  *this = jsonValue;
}

Certificate& Certificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = CertificateStatusMapper::GetCertificateStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serialNumber"))
  {
    m_serialNumber = jsonValue.GetString("serialNumber");

    m_serialNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subjectAlternativeNames"))
  {
    Aws::Utils::Array<JsonView> subjectAlternativeNamesJsonList = jsonValue.GetArray("subjectAlternativeNames");
    for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
    {
      m_subjectAlternativeNames.push_back(subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsString());
    }
    m_subjectAlternativeNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainValidationRecords"))
  {
    Aws::Utils::Array<JsonView> domainValidationRecordsJsonList = jsonValue.GetArray("domainValidationRecords");
    for(unsigned domainValidationRecordsIndex = 0; domainValidationRecordsIndex < domainValidationRecordsJsonList.GetLength(); ++domainValidationRecordsIndex)
    {
      m_domainValidationRecords.push_back(domainValidationRecordsJsonList[domainValidationRecordsIndex].AsObject());
    }
    m_domainValidationRecordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("requestFailureReason"))
  {
    m_requestFailureReason = jsonValue.GetString("requestFailureReason");

    m_requestFailureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inUseResourceCount"))
  {
    m_inUseResourceCount = jsonValue.GetInteger("inUseResourceCount");

    m_inUseResourceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyAlgorithm"))
  {
    m_keyAlgorithm = jsonValue.GetString("keyAlgorithm");

    m_keyAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuedAt"))
  {
    m_issuedAt = jsonValue.GetDouble("issuedAt");

    m_issuedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuerCA"))
  {
    m_issuerCA = jsonValue.GetString("issuerCA");

    m_issuerCAHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notBefore"))
  {
    m_notBefore = jsonValue.GetDouble("notBefore");

    m_notBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notAfter"))
  {
    m_notAfter = jsonValue.GetDouble("notAfter");

    m_notAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eligibleToRenew"))
  {
    m_eligibleToRenew = jsonValue.GetString("eligibleToRenew");

    m_eligibleToRenewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renewalSummary"))
  {
    m_renewalSummary = jsonValue.GetObject("renewalSummary");

    m_renewalSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revokedAt"))
  {
    m_revokedAt = jsonValue.GetDouble("revokedAt");

    m_revokedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revocationReason"))
  {
    m_revocationReason = jsonValue.GetString("revocationReason");

    m_revocationReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue Certificate::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CertificateStatusMapper::GetNameForCertificateStatus(m_status));
  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("serialNumber", m_serialNumber);

  }

  if(m_subjectAlternativeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subjectAlternativeNamesJsonList(m_subjectAlternativeNames.size());
   for(unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength(); ++subjectAlternativeNamesIndex)
   {
     subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsString(m_subjectAlternativeNames[subjectAlternativeNamesIndex]);
   }
   payload.WithArray("subjectAlternativeNames", std::move(subjectAlternativeNamesJsonList));

  }

  if(m_domainValidationRecordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainValidationRecordsJsonList(m_domainValidationRecords.size());
   for(unsigned domainValidationRecordsIndex = 0; domainValidationRecordsIndex < domainValidationRecordsJsonList.GetLength(); ++domainValidationRecordsIndex)
   {
     domainValidationRecordsJsonList[domainValidationRecordsIndex].AsObject(m_domainValidationRecords[domainValidationRecordsIndex].Jsonize());
   }
   payload.WithArray("domainValidationRecords", std::move(domainValidationRecordsJsonList));

  }

  if(m_requestFailureReasonHasBeenSet)
  {
   payload.WithString("requestFailureReason", m_requestFailureReason);

  }

  if(m_inUseResourceCountHasBeenSet)
  {
   payload.WithInteger("inUseResourceCount", m_inUseResourceCount);

  }

  if(m_keyAlgorithmHasBeenSet)
  {
   payload.WithString("keyAlgorithm", m_keyAlgorithm);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_issuedAtHasBeenSet)
  {
   payload.WithDouble("issuedAt", m_issuedAt.SecondsWithMSPrecision());
  }

  if(m_issuerCAHasBeenSet)
  {
   payload.WithString("issuerCA", m_issuerCA);

  }

  if(m_notBeforeHasBeenSet)
  {
   payload.WithDouble("notBefore", m_notBefore.SecondsWithMSPrecision());
  }

  if(m_notAfterHasBeenSet)
  {
   payload.WithDouble("notAfter", m_notAfter.SecondsWithMSPrecision());
  }

  if(m_eligibleToRenewHasBeenSet)
  {
   payload.WithString("eligibleToRenew", m_eligibleToRenew);

  }

  if(m_renewalSummaryHasBeenSet)
  {
   payload.WithObject("renewalSummary", m_renewalSummary.Jsonize());

  }

  if(m_revokedAtHasBeenSet)
  {
   payload.WithDouble("revokedAt", m_revokedAt.SecondsWithMSPrecision());
  }

  if(m_revocationReasonHasBeenSet)
  {
   payload.WithString("revocationReason", m_revocationReason);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
