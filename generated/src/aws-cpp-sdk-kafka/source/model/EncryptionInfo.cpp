/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/EncryptionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

EncryptionInfo::EncryptionInfo() : 
    m_encryptionAtRestHasBeenSet(false),
    m_encryptionInTransitHasBeenSet(false)
{
}

EncryptionInfo::EncryptionInfo(JsonView jsonValue) : 
    m_encryptionAtRestHasBeenSet(false),
    m_encryptionInTransitHasBeenSet(false)
{
  *this = jsonValue;
}

EncryptionInfo& EncryptionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryptionAtRest"))
  {
    m_encryptionAtRest = jsonValue.GetObject("encryptionAtRest");

    m_encryptionAtRestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionInTransit"))
  {
    m_encryptionInTransit = jsonValue.GetObject("encryptionInTransit");

    m_encryptionInTransitHasBeenSet = true;
  }

  return *this;
}

JsonValue EncryptionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionAtRestHasBeenSet)
  {
   payload.WithObject("encryptionAtRest", m_encryptionAtRest.Jsonize());

  }

  if(m_encryptionInTransitHasBeenSet)
  {
   payload.WithObject("encryptionInTransit", m_encryptionInTransit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
