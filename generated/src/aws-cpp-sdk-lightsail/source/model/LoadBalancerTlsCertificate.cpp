/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificate.h>
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

LoadBalancerTlsCertificate::LoadBalancerTlsCertificate() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_isAttached(false),
    m_isAttachedHasBeenSet(false),
    m_status(LoadBalancerTlsCertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainValidationRecordsHasBeenSet(false),
    m_failureReason(LoadBalancerTlsCertificateFailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_keyAlgorithmHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_renewalSummaryHasBeenSet(false),
    m_revocationReason(LoadBalancerTlsCertificateRevocationReason::NOT_SET),
    m_revocationReasonHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false)
{
}

LoadBalancerTlsCertificate::LoadBalancerTlsCertificate(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_supportCodeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_isAttached(false),
    m_isAttachedHasBeenSet(false),
    m_status(LoadBalancerTlsCertificateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainValidationRecordsHasBeenSet(false),
    m_failureReason(LoadBalancerTlsCertificateFailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_issuedAtHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_keyAlgorithmHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_renewalSummaryHasBeenSet(false),
    m_revocationReason(LoadBalancerTlsCertificateRevocationReason::NOT_SET),
    m_revocationReasonHasBeenSet(false),
    m_revokedAtHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_signatureAlgorithmHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_subjectAlternativeNamesHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificate& LoadBalancerTlsCertificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportCode"))
  {
    m_supportCode = jsonValue.GetString("supportCode");

    m_supportCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("loadBalancerName"))
  {
    m_loadBalancerName = jsonValue.GetString("loadBalancerName");

    m_loadBalancerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isAttached"))
  {
    m_isAttached = jsonValue.GetBool("isAttached");

    m_isAttachedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = LoadBalancerTlsCertificateStatusMapper::GetLoadBalancerTlsCertificateStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = LoadBalancerTlsCertificateFailureReasonMapper::GetLoadBalancerTlsCertificateFailureReasonForName(jsonValue.GetString("failureReason"));

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuedAt"))
  {
    m_issuedAt = jsonValue.GetDouble("issuedAt");

    m_issuedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyAlgorithm"))
  {
    m_keyAlgorithm = jsonValue.GetString("keyAlgorithm");

    m_keyAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notAfter"))
  {
    m_notAfter = jsonValue.GetDouble("notAfter");

    m_notAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notBefore"))
  {
    m_notBefore = jsonValue.GetDouble("notBefore");

    m_notBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renewalSummary"))
  {
    m_renewalSummary = jsonValue.GetObject("renewalSummary");

    m_renewalSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revocationReason"))
  {
    m_revocationReason = LoadBalancerTlsCertificateRevocationReasonMapper::GetLoadBalancerTlsCertificateRevocationReasonForName(jsonValue.GetString("revocationReason"));

    m_revocationReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revokedAt"))
  {
    m_revokedAt = jsonValue.GetDouble("revokedAt");

    m_revokedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serial"))
  {
    m_serial = jsonValue.GetString("serial");

    m_serialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signatureAlgorithm"))
  {
    m_signatureAlgorithm = jsonValue.GetString("signatureAlgorithm");

    m_signatureAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subject"))
  {
    m_subject = jsonValue.GetString("subject");

    m_subjectHasBeenSet = true;
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

  return *this;
}

JsonValue LoadBalancerTlsCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_supportCodeHasBeenSet)
  {
   payload.WithString("supportCode", m_supportCode);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
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

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("loadBalancerName", m_loadBalancerName);

  }

  if(m_isAttachedHasBeenSet)
  {
   payload.WithBool("isAttached", m_isAttached);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LoadBalancerTlsCertificateStatusMapper::GetNameForLoadBalancerTlsCertificateStatus(m_status));
  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

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

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", LoadBalancerTlsCertificateFailureReasonMapper::GetNameForLoadBalancerTlsCertificateFailureReason(m_failureReason));
  }

  if(m_issuedAtHasBeenSet)
  {
   payload.WithDouble("issuedAt", m_issuedAt.SecondsWithMSPrecision());
  }

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  if(m_keyAlgorithmHasBeenSet)
  {
   payload.WithString("keyAlgorithm", m_keyAlgorithm);

  }

  if(m_notAfterHasBeenSet)
  {
   payload.WithDouble("notAfter", m_notAfter.SecondsWithMSPrecision());
  }

  if(m_notBeforeHasBeenSet)
  {
   payload.WithDouble("notBefore", m_notBefore.SecondsWithMSPrecision());
  }

  if(m_renewalSummaryHasBeenSet)
  {
   payload.WithObject("renewalSummary", m_renewalSummary.Jsonize());

  }

  if(m_revocationReasonHasBeenSet)
  {
   payload.WithString("revocationReason", LoadBalancerTlsCertificateRevocationReasonMapper::GetNameForLoadBalancerTlsCertificateRevocationReason(m_revocationReason));
  }

  if(m_revokedAtHasBeenSet)
  {
   payload.WithDouble("revokedAt", m_revokedAt.SecondsWithMSPrecision());
  }

  if(m_serialHasBeenSet)
  {
   payload.WithString("serial", m_serial);

  }

  if(m_signatureAlgorithmHasBeenSet)
  {
   payload.WithString("signatureAlgorithm", m_signatureAlgorithm);

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("subject", m_subject);

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

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
