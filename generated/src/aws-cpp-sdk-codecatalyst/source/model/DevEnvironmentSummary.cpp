/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/DevEnvironmentSummary.h>
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

DevEnvironmentSummary::DevEnvironmentSummary() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_status(DevEnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_repositoriesHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_idesHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_inactivityTimeoutMinutes(0),
    m_inactivityTimeoutMinutesHasBeenSet(false),
    m_persistentStorageHasBeenSet(false)
{
}

DevEnvironmentSummary::DevEnvironmentSummary(JsonView jsonValue) : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_creatorIdHasBeenSet(false),
    m_status(DevEnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_repositoriesHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_idesHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_inactivityTimeoutMinutes(0),
    m_inactivityTimeoutMinutesHasBeenSet(false),
    m_persistentStorageHasBeenSet(false)
{
  *this = jsonValue;
}

DevEnvironmentSummary& DevEnvironmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("spaceName"))
  {
    m_spaceName = jsonValue.GetString("spaceName");

    m_spaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creatorId"))
  {
    m_creatorId = jsonValue.GetString("creatorId");

    m_creatorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DevEnvironmentStatusMapper::GetDevEnvironmentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositories"))
  {
    Aws::Utils::Array<JsonView> repositoriesJsonList = jsonValue.GetArray("repositories");
    for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
    {
      m_repositories.push_back(repositoriesJsonList[repositoriesIndex].AsObject());
    }
    m_repositoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ides"))
  {
    Aws::Utils::Array<JsonView> idesJsonList = jsonValue.GetArray("ides");
    for(unsigned idesIndex = 0; idesIndex < idesJsonList.GetLength(); ++idesIndex)
    {
      m_ides.push_back(idesJsonList[idesIndex].AsObject());
    }
    m_idesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inactivityTimeoutMinutes"))
  {
    m_inactivityTimeoutMinutes = jsonValue.GetInteger("inactivityTimeoutMinutes");

    m_inactivityTimeoutMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("persistentStorage"))
  {
    m_persistentStorage = jsonValue.GetObject("persistentStorage");

    m_persistentStorageHasBeenSet = true;
  }

  return *this;
}

JsonValue DevEnvironmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_spaceNameHasBeenSet)
  {
   payload.WithString("spaceName", m_spaceName);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_creatorIdHasBeenSet)
  {
   payload.WithString("creatorId", m_creatorId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DevEnvironmentStatusMapper::GetNameForDevEnvironmentStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_repositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoriesJsonList(m_repositories.size());
   for(unsigned repositoriesIndex = 0; repositoriesIndex < repositoriesJsonList.GetLength(); ++repositoriesIndex)
   {
     repositoriesJsonList[repositoriesIndex].AsObject(m_repositories[repositoriesIndex].Jsonize());
   }
   payload.WithArray("repositories", std::move(repositoriesJsonList));

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("alias", m_alias);

  }

  if(m_idesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idesJsonList(m_ides.size());
   for(unsigned idesIndex = 0; idesIndex < idesJsonList.GetLength(); ++idesIndex)
   {
     idesJsonList[idesIndex].AsObject(m_ides[idesIndex].Jsonize());
   }
   payload.WithArray("ides", std::move(idesJsonList));

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_inactivityTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("inactivityTimeoutMinutes", m_inactivityTimeoutMinutes);

  }

  if(m_persistentStorageHasBeenSet)
  {
   payload.WithObject("persistentStorage", m_persistentStorage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
