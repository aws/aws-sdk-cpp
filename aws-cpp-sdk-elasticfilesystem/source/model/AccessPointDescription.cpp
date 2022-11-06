/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/AccessPointDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

AccessPointDescription::AccessPointDescription() : 
    m_clientTokenHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_accessPointIdHasBeenSet(false),
    m_accessPointArnHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_posixUserHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_lifeCycleStateHasBeenSet(false)
{
}

AccessPointDescription::AccessPointDescription(JsonView jsonValue) : 
    m_clientTokenHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_accessPointIdHasBeenSet(false),
    m_accessPointArnHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_posixUserHasBeenSet(false),
    m_rootDirectoryHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_lifeCycleState(LifeCycleState::NOT_SET),
    m_lifeCycleStateHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPointDescription& AccessPointDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");

    m_clientTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessPointId"))
  {
    m_accessPointId = jsonValue.GetString("AccessPointId");

    m_accessPointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessPointArn"))
  {
    m_accessPointArn = jsonValue.GetString("AccessPointArn");

    m_accessPointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PosixUser"))
  {
    m_posixUser = jsonValue.GetObject("PosixUser");

    m_posixUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootDirectory"))
  {
    m_rootDirectory = jsonValue.GetObject("RootDirectory");

    m_rootDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifeCycleState"))
  {
    m_lifeCycleState = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("LifeCycleState"));

    m_lifeCycleStateHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPointDescription::Jsonize() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_accessPointIdHasBeenSet)
  {
   payload.WithString("AccessPointId", m_accessPointId);

  }

  if(m_accessPointArnHasBeenSet)
  {
   payload.WithString("AccessPointArn", m_accessPointArn);

  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_posixUserHasBeenSet)
  {
   payload.WithObject("PosixUser", m_posixUser.Jsonize());

  }

  if(m_rootDirectoryHasBeenSet)
  {
   payload.WithObject("RootDirectory", m_rootDirectory.Jsonize());

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_lifeCycleStateHasBeenSet)
  {
   payload.WithString("LifeCycleState", LifeCycleStateMapper::GetNameForLifeCycleState(m_lifeCycleState));
  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
