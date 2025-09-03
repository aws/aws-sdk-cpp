/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/Collaboration.h>
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

Collaboration::Collaboration(JsonView jsonValue)
{
  *this = jsonValue;
}

Collaboration& Collaboration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creatorAccountId"))
  {
    m_creatorAccountId = jsonValue.GetString("creatorAccountId");
    m_creatorAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creatorDisplayName"))
  {
    m_creatorDisplayName = jsonValue.GetString("creatorDisplayName");
    m_creatorDisplayNameHasBeenSet = true;
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
  if(jsonValue.ValueExists("memberStatus"))
  {
    m_memberStatus = MemberStatusMapper::GetMemberStatusForName(jsonValue.GetString("memberStatus"));
    m_memberStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipId"))
  {
    m_membershipId = jsonValue.GetString("membershipId");
    m_membershipIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipArn"))
  {
    m_membershipArn = jsonValue.GetString("membershipArn");
    m_membershipArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataEncryptionMetadata"))
  {
    m_dataEncryptionMetadata = jsonValue.GetObject("dataEncryptionMetadata");
    m_dataEncryptionMetadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryLogStatus"))
  {
    m_queryLogStatus = CollaborationQueryLogStatusMapper::GetCollaborationQueryLogStatusForName(jsonValue.GetString("queryLogStatus"));
    m_queryLogStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobLogStatus"))
  {
    m_jobLogStatus = CollaborationJobLogStatusMapper::GetCollaborationJobLogStatusForName(jsonValue.GetString("jobLogStatus"));
    m_jobLogStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("analyticsEngine"))
  {
    m_analyticsEngine = AnalyticsEngineMapper::GetAnalyticsEngineForName(jsonValue.GetString("analyticsEngine"));
    m_analyticsEngineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoApprovedChangeTypes"))
  {
    Aws::Utils::Array<JsonView> autoApprovedChangeTypesJsonList = jsonValue.GetArray("autoApprovedChangeTypes");
    for(unsigned autoApprovedChangeTypesIndex = 0; autoApprovedChangeTypesIndex < autoApprovedChangeTypesJsonList.GetLength(); ++autoApprovedChangeTypesIndex)
    {
      m_autoApprovedChangeTypes.push_back(AutoApprovedChangeTypeMapper::GetAutoApprovedChangeTypeForName(autoApprovedChangeTypesJsonList[autoApprovedChangeTypesIndex].AsString()));
    }
    m_autoApprovedChangeTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue Collaboration::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_creatorAccountIdHasBeenSet)
  {
   payload.WithString("creatorAccountId", m_creatorAccountId);

  }

  if(m_creatorDisplayNameHasBeenSet)
  {
   payload.WithString("creatorDisplayName", m_creatorDisplayName);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_memberStatusHasBeenSet)
  {
   payload.WithString("memberStatus", MemberStatusMapper::GetNameForMemberStatus(m_memberStatus));
  }

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("membershipId", m_membershipId);

  }

  if(m_membershipArnHasBeenSet)
  {
   payload.WithString("membershipArn", m_membershipArn);

  }

  if(m_dataEncryptionMetadataHasBeenSet)
  {
   payload.WithObject("dataEncryptionMetadata", m_dataEncryptionMetadata.Jsonize());

  }

  if(m_queryLogStatusHasBeenSet)
  {
   payload.WithString("queryLogStatus", CollaborationQueryLogStatusMapper::GetNameForCollaborationQueryLogStatus(m_queryLogStatus));
  }

  if(m_jobLogStatusHasBeenSet)
  {
   payload.WithString("jobLogStatus", CollaborationJobLogStatusMapper::GetNameForCollaborationJobLogStatus(m_jobLogStatus));
  }

  if(m_analyticsEngineHasBeenSet)
  {
   payload.WithString("analyticsEngine", AnalyticsEngineMapper::GetNameForAnalyticsEngine(m_analyticsEngine));
  }

  if(m_autoApprovedChangeTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoApprovedChangeTypesJsonList(m_autoApprovedChangeTypes.size());
   for(unsigned autoApprovedChangeTypesIndex = 0; autoApprovedChangeTypesIndex < autoApprovedChangeTypesJsonList.GetLength(); ++autoApprovedChangeTypesIndex)
   {
     autoApprovedChangeTypesJsonList[autoApprovedChangeTypesIndex].AsString(AutoApprovedChangeTypeMapper::GetNameForAutoApprovedChangeType(m_autoApprovedChangeTypes[autoApprovedChangeTypesIndex]));
   }
   payload.WithArray("autoApprovedChangeTypes", std::move(autoApprovedChangeTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
