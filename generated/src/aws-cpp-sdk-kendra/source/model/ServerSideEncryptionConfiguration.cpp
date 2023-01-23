/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ServerSideEncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ServerSideEncryptionConfiguration::ServerSideEncryptionConfiguration() : 
    m_kmsKeyIdHasBeenSet(false)
{
}

ServerSideEncryptionConfiguration::ServerSideEncryptionConfiguration(JsonView jsonValue) : 
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

ServerSideEncryptionConfiguration& ServerSideEncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerSideEncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
