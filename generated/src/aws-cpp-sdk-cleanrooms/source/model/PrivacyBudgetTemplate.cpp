/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/PrivacyBudgetTemplate.h>
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

PrivacyBudgetTemplate::PrivacyBudgetTemplate() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_membershipIdHasBeenSet(false),
    m_membershipArnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_collaborationArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_privacyBudgetType(PrivacyBudgetType::NOT_SET),
    m_privacyBudgetTypeHasBeenSet(false),
    m_autoRefresh(PrivacyBudgetTemplateAutoRefresh::NOT_SET),
    m_autoRefreshHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

PrivacyBudgetTemplate::PrivacyBudgetTemplate(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_membershipIdHasBeenSet(false),
    m_membershipArnHasBeenSet(false),
    m_collaborationIdHasBeenSet(false),
    m_collaborationArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_privacyBudgetType(PrivacyBudgetType::NOT_SET),
    m_privacyBudgetTypeHasBeenSet(false),
    m_autoRefresh(PrivacyBudgetTemplateAutoRefresh::NOT_SET),
    m_autoRefreshHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = jsonValue;
}

PrivacyBudgetTemplate& PrivacyBudgetTemplate::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("privacyBudgetType"))
  {
    m_privacyBudgetType = PrivacyBudgetTypeMapper::GetPrivacyBudgetTypeForName(jsonValue.GetString("privacyBudgetType"));

    m_privacyBudgetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoRefresh"))
  {
    m_autoRefresh = PrivacyBudgetTemplateAutoRefreshMapper::GetPrivacyBudgetTemplateAutoRefreshForName(jsonValue.GetString("autoRefresh"));

    m_autoRefreshHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameters"))
  {
    m_parameters = jsonValue.GetObject("parameters");

    m_parametersHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivacyBudgetTemplate::Jsonize() const
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

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("membershipId", m_membershipId);

  }

  if(m_membershipArnHasBeenSet)
  {
   payload.WithString("membershipArn", m_membershipArn);

  }

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_collaborationArnHasBeenSet)
  {
   payload.WithString("collaborationArn", m_collaborationArn);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_privacyBudgetTypeHasBeenSet)
  {
   payload.WithString("privacyBudgetType", PrivacyBudgetTypeMapper::GetNameForPrivacyBudgetType(m_privacyBudgetType));
  }

  if(m_autoRefreshHasBeenSet)
  {
   payload.WithString("autoRefresh", PrivacyBudgetTemplateAutoRefreshMapper::GetNameForPrivacyBudgetTemplateAutoRefresh(m_autoRefresh));
  }

  if(m_parametersHasBeenSet)
  {
   payload.WithObject("parameters", m_parameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
