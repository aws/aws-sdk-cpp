/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/KeyPair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

KeyPair::KeyPair() : 
    m_publicKeyHasBeenSet(false),
    m_privateKeyHasBeenSet(false)
{
}

KeyPair::KeyPair(JsonView jsonValue) : 
    m_publicKeyHasBeenSet(false),
    m_privateKeyHasBeenSet(false)
{
  *this = jsonValue;
}

KeyPair& KeyPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = jsonValue.GetString("PublicKey");

    m_publicKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateKey"))
  {
    m_privateKey = jsonValue.GetString("PrivateKey");

    m_privateKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyPair::Jsonize() const
{
  JsonValue payload;

  if(m_publicKeyHasBeenSet)
  {
   payload.WithString("PublicKey", m_publicKey);

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("PrivateKey", m_privateKey);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
