/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/Permission.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * A policy used by the function to access a resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResourceAccessPolicy">AWS
   * API Reference</a></p>
   */
  class ResourceAccessPolicy
  {
  public:
    AWS_GREENGRASS_API ResourceAccessPolicy() = default;
    AWS_GREENGRASS_API ResourceAccessPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API ResourceAccessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The permissions that the Lambda function has to the resource. Can be one of
     * ''rw'' (read/write) or ''ro'' (read-only).
     */
    inline Permission GetPermission() const { return m_permission; }
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }
    inline void SetPermission(Permission value) { m_permissionHasBeenSet = true; m_permission = value; }
    inline ResourceAccessPolicy& WithPermission(Permission value) { SetPermission(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResourceAccessPolicy& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}
  private:

    Permission m_permission{Permission::NOT_SET};
    bool m_permissionHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
