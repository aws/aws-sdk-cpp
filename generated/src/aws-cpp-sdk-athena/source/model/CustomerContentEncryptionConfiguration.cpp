/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CustomerContentEncryptionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

CustomerContentEncryptionConfiguration::CustomerContentEncryptionConfiguration() : 
    m_kmsKeyHasBeenSet(false)
{
}

CustomerContentEncryptionConfiguration::CustomerContentEncryptionConfiguration(JsonView jsonValue) : 
    m_kmsKeyHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerContentEncryptionConfiguration& CustomerContentEncryptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");

    m_kmsKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerContentEncryptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyHasBeenSet)
  {
   payload.WithString("KmsKey", m_kmsKey);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
