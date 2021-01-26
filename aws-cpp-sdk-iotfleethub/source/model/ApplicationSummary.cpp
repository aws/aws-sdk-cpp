/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleethub/model/ApplicationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetHub
{
namespace Model
{

ApplicationSummary::ApplicationSummary() : 
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationDescriptionHasBeenSet(false),
    m_applicationUrlHasBeenSet(false),
    m_applicationCreationDate(0),
    m_applicationCreationDateHasBeenSet(false),
    m_applicationLastUpdateDate(0),
    m_applicationLastUpdateDateHasBeenSet(false),
    m_applicationState(ApplicationState::NOT_SET),
    m_applicationStateHasBeenSet(false)
{
}

ApplicationSummary::ApplicationSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationDescriptionHasBeenSet(false),
    m_applicationUrlHasBeenSet(false),
    m_applicationCreationDate(0),
    m_applicationCreationDateHasBeenSet(false),
    m_applicationLastUpdateDate(0),
    m_applicationLastUpdateDateHasBeenSet(false),
    m_applicationState(ApplicationState::NOT_SET),
    m_applicationStateHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSummary& ApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");

    m_applicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationDescription"))
  {
    m_applicationDescription = jsonValue.GetString("applicationDescription");

    m_applicationDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationUrl"))
  {
    m_applicationUrl = jsonValue.GetString("applicationUrl");

    m_applicationUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationCreationDate"))
  {
    m_applicationCreationDate = jsonValue.GetInt64("applicationCreationDate");

    m_applicationCreationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationLastUpdateDate"))
  {
    m_applicationLastUpdateDate = jsonValue.GetInt64("applicationLastUpdateDate");

    m_applicationLastUpdateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationState"))
  {
    m_applicationState = ApplicationStateMapper::GetApplicationStateForName(jsonValue.GetString("applicationState"));

    m_applicationStateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_applicationDescriptionHasBeenSet)
  {
   payload.WithString("applicationDescription", m_applicationDescription);

  }

  if(m_applicationUrlHasBeenSet)
  {
   payload.WithString("applicationUrl", m_applicationUrl);

  }

  if(m_applicationCreationDateHasBeenSet)
  {
   payload.WithInt64("applicationCreationDate", m_applicationCreationDate);

  }

  if(m_applicationLastUpdateDateHasBeenSet)
  {
   payload.WithInt64("applicationLastUpdateDate", m_applicationLastUpdateDate);

  }

  if(m_applicationStateHasBeenSet)
  {
   payload.WithString("applicationState", ApplicationStateMapper::GetNameForApplicationState(m_applicationState));
  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetHub
} // namespace Aws
