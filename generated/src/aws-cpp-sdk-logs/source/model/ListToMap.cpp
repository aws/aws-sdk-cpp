/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ListToMap.h>
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

ListToMap::ListToMap(JsonView jsonValue)
{
  *this = jsonValue;
}

ListToMap& ListToMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("valueKey"))
  {
    m_valueKey = jsonValue.GetString("valueKey");
    m_valueKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flatten"))
  {
    m_flatten = jsonValue.GetBool("flatten");
    m_flattenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flattenedElement"))
  {
    m_flattenedElement = FlattenedElementMapper::GetFlattenedElementForName(jsonValue.GetString("flattenedElement"));
    m_flattenedElementHasBeenSet = true;
  }
  return *this;
}

JsonValue ListToMap::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueKeyHasBeenSet)
  {
   payload.WithString("valueKey", m_valueKey);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_flattenHasBeenSet)
  {
   payload.WithBool("flatten", m_flatten);

  }

  if(m_flattenedElementHasBeenSet)
  {
   payload.WithString("flattenedElement", FlattenedElementMapper::GetNameForFlattenedElement(m_flattenedElement));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
