/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/IssuerCertificateIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

IssuerCertificateIdentifier::IssuerCertificateIdentifier() : 
    m_issuerCertificateSubjectHasBeenSet(false),
    m_issuerIdHasBeenSet(false),
    m_issuerCertificateSerialNumberHasBeenSet(false)
{
}

IssuerCertificateIdentifier::IssuerCertificateIdentifier(JsonView jsonValue) : 
    m_issuerCertificateSubjectHasBeenSet(false),
    m_issuerIdHasBeenSet(false),
    m_issuerCertificateSerialNumberHasBeenSet(false)
{
  *this = jsonValue;
}

IssuerCertificateIdentifier& IssuerCertificateIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issuerCertificateSubject"))
  {
    m_issuerCertificateSubject = jsonValue.GetString("issuerCertificateSubject");

    m_issuerCertificateSubjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuerId"))
  {
    m_issuerId = jsonValue.GetString("issuerId");

    m_issuerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuerCertificateSerialNumber"))
  {
    m_issuerCertificateSerialNumber = jsonValue.GetString("issuerCertificateSerialNumber");

    m_issuerCertificateSerialNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue IssuerCertificateIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_issuerCertificateSubjectHasBeenSet)
  {
   payload.WithString("issuerCertificateSubject", m_issuerCertificateSubject);

  }

  if(m_issuerIdHasBeenSet)
  {
   payload.WithString("issuerId", m_issuerId);

  }

  if(m_issuerCertificateSerialNumberHasBeenSet)
  {
   payload.WithString("issuerCertificateSerialNumber", m_issuerCertificateSerialNumber);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
