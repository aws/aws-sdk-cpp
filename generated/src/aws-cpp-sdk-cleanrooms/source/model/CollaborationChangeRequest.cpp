/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CollaborationChangeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

CollaborationChangeRequest::CollaborationChangeRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

CollaborationChangeRequest& CollaborationChangeRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");
    m_collaborationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ChangeRequestStatusMapper::GetChangeRequestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isAutoApproved"))
  {
    m_isAutoApproved = jsonValue.GetBool("isAutoApproved");
    m_isAutoApprovedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("changes"))
  {
    Aws::Utils::Array<JsonView> changesJsonList = jsonValue.GetArray("changes");
    for(unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex)
    {
      m_changes.push_back(changesJsonList[changesIndex].AsObject());
    }
    m_changesHasBeenSet = true;
  }
  return *this;
}

JsonValue CollaborationChangeRequest::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ChangeRequestStatusMapper::GetNameForChangeRequestStatus(m_status));
  }

  if(m_isAutoApprovedHasBeenSet)
  {
   payload.WithBool("isAutoApproved", m_isAutoApproved);

  }

  if(m_changesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> changesJsonList(m_changes.size());
   for(unsigned changesIndex = 0; changesIndex < changesJsonList.GetLength(); ++changesIndex)
   {
     changesJsonList[changesIndex].AsObject(m_changes[changesIndex].Jsonize());
   }
   payload.WithArray("changes", std::move(changesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
