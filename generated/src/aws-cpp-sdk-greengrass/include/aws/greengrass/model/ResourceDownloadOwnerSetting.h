/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/Permission.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * The owner setting for downloaded machine learning resources.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResourceDownloadOwnerSetting">AWS
   * API Reference</a></p>
   */
  class ResourceDownloadOwnerSetting
  {
  public:
    AWS_GREENGRASS_API ResourceDownloadOwnerSetting() = default;
    AWS_GREENGRASS_API ResourceDownloadOwnerSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API ResourceDownloadOwnerSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The group owner of the resource. This is the name of an existing Linux OS group
     * on the system or a GID. The group's permissions are added to the Lambda process.
     */
    inline const Aws::String& GetGroupOwner() const { return m_groupOwner; }
    inline bool GroupOwnerHasBeenSet() const { return m_groupOwnerHasBeenSet; }
    template<typename GroupOwnerT = Aws::String>
    void SetGroupOwner(GroupOwnerT&& value) { m_groupOwnerHasBeenSet = true; m_groupOwner = std::forward<GroupOwnerT>(value); }
    template<typename GroupOwnerT = Aws::String>
    ResourceDownloadOwnerSetting& WithGroupOwner(GroupOwnerT&& value) { SetGroupOwner(std::forward<GroupOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The permissions that the group owner has to the resource. Valid values are
     * ''rw'' (read/write) or ''ro'' (read-only).
     */
    inline Permission GetGroupPermission() const { return m_groupPermission; }
    inline bool GroupPermissionHasBeenSet() const { return m_groupPermissionHasBeenSet; }
    inline void SetGroupPermission(Permission value) { m_groupPermissionHasBeenSet = true; m_groupPermission = value; }
    inline ResourceDownloadOwnerSetting& WithGroupPermission(Permission value) { SetGroupPermission(value); return *this;}
    ///@}
  private:

    Aws::String m_groupOwner;
    bool m_groupOwnerHasBeenSet = false;

    Permission m_groupPermission{Permission::NOT_SET};
    bool m_groupPermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
