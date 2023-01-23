/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ClusteringKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

ClusteringKey::ClusteringKey() : 
    m_nameHasBeenSet(false),
    m_orderBy(SortOrder::NOT_SET),
    m_orderByHasBeenSet(false)
{
}

ClusteringKey::ClusteringKey(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_orderBy(SortOrder::NOT_SET),
    m_orderByHasBeenSet(false)
{
  *this = jsonValue;
}

ClusteringKey& ClusteringKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("orderBy"))
  {
    m_orderBy = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("orderBy"));

    m_orderByHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusteringKey::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_orderByHasBeenSet)
  {
   payload.WithString("orderBy", SortOrderMapper::GetNameForSortOrder(m_orderBy));
  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
