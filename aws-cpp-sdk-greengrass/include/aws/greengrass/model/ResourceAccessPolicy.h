﻿/*
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
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Policy for the function to access a resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResourceAccessPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API ResourceAccessPolicy
  {
  public:
    ResourceAccessPolicy();
    ResourceAccessPolicy(const Aws::Utils::Json::JsonValue& jsonValue);
    ResourceAccessPolicy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The function's access permission to the resource.
     */
    inline const Permission& GetPermission() const{ return m_permission; }

    /**
     * The function's access permission to the resource.
     */
    inline void SetPermission(const Permission& value) { m_permissionHasBeenSet = true; m_permission = value; }

    /**
     * The function's access permission to the resource.
     */
    inline void SetPermission(Permission&& value) { m_permissionHasBeenSet = true; m_permission = std::move(value); }

    /**
     * The function's access permission to the resource.
     */
    inline ResourceAccessPolicy& WithPermission(const Permission& value) { SetPermission(value); return *this;}

    /**
     * The function's access permission to the resource.
     */
    inline ResourceAccessPolicy& WithPermission(Permission&& value) { SetPermission(std::move(value)); return *this;}


    /**
     * Id of the resource. A reference to the resource definiton.
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * Id of the resource. A reference to the resource definiton.
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * Id of the resource. A reference to the resource definiton.
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * Id of the resource. A reference to the resource definiton.
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * Id of the resource. A reference to the resource definiton.
     */
    inline ResourceAccessPolicy& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * Id of the resource. A reference to the resource definiton.
     */
    inline ResourceAccessPolicy& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * Id of the resource. A reference to the resource definiton.
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
