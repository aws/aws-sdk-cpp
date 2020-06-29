/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CertificateAuthorityConfiguration.h>
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

CertificateAuthorityConfiguration::CertificateAuthorityConfiguration() : 
    m_keyAlgorithm(KeyAlgorithm::NOT_SET),
    m_keyAlgorithmHasBeenSet(false),
    m_signingAlgorithm(SigningAlgorithm::NOT_SET),
    m_signingAlgorithmHasBeenSet(false),
    m_subjectHasBeenSet(false)
{
}

CertificateAuthorityConfiguration::CertificateAuthorityConfiguration(JsonView jsonValue) : 
    m_keyAlgorithm(KeyAlgorithm::NOT_SET),
    m_keyAlgorithmHasBeenSet(false),
    m_signingAlgorithm(SigningAlgorithm::NOT_SET),
    m_signingAlgorithmHasBeenSet(false),
    m_subjectHasBeenSet(false)
{
  *this = jsonValue;
}

CertificateAuthorityConfiguration& CertificateAuthorityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyAlgorithm"))
  {
    m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("KeyAlgorithm"));

    m_keyAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SigningAlgorithm"))
  {
    m_signingAlgorithm = SigningAlgorithmMapper::GetSigningAlgorithmForName(jsonValue.GetString("SigningAlgorithm"));

    m_signingAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetObject("Subject");

    m_subjectHasBeenSet = true;
  }

  return *this;
}

JsonValue CertificateAuthorityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_keyAlgorithmHasBeenSet)
  {
   payload.WithString("KeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyAlgorithm));
  }

  if(m_signingAlgorithmHasBeenSet)
  {
   payload.WithString("SigningAlgorithm", SigningAlgorithmMapper::GetNameForSigningAlgorithm(m_signingAlgorithm));
  }

  if(m_subjectHasBeenSet)
  {
   payload.WithObject("Subject", m_subject.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
