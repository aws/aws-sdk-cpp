/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastic-inference/model/KeyValuePair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticInference
{
namespace Model
{

KeyValuePair::KeyValuePair() : 
    m_keyHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
}

KeyValuePair::KeyValuePair(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_value(0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

KeyValuePair& KeyValuePair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyValuePair::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticInference
} // namespace Aws
