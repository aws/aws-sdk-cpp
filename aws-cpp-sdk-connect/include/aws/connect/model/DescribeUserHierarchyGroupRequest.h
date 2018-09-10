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
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API DescribeUserHierarchyGroupRequest : public ConnectRequest
  {
  public:
    DescribeUserHierarchyGroupRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUserHierarchyGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the hierarchy group to return.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const{ return m_hierarchyGroupId; }

    /**
     * <p>The identifier for the hierarchy group to return.</p>
     */
    inline void SetHierarchyGroupId(const Aws::String& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = value; }

    /**
     * <p>The identifier for the hierarchy group to return.</p>
     */
    inline void SetHierarchyGroupId(Aws::String&& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = std::move(value); }

    /**
     * <p>The identifier for the hierarchy group to return.</p>
     */
    inline void SetHierarchyGroupId(const char* value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId.assign(value); }

    /**
     * <p>The identifier for the hierarchy group to return.</p>
     */
    inline DescribeUserHierarchyGroupRequest& WithHierarchyGroupId(const Aws::String& value) { SetHierarchyGroupId(value); return *this;}

    /**
     * <p>The identifier for the hierarchy group to return.</p>
     */
    inline DescribeUserHierarchyGroupRequest& WithHierarchyGroupId(Aws::String&& value) { SetHierarchyGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the hierarchy group to return.</p>
     */
    inline DescribeUserHierarchyGroupRequest& WithHierarchyGroupId(const char* value) { SetHierarchyGroupId(value); return *this;}


    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline DescribeUserHierarchyGroupRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline DescribeUserHierarchyGroupRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline DescribeUserHierarchyGroupRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_hierarchyGroupId;
    bool m_hierarchyGroupIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
