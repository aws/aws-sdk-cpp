/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DomainValidationRecord.h>
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

DomainValidationRecord::DomainValidationRecord() : 
    m_domainNameHasBeenSet(false),
    m_resourceRecordHasBeenSet(false),
    m_dnsRecordCreationStateHasBeenSet(false),
    m_validationStatus(CertificateDomainValidationStatus::NOT_SET),
    m_validationStatusHasBeenSet(false)
{
}

DomainValidationRecord::DomainValidationRecord(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_resourceRecordHasBeenSet(false),
    m_dnsRecordCreationStateHasBeenSet(false),
    m_validationStatus(CertificateDomainValidationStatus::NOT_SET),
    m_validationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DomainValidationRecord& DomainValidationRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceRecord"))
  {
    m_resourceRecord = jsonValue.GetObject("resourceRecord");

    m_resourceRecordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsRecordCreationState"))
  {
    m_dnsRecordCreationState = jsonValue.GetObject("dnsRecordCreationState");

    m_dnsRecordCreationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validationStatus"))
  {
    m_validationStatus = CertificateDomainValidationStatusMapper::GetCertificateDomainValidationStatusForName(jsonValue.GetString("validationStatus"));

    m_validationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainValidationRecord::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_resourceRecordHasBeenSet)
  {
   payload.WithObject("resourceRecord", m_resourceRecord.Jsonize());

  }

  if(m_dnsRecordCreationStateHasBeenSet)
  {
   payload.WithObject("dnsRecordCreationState", m_dnsRecordCreationState.Jsonize());

  }

  if(m_validationStatusHasBeenSet)
  {
   payload.WithString("validationStatus", CertificateDomainValidationStatusMapper::GetNameForCertificateDomainValidationStatus(m_validationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
