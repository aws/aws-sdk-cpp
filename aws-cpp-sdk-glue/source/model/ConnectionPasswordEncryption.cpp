/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
