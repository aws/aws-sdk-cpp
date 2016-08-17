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
#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/UserStorage.h>
#include <aws/workspaces/model/ComputeType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Contains information about a WorkSpace bundle.</p>
   */
  class AWS_WORKSPACES_API WorkspaceBundle
  {
  public:
    WorkspaceBundle();
    WorkspaceBundle(const Aws::Utils::Json::JsonValue& jsonValue);
    WorkspaceBundle& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The bundle identifier.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The bundle identifier.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle identifier.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle identifier.</p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p>The bundle identifier.</p>
     */
    inline WorkspaceBundle& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle identifier.</p>
     */
    inline WorkspaceBundle& WithBundleId(Aws::String&& value) { SetBundleId(value); return *this;}

    /**
     * <p>The bundle identifier.</p>
     */
    inline WorkspaceBundle& WithBundleId(const char* value) { SetBundleId(value); return *this;}

    /**
     * <p>The name of the bundle.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bundle.</p>
     */
    inline WorkspaceBundle& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bundle.</p>
     */
    inline WorkspaceBundle& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bundle.</p>
     */
    inline WorkspaceBundle& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The owner of the bundle. This contains the owner's account identifier, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the bundle. This contains the owner's account identifier, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the bundle. This contains the owner's account identifier, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the bundle. This contains the owner's account identifier, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the bundle. This contains the owner's account identifier, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline WorkspaceBundle& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the bundle. This contains the owner's account identifier, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline WorkspaceBundle& WithOwner(Aws::String&& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the bundle. This contains the owner's account identifier, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline WorkspaceBundle& WithOwner(const char* value) { SetOwner(value); return *this;}

    /**
     * <p>The bundle description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The bundle description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The bundle description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The bundle description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The bundle description.</p>
     */
    inline WorkspaceBundle& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The bundle description.</p>
     */
    inline WorkspaceBundle& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The bundle description.</p>
     */
    inline WorkspaceBundle& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>A <a>UserStorage</a> object that specifies the amount of user storage that
     * the bundle contains.</p>
     */
    inline const UserStorage& GetUserStorage() const{ return m_userStorage; }

    /**
     * <p>A <a>UserStorage</a> object that specifies the amount of user storage that
     * the bundle contains.</p>
     */
    inline void SetUserStorage(const UserStorage& value) { m_userStorageHasBeenSet = true; m_userStorage = value; }

    /**
     * <p>A <a>UserStorage</a> object that specifies the amount of user storage that
     * the bundle contains.</p>
     */
    inline void SetUserStorage(UserStorage&& value) { m_userStorageHasBeenSet = true; m_userStorage = value; }

    /**
     * <p>A <a>UserStorage</a> object that specifies the amount of user storage that
     * the bundle contains.</p>
     */
    inline WorkspaceBundle& WithUserStorage(const UserStorage& value) { SetUserStorage(value); return *this;}

    /**
     * <p>A <a>UserStorage</a> object that specifies the amount of user storage that
     * the bundle contains.</p>
     */
    inline WorkspaceBundle& WithUserStorage(UserStorage&& value) { SetUserStorage(value); return *this;}

    /**
     * <p>A <a>ComputeType</a> object that specifies the compute type for the
     * bundle.</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>A <a>ComputeType</a> object that specifies the compute type for the
     * bundle.</p>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>A <a>ComputeType</a> object that specifies the compute type for the
     * bundle.</p>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>A <a>ComputeType</a> object that specifies the compute type for the
     * bundle.</p>
     */
    inline WorkspaceBundle& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>A <a>ComputeType</a> object that specifies the compute type for the
     * bundle.</p>
     */
    inline WorkspaceBundle& WithComputeType(ComputeType&& value) { SetComputeType(value); return *this;}

  private:
    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_owner;
    bool m_ownerHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    UserStorage m_userStorage;
    bool m_userStorageHasBeenSet;
    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
