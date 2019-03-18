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
  class AWS_GREENGRASS_API ResourceAccessPolicy
  {
  public:
    ResourceAccessPolicy();
    ResourceAccessPolicy(Aws::Utils::Json::JsonView jsonValue);
    ResourceAccessPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The permissions that the Lambda function has to the resource. Can be one of
     * ''rw'' (read/write) or ''ro'' (read-only).
     */
    inline const Permission& GetPermission() const{ return m_permission; }

    /**
     * The permissions that the Lambda function has to the resource. Can be one of
     * ''rw'' (read/write) or ''ro'' (read-only).
     */
    inline bool PermissionHasBeenSet() const { return m_permissionHasBeenSet; }

    /**
     * The permissions that the Lambda function has to the resource. Can be one of
     * ''rw'' (read/write) or ''ro'' (read-only).
     */
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * The permissions that the Lambda function has to the resource. Can be one of
     * ''rw'' (read/write) or ''ro'' (read-only).
     */
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * The permissions that the Lambda function has to the resource. Can be one of
     * ''rw'' (read/write) or ''ro'' (read-only).
     */
    inline ResourceAccessPolicy& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * The permissions that the Lambda function has to the resource. Can be one of
     * ''rw'' (read/write) or ''ro'' (read-only).
     */
    inline ResourceAccessPolicy& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}


    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline ResourceAccessPolicy& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline ResourceAccessPolicy& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * The ID of the resource. (This ID is assigned to the resource when you create the
     * resource definiton.)
     */
    inline ResourceAccessPolicy& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Permission m_permission;
    bool m_permissionHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
