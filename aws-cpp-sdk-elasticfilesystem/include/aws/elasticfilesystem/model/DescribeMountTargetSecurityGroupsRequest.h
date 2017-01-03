﻿/*
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
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargetSecurityGroupsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EFS_API DescribeMountTargetSecurityGroupsRequest : public EFSRequest
  {
  public:
    DescribeMountTargetSecurityGroupsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline const Aws::String& GetMountTargetId() const{ return m_mountTargetId; }

    /**
     * <p>ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline void SetMountTargetId(const Aws::String& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = value; }

    /**
     * <p>ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline void SetMountTargetId(Aws::String&& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = value; }

    /**
     * <p>ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline void SetMountTargetId(const char* value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId.assign(value); }

    /**
     * <p>ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline DescribeMountTargetSecurityGroupsRequest& WithMountTargetId(const Aws::String& value) { SetMountTargetId(value); return *this;}

    /**
     * <p>ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline DescribeMountTargetSecurityGroupsRequest& WithMountTargetId(Aws::String&& value) { SetMountTargetId(value); return *this;}

    /**
     * <p>ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline DescribeMountTargetSecurityGroupsRequest& WithMountTargetId(const char* value) { SetMountTargetId(value); return *this;}

  private:
    Aws::String m_mountTargetId;
    bool m_mountTargetIdHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
