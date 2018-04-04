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

#include <aws/acm-pca/model/CertificateAuthority.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

CertificateAuthority::CertificateAuthority() : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastStateChangeAtHasBeenSet(false),
    m_type(CertificateAuthorityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_status(CertificateAuthorityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_certificateAuthorityConfigurationHasBeenSet(false),
    m_revocationConfigurationHasBeenSet(false)
{
}

CertificateAuthority::CertificateAuthority(const JsonValue& jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastStateChangeAtHasBeenSet(false),
    m_type(CertificateAuthorityType::NOT_SET),
    m_typeHasBeenSet(false),
    m_serialHasBeenSet(false),
    m_status(CertificateAuthorityStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false),
    m_failureReason(FailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false),
    m_certificateAuthorityConfigurationHasBeenSet(false),
    m_revocationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateAuthority& CertificateAuthority::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastStateChangeAt"))
  {
    m_lastStateChangeAt = jsonValue.GetDouble("LastStateChangeAt");

    m_lastStateChangeAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = CertificateAuthorityTypeMapper::GetCertificateAuthorityTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Serial"))
  {
    m_serial = jsonValue.GetString("Serial");

    m_serialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CertificateAuthorityStatusMapper::GetCertificateAuthorityStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
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

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = FailureReasonMapper::GetFailureReasonForName(jsonValue.GetString("FailureReason"));

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateAuthorityConfiguration"))
  {
    m_certificateAuthorityConfiguration = jsonValue.GetObject("CertificateAuthorityConfiguration");

    m_certificateAuthorityConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevocationConfiguration"))
  {
    m_revocationConfiguration = jsonValue.GetObject("RevocationConfiguration");

    m_revocationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateAuthority::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastStateChangeAtHasBeenSet)
  {
   payload.WithDouble("LastStateChangeAt", m_lastStateChangeAt.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", CertificateAuthorityTypeMapper::GetNameForCertificateAuthorityType(m_type));
  }

  if(m_serialHasBeenSet)
  {
   payload.WithString("Serial", m_serial);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CertificateAuthorityStatusMapper::GetNameForCertificateAuthorityStatus(m_status));
  }

  if(m_notBeforeHasBeenSet)
  {
   payload.WithDouble("NotBefore", m_notBefore.SecondsWithMSPrecision());
  }

  if(m_notAfterHasBeenSet)
  {
   payload.WithDouble("NotAfter", m_notAfter.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", FailureReasonMapper::GetNameForFailureReason(m_failureReason));
  }

  if(m_certificateAuthorityConfigurationHasBeenSet)
  {
   payload.WithObject("CertificateAuthorityConfiguration", m_certificateAuthorityConfiguration.Jsonize());

  }

  if(m_revocationConfigurationHasBeenSet)
  {
   payload.WithObject("RevocationConfiguration", m_revocationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
