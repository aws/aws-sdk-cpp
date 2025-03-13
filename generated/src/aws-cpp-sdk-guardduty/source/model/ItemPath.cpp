/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ItemPath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ItemPath::ItemPath(JsonView jsonValue)
{
  *this = jsonValue;
}

ItemPath& ItemPath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nestedItemPath"))
  {
    m_nestedItemPath = jsonValue.GetString("nestedItemPath");
    m_nestedItemPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hash"))
  {
    m_hash = jsonValue.GetString("hash");
    m_hashHasBeenSet = true;
  }
  return *this;
}

JsonValue ItemPath::Jsonize() const
{
  JsonValue payload;

  if(m_nestedItemPathHasBeenSet)
  {
   payload.WithString("nestedItemPath", m_nestedItemPath);

  }

  if(m_hashHasBeenSet)
  {
   payload.WithString("hash", m_hash);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
