/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/model/Bucket.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearchDomain
{
namespace Model
{

Bucket::Bucket() : 
    m_valueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
}

Bucket::Bucket(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false)
{
  *this = jsonValue;
}

Bucket& Bucket::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  return *this;
}

JsonValue Bucket::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  return payload;
}

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
