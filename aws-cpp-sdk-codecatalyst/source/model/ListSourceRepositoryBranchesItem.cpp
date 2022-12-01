/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/ListSourceRepositoryBranchesItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

ListSourceRepositoryBranchesItem::ListSourceRepositoryBranchesItem() : 
    m_refHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_headCommitIdHasBeenSet(false)
{
}

ListSourceRepositoryBranchesItem::ListSourceRepositoryBranchesItem(JsonView jsonValue) : 
    m_refHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_headCommitIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListSourceRepositoryBranchesItem& ListSourceRepositoryBranchesItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ref"))
  {
    m_ref = jsonValue.GetString("ref");

    m_refHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("headCommitId"))
  {
    m_headCommitId = jsonValue.GetString("headCommitId");

    m_headCommitIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListSourceRepositoryBranchesItem::Jsonize() const
{
  JsonValue payload;

  if(m_refHasBeenSet)
  {
   payload.WithString("ref", m_ref);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_headCommitIdHasBeenSet)
  {
   payload.WithString("headCommitId", m_headCommitId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
