/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ConnectionPasswordEncryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ConnectionPasswordEncryption::ConnectionPasswordEncryption() : 
    m_returnConnectionPasswordEncrypted(false),
    m_returnConnectionPasswordEncryptedHasBeenSet(false),
    m_awsKmsKeyIdHasBeenSet(false)
{
}

ConnectionPasswordEncryption::ConnectionPasswordEncryption(JsonView jsonValue) : 
    m_returnConnectionPasswordEncrypted(false),
    m_returnConnectionPasswordEncryptedHasBeenSet(false),
    m_awsKmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionPasswordEncryption& ConnectionPasswordEncryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReturnConnectionPasswordEncrypted"))
  {
    m_returnConnectionPasswordEncrypted = jsonValue.GetBool("ReturnConnectionPasswordEncrypted");

    m_returnConnectionPasswordEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsKmsKeyId"))
  {
    m_awsKmsKeyId = jsonValue.GetString("AwsKmsKeyId");

    m_awsKmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionPasswordEncryption::Jsonize() const
{
  JsonValue payload;

  if(m_returnConnectionPasswordEncryptedHasBeenSet)
  {
   payload.WithBool("ReturnConnectionPasswordEncrypted", m_returnConnectionPasswordEncrypted);

  }

  if(m_awsKmsKeyIdHasBeenSet)
  {
   payload.WithString("AwsKmsKeyId", m_awsKmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
