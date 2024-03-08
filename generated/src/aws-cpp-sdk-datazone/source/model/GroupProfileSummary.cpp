/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GroupProfileSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

GroupProfileSummary::GroupProfileSummary() : 
    m_domainIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(GroupProfileStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

GroupProfileSummary::GroupProfileSummary(JsonView jsonValue) : 
    m_domainIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(GroupProfileStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

GroupProfileSummary& GroupProfileSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = GroupProfileStatusMapper::GetGroupProfileStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupProfileSummary::Jsonize() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GroupProfileStatusMapper::GetNameForGroupProfileStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
