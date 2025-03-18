/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/TLSCertificateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

TLSCertificateConfiguration::TLSCertificateConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

TLSCertificateConfiguration& TLSCertificateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateProviderType"))
  {
    m_certificateProviderType = CertificateProviderTypeMapper::GetCertificateProviderTypeForName(jsonValue.GetString("certificateProviderType"));
    m_certificateProviderTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicCertificateSecretArn"))
  {
    m_publicCertificateSecretArn = jsonValue.GetString("publicCertificateSecretArn");
    m_publicCertificateSecretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privateCertificateSecretArn"))
  {
    m_privateCertificateSecretArn = jsonValue.GetString("privateCertificateSecretArn");
    m_privateCertificateSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TLSCertificateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_certificateProviderTypeHasBeenSet)
  {
   payload.WithString("certificateProviderType", CertificateProviderTypeMapper::GetNameForCertificateProviderType(m_certificateProviderType));
  }

  if(m_publicCertificateSecretArnHasBeenSet)
  {
   payload.WithString("publicCertificateSecretArn", m_publicCertificateSecretArn);

  }

  if(m_privateCertificateSecretArnHasBeenSet)
  {
   payload.WithString("privateCertificateSecretArn", m_privateCertificateSecretArn);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
