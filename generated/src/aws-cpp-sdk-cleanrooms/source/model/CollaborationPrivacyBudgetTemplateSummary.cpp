/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/CollaborationPrivacyBudgetTemplateSummary.h>
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

CollaborationPrivacyBudgetTemplateSummary::CollaborationPrivacyBudgetTemplateSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_collaborationArnHasBeenSet(false),
    m_creatorAccountIdHasBeenSet(false),
    m_privacyBudgetType(PrivacyBudgetType::NOT_SET),
    m_privacyBudgetTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CollaborationPrivacyBudgetTemplateSummary::CollaborationPrivacyBudgetTemplateSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_collaborationArnHasBeenSet(false),
    m_creatorAccountIdHasBeenSet(false),
    m_privacyBudgetType(PrivacyBudgetType::NOT_SET),
    m_privacyBudgetTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CollaborationPrivacyBudgetTemplateSummary& CollaborationPrivacyBudgetTemplateSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("creatorAccountId"))
  {
    m_creatorAccountId = jsonValue.GetString("creatorAccountId");

    m_creatorAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privacyBudgetType"))
  {
    m_privacyBudgetType = PrivacyBudgetTypeMapper::GetPrivacyBudgetTypeForName(jsonValue.GetString("privacyBudgetType"));

    m_privacyBudgetTypeHasBeenSet = true;
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

JsonValue CollaborationPrivacyBudgetTemplateSummary::Jsonize() const
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

  if(m_creatorAccountIdHasBeenSet)
  {
   payload.WithString("creatorAccountId", m_creatorAccountId);

  }

  if(m_privacyBudgetTypeHasBeenSet)
  {
   payload.WithString("privacyBudgetType", PrivacyBudgetTypeMapper::GetNameForPrivacyBudgetType(m_privacyBudgetType));
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
