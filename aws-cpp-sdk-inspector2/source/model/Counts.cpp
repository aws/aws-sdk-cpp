/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Counts.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Counts::Counts() : 
    m_count(0),
    m_countHasBeenSet(false),
    m_groupKey(GroupKey::NOT_SET),
    m_groupKeyHasBeenSet(false)
{
}

Counts::Counts(JsonView jsonValue) : 
    m_count(0),
    m_countHasBeenSet(false),
    m_groupKey(GroupKey::NOT_SET),
    m_groupKeyHasBeenSet(false)
{
  *this = jsonValue;
}

Counts& Counts::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInt64("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupKey"))
  {
    m_groupKey = GroupKeyMapper::GetGroupKeyForName(jsonValue.GetString("groupKey"));

    m_groupKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue Counts::Jsonize() const
{
  JsonValue payload;

  if(m_countHasBeenSet)
  {
   payload.WithInt64("count", m_count);

  }

  if(m_groupKeyHasBeenSet)
  {
   payload.WithString("groupKey", GroupKeyMapper::GetNameForGroupKey(m_groupKey));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
