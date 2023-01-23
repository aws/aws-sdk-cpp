/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/TimestampForCollection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

TimestampForCollection::TimestampForCollection() : 
    m_timestampHasBeenSet(false)
{
}

TimestampForCollection::TimestampForCollection(JsonView jsonValue) : 
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

TimestampForCollection& TimestampForCollection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue TimestampForCollection::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
