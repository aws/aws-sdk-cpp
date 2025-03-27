/**
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
   * <p>The input for <a>DescribeStackResources</a> action.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DescribeStackResourcesInput">AWS
   * API Reference</a></p>
   */
  class DescribeStackResourcesRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStackResources"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or the unique stack ID that is associated with the stack, which
     * aren't always interchangeable:</p> <ul> <li> <p>Running stacks: You can specify
     * either the stack's name or its unique stack ID.</p> </li> <li> <p>Deleted
     * stacks: You must specify the unique stack ID.</p> </li> </ul> <p>Required:
     * Conditional. If you don't specify <code>StackName</code>, you must specify
     * <code>PhysicalResourceId</code>.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    DescribeStackResourcesRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical name of the resource as specified in the template.</p>
     */
    inline const Aws::String& GetLogicalResourceId() const { return m_logicalResourceId; }
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }
    template<typename LogicalResourceIdT = Aws::String>
    void SetLogicalResourceId(LogicalResourceIdT&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::forward<LogicalResourceIdT>(value); }
    template<typename LogicalResourceIdT = Aws::String>
    DescribeStackResourcesRequest& WithLogicalResourceId(LogicalResourceIdT&& value) { SetLogicalResourceId(std::forward<LogicalResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or unique identifier that corresponds to a physical instance ID of a
     * resource supported by CloudFormation.</p> <p>For example, for an Amazon Elastic
     * Compute Cloud (EC2) instance, <code>PhysicalResourceId</code> corresponds to the
     * <code>InstanceId</code>. You can pass the EC2 <code>InstanceId</code> to
     * <code>DescribeStackResources</code> to find which stack the instance belongs to
     * and what other resources are part of the stack.</p> <p>Required: Conditional. If
     * you don't specify <code>PhysicalResourceId</code>, you must specify
     * <code>StackName</code>.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const { return m_physicalResourceId; }
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }
    template<typename PhysicalResourceIdT = Aws::String>
    void SetPhysicalResourceId(PhysicalResourceIdT&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::forward<PhysicalResourceIdT>(value); }
    template<typename PhysicalResourceIdT = Aws::String>
    DescribeStackResourcesRequest& WithPhysicalResourceId(PhysicalResourceIdT&& value) { SetPhysicalResourceId(std::forward<PhysicalResourceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
