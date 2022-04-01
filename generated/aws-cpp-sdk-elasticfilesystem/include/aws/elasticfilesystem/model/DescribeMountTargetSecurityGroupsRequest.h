﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMountTargetSecurityGroups"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline const Aws::String& GetMountTargetId() const{ return m_mountTargetId; }

    /**
     * <p>The ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline bool MountTargetIdHasBeenSet() const { return m_mountTargetIdHasBeenSet; }

    /**
     * <p>The ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline void SetMountTargetId(const Aws::String& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = value; }

    /**
     * <p>The ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline void SetMountTargetId(Aws::String&& value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId = std::move(value); }

    /**
     * <p>The ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline void SetMountTargetId(const char* value) { m_mountTargetIdHasBeenSet = true; m_mountTargetId.assign(value); }

    /**
     * <p>The ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline DescribeMountTargetSecurityGroupsRequest& WithMountTargetId(const Aws::String& value) { SetMountTargetId(value); return *this;}

    /**
     * <p>The ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline DescribeMountTargetSecurityGroupsRequest& WithMountTargetId(Aws::String&& value) { SetMountTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the mount target whose security groups you want to retrieve.</p>
     */
    inline DescribeMountTargetSecurityGroupsRequest& WithMountTargetId(const char* value) { SetMountTargetId(value); return *this;}

  private:

    Aws::String m_mountTargetId;
    bool m_mountTargetIdHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
