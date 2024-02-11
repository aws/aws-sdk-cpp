/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CollaborationConfiguredAudienceModelAssociation.h>
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

CollaborationConfiguredAudienceModelAssociation::CollaborationConfiguredAudienceModelAssociation() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_collaborationArnHasBeenSet(false),
    m_configuredAudienceModelArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creatorAccountIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CollaborationConfiguredAudienceModelAssociation::CollaborationConfiguredAudienceModelAssociation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_collaborationArnHasBeenSet(false),
    m_configuredAudienceModelArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creatorAccountIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CollaborationConfiguredAudienceModelAssociation& CollaborationConfiguredAudienceModelAssociation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");

    m_collaborationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collaborationArn"))
  {
    m_collaborationArn = jsonValue.GetString("collaborationArn");

    m_collaborationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuredAudienceModelArn"))
  {
    m_configuredAudienceModelArn = jsonValue.GetString("configuredAudienceModelArn");

    m_configuredAudienceModelArnHasBeenSet = true;
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

  return *this;
}

JsonValue CollaborationConfiguredAudienceModelAssociation::Jsonize() const
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

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_collaborationArnHasBeenSet)
  {
   payload.WithString("collaborationArn", m_collaborationArn);

  }

  if(m_configuredAudienceModelArnHasBeenSet)
  {
   payload.WithString("configuredAudienceModelArn", m_configuredAudienceModelArn);

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

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
