﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The input for <a>DescribeStackResource</a> action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResourceInput">AWS
   * API Reference</a></p>
   */
  class DescribeStackResourceRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStackResource"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline DescribeStackResourceRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline DescribeStackResourceRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name or the unique stack ID that's associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Default: There
     * is no default value.</p>
     */
    inline DescribeStackResourceRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetLogicalResourceId(const Aws::String& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetLogicalResourceId(Aws::String&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline void SetLogicalResourceId(const char* value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId.assign(value); }

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourceRequest& WithLogicalResourceId(const Aws::String& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourceRequest& WithLogicalResourceId(Aws::String&& value) { SetLogicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The logical name of the resource as specified in the template.</p>
     * <p>Default: There is no default value.</p>
     */
    inline DescribeStackResourceRequest& WithLogicalResourceId(const char* value) { SetLogicalResourceId(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
