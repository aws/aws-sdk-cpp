/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceConnectTlsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ServiceConnectTlsConfiguration::ServiceConnectTlsConfiguration() : 
    m_issuerCertificateAuthorityHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

ServiceConnectTlsConfiguration::ServiceConnectTlsConfiguration(JsonView jsonValue) : 
    m_issuerCertificateAuthorityHasBeenSet(false),
    m_kmsKeyHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceConnectTlsConfiguration& ServiceConnectTlsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issuerCertificateAuthority"))
  {
    m_issuerCertificateAuthority = jsonValue.GetObject("issuerCertificateAuthority");

    m_issuerCertificateAuthorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKey"))
  {
    m_kmsKey = jsonValue.GetString("kmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceConnectTlsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_issuerCertificateAuthorityHasBeenSet)
  {
   payload.WithObject("issuerCertificateAuthority", m_issuerCertificateAuthority.Jsonize());

  }

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("kmsKey", m_kmsKey);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
