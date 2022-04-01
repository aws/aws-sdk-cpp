/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/CertificateList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

CertificateList::CertificateList() : 
    m_signingAlg(SigningAlg::NOT_SET),
    m_signingAlgHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CertificateList::CertificateList(JsonView jsonValue) : 
    m_signingAlg(SigningAlg::NOT_SET),
    m_signingAlgHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateList& CertificateList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SigningAlg"))
  {
    m_signingAlg = SigningAlgMapper::GetSigningAlgForName(jsonValue.GetString("SigningAlg"));

    m_signingAlgHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateList::Jsonize() const
{
  JsonValue payload;

  if(m_signingAlgHasBeenSet)
  {
   payload.WithString("SigningAlg", SigningAlgMapper::GetNameForSigningAlg(m_signingAlg));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
