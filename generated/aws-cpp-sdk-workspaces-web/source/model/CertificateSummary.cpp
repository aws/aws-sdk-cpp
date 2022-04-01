/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/CertificateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

CertificateSummary::CertificateSummary() : 
    m_issuerHasBeenSet(false),
    m_notValidAfterHasBeenSet(false),
    m_notValidBeforeHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_thumbprintHasBeenSet(false)
{
}

CertificateSummary::CertificateSummary(JsonView jsonValue) : 
    m_issuerHasBeenSet(false),
    m_notValidAfterHasBeenSet(false),
    m_notValidBeforeHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_thumbprintHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateSummary& CertificateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notValidAfter"))
  {
    m_notValidAfter = jsonValue.GetDouble("notValidAfter");

    m_notValidAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notValidBefore"))
  {
    m_notValidBefore = jsonValue.GetDouble("notValidBefore");

    m_notValidBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subject"))
  {
    m_subject = jsonValue.GetString("subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thumbprint"))
  {
    m_thumbprint = jsonValue.GetString("thumbprint");

    m_thumbprintHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  if(m_notValidAfterHasBeenSet)
  {
   payload.WithDouble("notValidAfter", m_notValidAfter.SecondsWithMSPrecision());
  }

  if(m_notValidBeforeHasBeenSet)
  {
   payload.WithDouble("notValidBefore", m_notValidBefore.SecondsWithMSPrecision());
  }

  if(m_subjectHasBeenSet)
  {
   payload.WithString("subject", m_subject);

  }

  if(m_thumbprintHasBeenSet)
  {
   payload.WithString("thumbprint", m_thumbprint);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
