/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/Encryption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Encryption::Encryption() : 
    m_modeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyMd5HasBeenSet(false),
    m_initializationVectorHasBeenSet(false)
{
}

Encryption::Encryption(JsonView jsonValue) : 
    m_modeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyMd5HasBeenSet(false),
    m_initializationVectorHasBeenSet(false)
{
  *this = jsonValue;
}

Encryption& Encryption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = jsonValue.GetString("Mode");

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyMd5"))
  {
    m_keyMd5 = jsonValue.GetString("KeyMd5");

    m_keyMd5HasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitializationVector"))
  {
    m_initializationVector = jsonValue.GetString("InitializationVector");

    m_initializationVectorHasBeenSet = true;
  }

  return *this;
}

JsonValue Encryption::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", m_mode);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_keyMd5HasBeenSet)
  {
   payload.WithString("KeyMd5", m_keyMd5);

  }

  if(m_initializationVectorHasBeenSet)
  {
   payload.WithString("InitializationVector", m_initializationVector);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
