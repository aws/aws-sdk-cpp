/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/model/RootStorage.h>
#include <aws/workspaces/model/UserStorage.h>
#include <aws/workspaces/model/ComputeType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a WorkSpace bundle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceBundle">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API WorkspaceBundle
  {
  public:
    WorkspaceBundle();
    WorkspaceBundle(Aws::Utils::Json::JsonView jsonValue);
    WorkspaceBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bundle identifier.</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p>The bundle identifier.</p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p>The bundle identifier.</p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p>The bundle identifier.</p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

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
    inline WorkspaceBundle& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

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
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bundle.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

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
    inline WorkspaceBundle& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bundle.</p>
     */
    inline WorkspaceBundle& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline WorkspaceBundle& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline WorkspaceBundle& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the bundle. This is the account identifier of the owner, or
     * <code>AMAZON</code> if the bundle is provided by AWS.</p>
     */
    inline WorkspaceBundle& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>A description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description.</p>
     */
    inline WorkspaceBundle& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description.</p>
     */
    inline WorkspaceBundle& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description.</p>
     */
    inline WorkspaceBundle& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The size of the root volume.</p>
     */
    inline const RootStorage& GetRootStorage() const{ return m_rootStorage; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline bool RootStorageHasBeenSet() const { return m_rootStorageHasBeenSet; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline void SetRootStorage(const RootStorage& value) { m_rootStorageHasBeenSet = true; m_rootStorage = value; }

    /**
     * <p>The size of the root volume.</p>
     */
    inline void SetRootStorage(RootStorage&& value) { m_rootStorageHasBeenSet = true; m_rootStorage = std::move(value); }

    /**
     * <p>The size of the root volume.</p>
     */
    inline WorkspaceBundle& WithRootStorage(const RootStorage& value) { SetRootStorage(value); return *this;}

    /**
     * <p>The size of the root volume.</p>
     */
    inline WorkspaceBundle& WithRootStorage(RootStorage&& value) { SetRootStorage(std::move(value)); return *this;}


    /**
     * <p>The size of the user storage.</p>
     */
    inline const UserStorage& GetUserStorage() const{ return m_userStorage; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline bool UserStorageHasBeenSet() const { return m_userStorageHasBeenSet; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline void SetUserStorage(const UserStorage& value) { m_userStorageHasBeenSet = true; m_userStorage = value; }

    /**
     * <p>The size of the user storage.</p>
     */
    inline void SetUserStorage(UserStorage&& value) { m_userStorageHasBeenSet = true; m_userStorage = std::move(value); }

    /**
     * <p>The size of the user storage.</p>
     */
    inline WorkspaceBundle& WithUserStorage(const UserStorage& value) { SetUserStorage(value); return *this;}

    /**
     * <p>The size of the user storage.</p>
     */
    inline WorkspaceBundle& WithUserStorage(UserStorage&& value) { SetUserStorage(std::move(value)); return *this;}


    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline WorkspaceBundle& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline WorkspaceBundle& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}

  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    RootStorage m_rootStorage;
    bool m_rootStorageHasBeenSet;

    UserStorage m_userStorage;
    bool m_userStorageHasBeenSet;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
