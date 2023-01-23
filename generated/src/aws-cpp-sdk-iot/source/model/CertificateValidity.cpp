/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CertificateValidity.h>
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

CertificateValidity::CertificateValidity() : 
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false)
{
}

CertificateValidity::CertificateValidity(JsonView jsonValue) : 
    m_notBeforeHasBeenSet(false),
    m_notAfterHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateValidity& CertificateValidity::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue CertificateValidity::Jsonize() const
{
  JsonValue payload;

  if(m_notBeforeHasBeenSet)
  {
   payload.WithDouble("notBefore", m_notBefore.SecondsWithMSPrecision());
  }

  if(m_notAfterHasBeenSet)
  {
   payload.WithDouble("notAfter", m_notAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
