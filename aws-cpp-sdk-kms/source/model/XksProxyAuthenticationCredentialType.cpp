/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/XksProxyAuthenticationCredentialType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KMS
{
namespace Model
{

XksProxyAuthenticationCredentialType::XksProxyAuthenticationCredentialType() : 
    m_accessKeyIdHasBeenSet(false),
    m_rawSecretAccessKeyHasBeenSet(false)
{
}

XksProxyAuthenticationCredentialType::XksProxyAuthenticationCredentialType(JsonView jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_rawSecretAccessKeyHasBeenSet(false)
{
  *this = jsonValue;
}

XksProxyAuthenticationCredentialType& XksProxyAuthenticationCredentialType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("AccessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RawSecretAccessKey"))
  {
    m_rawSecretAccessKey = jsonValue.GetString("RawSecretAccessKey");

    m_rawSecretAccessKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue XksProxyAuthenticationCredentialType::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("AccessKeyId", m_accessKeyId);

  }

  if(m_rawSecretAccessKeyHasBeenSet)
  {
   payload.WithString("RawSecretAccessKey", m_rawSecretAccessKey);

  }

  return payload;
}

} // namespace Model
} // namespace KMS
} // namespace Aws
