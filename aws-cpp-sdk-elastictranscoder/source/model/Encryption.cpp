/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

Encryption::Encryption(const JsonValue& jsonValue) : 
    m_modeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_keyMd5HasBeenSet(false),
    m_initializationVectorHasBeenSet(false)
{
  *this = jsonValue;
}

Encryption& Encryption::operator =(const JsonValue& jsonValue)
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