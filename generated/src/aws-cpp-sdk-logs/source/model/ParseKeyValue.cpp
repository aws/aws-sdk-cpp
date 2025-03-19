/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ParseKeyValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

ParseKeyValue::ParseKeyValue(JsonView jsonValue)
{
  *this = jsonValue;
}

ParseKeyValue& ParseKeyValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");
    m_destinationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldDelimiter"))
  {
    m_fieldDelimiter = jsonValue.GetString("fieldDelimiter");
    m_fieldDelimiterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyValueDelimiter"))
  {
    m_keyValueDelimiter = jsonValue.GetString("keyValueDelimiter");
    m_keyValueDelimiterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyPrefix"))
  {
    m_keyPrefix = jsonValue.GetString("keyPrefix");
    m_keyPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nonMatchValue"))
  {
    m_nonMatchValue = jsonValue.GetString("nonMatchValue");
    m_nonMatchValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overwriteIfExists"))
  {
    m_overwriteIfExists = jsonValue.GetBool("overwriteIfExists");
    m_overwriteIfExistsHasBeenSet = true;
  }
  return *this;
}

JsonValue ParseKeyValue::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_fieldDelimiterHasBeenSet)
  {
   payload.WithString("fieldDelimiter", m_fieldDelimiter);

  }

  if(m_keyValueDelimiterHasBeenSet)
  {
   payload.WithString("keyValueDelimiter", m_keyValueDelimiter);

  }

  if(m_keyPrefixHasBeenSet)
  {
   payload.WithString("keyPrefix", m_keyPrefix);

  }

  if(m_nonMatchValueHasBeenSet)
  {
   payload.WithString("nonMatchValue", m_nonMatchValue);

  }

  if(m_overwriteIfExistsHasBeenSet)
  {
   payload.WithBool("overwriteIfExists", m_overwriteIfExists);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
