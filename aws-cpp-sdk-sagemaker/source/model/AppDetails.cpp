/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AppDetails::AppDetails() : 
    m_domainIdHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_status(AppStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_spaceNameHasBeenSet(false)
{
}

AppDetails::AppDetails(JsonView jsonValue) : 
    m_domainIdHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_appType(AppType::NOT_SET),
    m_appTypeHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_status(AppStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_spaceNameHasBeenSet(false)
{
  *this = jsonValue;
}

AppDetails& AppDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserProfileName"))
  {
    m_userProfileName = jsonValue.GetString("UserProfileName");

    m_userProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppType"))
  {
    m_appType = AppTypeMapper::GetAppTypeForName(jsonValue.GetString("AppType"));

    m_appTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppName"))
  {
    m_appName = jsonValue.GetString("AppName");

    m_appNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AppStatusMapper::GetAppStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpaceName"))
  {
    m_spaceName = jsonValue.GetString("SpaceName");

    m_spaceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AppDetails::Jsonize() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_userProfileNameHasBeenSet)
  {
   payload.WithString("UserProfileName", m_userProfileName);

  }

  if(m_appTypeHasBeenSet)
  {
   payload.WithString("AppType", AppTypeMapper::GetNameForAppType(m_appType));
  }

  if(m_appNameHasBeenSet)
  {
   payload.WithString("AppName", m_appName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AppStatusMapper::GetNameForAppStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_spaceNameHasBeenSet)
  {
   payload.WithString("SpaceName", m_spaceName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
