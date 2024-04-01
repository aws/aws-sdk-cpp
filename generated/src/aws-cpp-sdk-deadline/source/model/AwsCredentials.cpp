/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/AwsCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

AwsCredentials::AwsCredentials() : 
    m_accessKeyIdHasBeenSet(false),
    m_expirationHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_sessionTokenHasBeenSet(false)
{
}

AwsCredentials::AwsCredentials(JsonView jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_expirationHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_sessionTokenHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCredentials& AwsCredentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiration"))
  {
    m_expiration = jsonValue.GetString("expiration");

    m_expirationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretAccessKey"))
  {
    m_secretAccessKey = jsonValue.GetString("secretAccessKey");

    m_secretAccessKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionToken"))
  {
    m_sessionToken = jsonValue.GetString("sessionToken");

    m_sessionTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_expirationHasBeenSet)
  {
   payload.WithString("expiration", m_expiration.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_secretAccessKeyHasBeenSet)
  {
   payload.WithString("secretAccessKey", m_secretAccessKey);

  }

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("sessionToken", m_sessionToken);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
