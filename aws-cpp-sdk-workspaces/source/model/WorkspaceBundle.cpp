/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_userStorageHasBeenSet(false),
    m_computeTypeHasBeenSet(false)
{
}

WorkspaceBundle::WorkspaceBundle(const JsonValue& jsonValue) : 
    m_bundleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userStorageHasBeenSet(false),
    m_computeTypeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceBundle& WorkspaceBundle::operator =(const JsonValue& jsonValue)
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

  if(m_userStorageHasBeenSet)
  {
   payload.WithObject("UserStorage", m_userStorage.Jsonize());

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithObject("ComputeType", m_computeType.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws