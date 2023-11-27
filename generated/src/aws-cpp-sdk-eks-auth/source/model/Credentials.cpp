/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks-auth/model/Credentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKSAuth
{
namespace Model
{

Credentials::Credentials() : 
    m_sessionTokenHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_expirationHasBeenSet(false)
{
}

Credentials::Credentials(JsonView jsonValue) : 
    m_sessionTokenHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_expirationHasBeenSet(false)
{
  *this = jsonValue;
}

Credentials& Credentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionToken"))
  {
    m_sessionToken = jsonValue.GetString("sessionToken");

    m_sessionTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretAccessKey"))
  {
    m_secretAccessKey = jsonValue.GetString("secretAccessKey");

    m_secretAccessKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiration"))
  {
    m_expiration = jsonValue.GetDouble("expiration");

    m_expirationHasBeenSet = true;
  }

  return *this;
}

JsonValue Credentials::Jsonize() const
{
  JsonValue payload;

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("sessionToken", m_sessionToken);

  }

  if(m_secretAccessKeyHasBeenSet)
  {
   payload.WithString("secretAccessKey", m_secretAccessKey);

  }

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_expirationHasBeenSet)
  {
   payload.WithDouble("expiration", m_expiration.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
