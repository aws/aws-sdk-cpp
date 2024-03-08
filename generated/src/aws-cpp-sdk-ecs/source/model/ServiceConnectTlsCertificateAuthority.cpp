/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceConnectTlsCertificateAuthority.h>
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

ServiceConnectTlsCertificateAuthority::ServiceConnectTlsCertificateAuthority() : 
    m_awsPcaAuthorityArnHasBeenSet(false)
{
}

ServiceConnectTlsCertificateAuthority::ServiceConnectTlsCertificateAuthority(JsonView jsonValue) : 
    m_awsPcaAuthorityArnHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceConnectTlsCertificateAuthority& ServiceConnectTlsCertificateAuthority::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsPcaAuthorityArn"))
  {
    m_awsPcaAuthorityArn = jsonValue.GetString("awsPcaAuthorityArn");

    m_awsPcaAuthorityArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceConnectTlsCertificateAuthority::Jsonize() const
{
  JsonValue payload;

  if(m_awsPcaAuthorityArnHasBeenSet)
  {
   payload.WithString("awsPcaAuthorityArn", m_awsPcaAuthorityArn);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
