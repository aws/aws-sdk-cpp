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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for <a>DescribeStackResources</a> action.</p>
   */
  class AWS_CLOUDFORMATION_API DescribeStackResourcesRequest : public CloudFormationRequest
  {
  public:
    DescribeStackResourcesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p> <p>Required: Conditional. If you do not specify
     * <code>StackName</code>, you must specify <code>PhysicalResourceId</code>.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p> <p>Required: Conditional. If you do not specify
     * <code>StackName</code>, you must specify <code>PhysicalResourceId</code>.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p> <p>Required: Conditional. If you do not specify
     * <code>StackName</code>, you must specify <code>PhysicalResourceId</code>.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p> <p>Required: Conditional. If you do not specify
     * <code>StackName</code>, you must specify <code>PhysicalResourceId</code>.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p> <p>Required: Conditional. If you do not specify
     * <code>StackName</code>, you must specify <code>PhysicalResourceId</code>.</p>
     */
    inline DescribeStackResourcesRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p> <p>Required: Conditional. If you do not specify
     * <code>StackName</code>, you must specify <code>PhysicalResourceId</code>.</p>
     */
    inline DescribeStackResourcesRequest& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that is associated with the stack, which are
     * not always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p> <p>Required: Conditional. If you do not specify
     * <code>StackName</code>, you must specify <code>PhysicalResourceId</code>.</p>
     */
    inline DescribeStackResourcesRequest& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourcesRequest& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourcesRequest& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourcesRequest& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p> <p>For example, for an Amazon
     * Elastic Compute Cloud (EC2) instance, <code>PhysicalResourceId</code>
     * corresponds to the <code>InstanceId</code>. You can pass the EC2
     * <code>InstanceId</code> to <code>DescribeStackResources</code> to find which
     * stack the instance belongs to and what other resources are part of the
     * stack.</p> <p>Required: Conditional. If you do not specify
     * <code>PhysicalResourceId</code>, you must specify <code>StackName</code>.</p>
     * <p>Default: There is no default value.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p> <p>For example, for an Amazon
     * Elastic Compute Cloud (EC2) instance, <code>PhysicalResourceId</code>
     * corresponds to the <code>InstanceId</code>. You can pass the EC2
     * <code>InstanceId</code> to <code>DescribeStackResources</code> to find which
     * stack the instance belongs to and what other resources are part of the
     * stack.</p> <p>Required: Conditional. If you do not specify
     * <code>PhysicalResourceId</code>, you must specify <code>StackName</code>.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p> <p>For example, for an Amazon
     * Elastic Compute Cloud (EC2) instance, <code>PhysicalResourceId</code>
     * corresponds to the <code>InstanceId</code>. You can pass the EC2
     * <code>InstanceId</code> to <code>DescribeStackResources</code> to find which
     * stack the instance belongs to and what other resources are part of the
     * stack.</p> <p>Required: Conditional. If you do not specify
     * <code>PhysicalResourceId</code>, you must specify <code>StackName</code>.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p> <p>For example, for an Amazon
     * Elastic Compute Cloud (EC2) instance, <code>PhysicalResourceId</code>
     * corresponds to the <code>InstanceId</code>. You can pass the EC2
     * <code>InstanceId</code> to <code>DescribeStackResources</code> to find which
     * stack the instance belongs to and what other resources are part of the
     * stack.</p> <p>Required: Conditional. If you do not specify
     * <code>PhysicalResourceId</code>, you must specify <code>StackName</code>.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p> <p>For example, for an Amazon
     * Elastic Compute Cloud (EC2) instance, <code>PhysicalResourceId</code>
     * corresponds to the <code>InstanceId</code>. You can pass the EC2
     * <code>InstanceId</code> to <code>DescribeStackResources</code> to find which
     * stack the instance belongs to and what other resources are part of the
     * stack.</p> <p>Required: Conditional. If you do not specify
     * <code>PhysicalResourceId</code>, you must specify <code>StackName</code>.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourcesRequest& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p> <p>For example, for an Amazon
     * Elastic Compute Cloud (EC2) instance, <code>PhysicalResourceId</code>
     * corresponds to the <code>InstanceId</code>. You can pass the EC2
     * <code>InstanceId</code> to <code>DescribeStackResources</code> to find which
     * stack the instance belongs to and what other resources are part of the
     * stack.</p> <p>Required: Conditional. If you do not specify
     * <code>PhysicalResourceId</code>, you must specify <code>StackName</code>.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourcesRequest& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by AWS CloudFormation.</p> <p>For example, for an Amazon
     * Elastic Compute Cloud (EC2) instance, <code>PhysicalResourceId</code>
     * corresponds to the <code>InstanceId</code>. You can pass the EC2
     * <code>InstanceId</code> to <code>DescribeStackResources</code> to find which
     * stack the instance belongs to and what other resources are part of the
     * stack.</p> <p>Required: Conditional. If you do not specify
     * <code>PhysicalResourceId</code>, you must specify <code>StackName</code>.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourcesRequest& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}

  private:
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet;
    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
