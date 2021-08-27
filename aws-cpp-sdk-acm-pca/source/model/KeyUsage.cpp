/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/KeyUsage.h>
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

KeyUsage::KeyUsage() : 
    m_digitalSignature(false),
    m_digitalSignatureHasBeenSet(false),
    m_nonRepudiation(false),
    m_nonRepudiationHasBeenSet(false),
    m_keyEncipherment(false),
    m_keyEnciphermentHasBeenSet(false),
    m_dataEncipherment(false),
    m_dataEnciphermentHasBeenSet(false),
    m_keyAgreement(false),
    m_keyAgreementHasBeenSet(false),
    m_keyCertSign(false),
    m_keyCertSignHasBeenSet(false),
    m_cRLSign(false),
    m_cRLSignHasBeenSet(false),
    m_encipherOnly(false),
    m_encipherOnlyHasBeenSet(false),
    m_decipherOnly(false),
    m_decipherOnlyHasBeenSet(false)
{
}

KeyUsage::KeyUsage(JsonView jsonValue) : 
    m_digitalSignature(false),
    m_digitalSignatureHasBeenSet(false),
    m_nonRepudiation(false),
    m_nonRepudiationHasBeenSet(false),
    m_keyEncipherment(false),
    m_keyEnciphermentHasBeenSet(false),
    m_dataEncipherment(false),
    m_dataEnciphermentHasBeenSet(false),
    m_keyAgreement(false),
    m_keyAgreementHasBeenSet(false),
    m_keyCertSign(false),
    m_keyCertSignHasBeenSet(false),
    m_cRLSign(false),
    m_cRLSignHasBeenSet(false),
    m_encipherOnly(false),
    m_encipherOnlyHasBeenSet(false),
    m_decipherOnly(false),
    m_decipherOnlyHasBeenSet(false)
{
  *this = jsonValue;
}

KeyUsage& KeyUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DigitalSignature"))
  {
    m_digitalSignature = jsonValue.GetBool("DigitalSignature");

    m_digitalSignatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonRepudiation"))
  {
    m_nonRepudiation = jsonValue.GetBool("NonRepudiation");

    m_nonRepudiationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyEncipherment"))
  {
    m_keyEncipherment = jsonValue.GetBool("KeyEncipherment");

    m_keyEnciphermentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataEncipherment"))
  {
    m_dataEncipherment = jsonValue.GetBool("DataEncipherment");

    m_dataEnciphermentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyAgreement"))
  {
    m_keyAgreement = jsonValue.GetBool("KeyAgreement");

    m_keyAgreementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyCertSign"))
  {
    m_keyCertSign = jsonValue.GetBool("KeyCertSign");

    m_keyCertSignHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CRLSign"))
  {
    m_cRLSign = jsonValue.GetBool("CRLSign");

    m_cRLSignHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncipherOnly"))
  {
    m_encipherOnly = jsonValue.GetBool("EncipherOnly");

    m_encipherOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DecipherOnly"))
  {
    m_decipherOnly = jsonValue.GetBool("DecipherOnly");

    m_decipherOnlyHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyUsage::Jsonize() const
{
  JsonValue payload;

  if(m_digitalSignatureHasBeenSet)
  {
   payload.WithBool("DigitalSignature", m_digitalSignature);

  }

  if(m_nonRepudiationHasBeenSet)
  {
   payload.WithBool("NonRepudiation", m_nonRepudiation);

  }

  if(m_keyEnciphermentHasBeenSet)
  {
   payload.WithBool("KeyEncipherment", m_keyEncipherment);

  }

  if(m_dataEnciphermentHasBeenSet)
  {
   payload.WithBool("DataEncipherment", m_dataEncipherment);

  }

  if(m_keyAgreementHasBeenSet)
  {
   payload.WithBool("KeyAgreement", m_keyAgreement);

  }

  if(m_keyCertSignHasBeenSet)
  {
   payload.WithBool("KeyCertSign", m_keyCertSign);

  }

  if(m_cRLSignHasBeenSet)
  {
   payload.WithBool("CRLSign", m_cRLSign);

  }

  if(m_encipherOnlyHasBeenSet)
  {
   payload.WithBool("EncipherOnly", m_encipherOnly);

  }

  if(m_decipherOnlyHasBeenSet)
  {
   payload.WithBool("DecipherOnly", m_decipherOnly);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
