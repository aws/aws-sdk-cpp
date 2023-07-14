/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Bucket.h>
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

Bucket::Bucket() : 
    m_keyValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

Bucket::Bucket(JsonView jsonValue) : 
    m_keyValueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

Bucket& Bucket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyValue"))
  {
    m_keyValue = jsonValue.GetString("keyValue");

    m_keyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue Bucket::Jsonize() const
{
  JsonValue payload;

  if(m_keyValueHasBeenSet)
  {
   payload.WithString("keyValue", m_keyValue);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
