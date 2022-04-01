/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/KMSKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

KMSKey::KMSKey() : 
    m_kmsEncryptionKeyArnHasBeenSet(false)
{
}

KMSKey::KMSKey(JsonView jsonValue) : 
    m_kmsEncryptionKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

KMSKey& KMSKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsEncryptionKeyArn"))
  {
    m_kmsEncryptionKeyArn = jsonValue.GetString("kmsEncryptionKeyArn");

    m_kmsEncryptionKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KMSKey::Jsonize() const
{
  JsonValue payload;

  if(m_kmsEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("kmsEncryptionKeyArn", m_kmsEncryptionKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
