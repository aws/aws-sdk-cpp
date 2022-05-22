/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ConnectionHeaderParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

ConnectionHeaderParameter::ConnectionHeaderParameter() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_isValueSecret(false),
    m_isValueSecretHasBeenSet(false)
{
}

ConnectionHeaderParameter::ConnectionHeaderParameter(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_isValueSecret(false),
    m_isValueSecretHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectionHeaderParameter& ConnectionHeaderParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsValueSecret"))
  {
    m_isValueSecret = jsonValue.GetBool("IsValueSecret");

    m_isValueSecretHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectionHeaderParameter::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_isValueSecretHasBeenSet)
  {
   payload.WithBool("IsValueSecret", m_isValueSecret);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
