/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceBundle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkspaceBundle::WorkspaceBundle() : 
    m_bundleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_rootStorageHasBeenSet(false),
    m_userStorageHasBeenSet(false),
    m_computeTypeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

WorkspaceBundle::WorkspaceBundle(JsonView jsonValue) : 
    m_bundleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_rootStorageHasBeenSet(false),
    m_userStorageHasBeenSet(false),
    m_computeTypeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceBundle& WorkspaceBundle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BundleId"))
  {
    m_bundleId = jsonValue.GetString("BundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageId"))
  {
    m_imageId = jsonValue.GetString("ImageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootStorage"))
  {
    m_rootStorage = jsonValue.GetObject("RootStorage");

    m_rootStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserStorage"))
  {
    m_userStorage = jsonValue.GetObject("UserStorage");

    m_userStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputeType"))
  {
    m_computeType = jsonValue.GetObject("ComputeType");

    m_computeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceBundle::Jsonize() const
{
  JsonValue payload;

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_rootStorageHasBeenSet)
  {
   payload.WithObject("RootStorage", m_rootStorage.Jsonize());

  }

  if(m_userStorageHasBeenSet)
  {
   payload.WithObject("UserStorage", m_userStorage.Jsonize());

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithObject("ComputeType", m_computeType.Jsonize());

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
