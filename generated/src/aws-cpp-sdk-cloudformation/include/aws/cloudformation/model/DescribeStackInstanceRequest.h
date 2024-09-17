/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/CallAs.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class DescribeStackInstanceRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStackInstance"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or the unique stack ID of the stack set that you want to get stack
     * instance information for.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }
    inline DescribeStackInstanceRequest& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}
    inline DescribeStackInstanceRequest& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}
    inline DescribeStackInstanceRequest& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an Amazon Web Services account that's associated with this stack
     * instance.</p>
     */
    inline const Aws::String& GetStackInstanceAccount() const{ return m_stackInstanceAccount; }
    inline bool StackInstanceAccountHasBeenSet() const { return m_stackInstanceAccountHasBeenSet; }
    inline void SetStackInstanceAccount(const Aws::String& value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount = value; }
    inline void SetStackInstanceAccount(Aws::String&& value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount = std::move(value); }
    inline void SetStackInstanceAccount(const char* value) { m_stackInstanceAccountHasBeenSet = true; m_stackInstanceAccount.assign(value); }
    inline DescribeStackInstanceRequest& WithStackInstanceAccount(const Aws::String& value) { SetStackInstanceAccount(value); return *this;}
    inline DescribeStackInstanceRequest& WithStackInstanceAccount(Aws::String&& value) { SetStackInstanceAccount(std::move(value)); return *this;}
    inline DescribeStackInstanceRequest& WithStackInstanceAccount(const char* value) { SetStackInstanceAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a Region that's associated with this stack instance.</p>
     */
    inline const Aws::String& GetStackInstanceRegion() const{ return m_stackInstanceRegion; }
    inline bool StackInstanceRegionHasBeenSet() const { return m_stackInstanceRegionHasBeenSet; }
    inline void SetStackInstanceRegion(const Aws::String& value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion = value; }
    inline void SetStackInstanceRegion(Aws::String&& value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion = std::move(value); }
    inline void SetStackInstanceRegion(const char* value) { m_stackInstanceRegionHasBeenSet = true; m_stackInstanceRegion.assign(value); }
    inline DescribeStackInstanceRequest& WithStackInstanceRegion(const Aws::String& value) { SetStackInstanceRegion(value); return *this;}
    inline DescribeStackInstanceRequest& WithStackInstanceRegion(Aws::String&& value) { SetStackInstanceRegion(std::move(value)); return *this;}
    inline DescribeStackInstanceRequest& WithStackInstanceRegion(const char* value) { SetStackInstanceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] Specifies whether you are acting as an account
     * administrator in the organization's management account or as a delegated
     * administrator in a member account.</p> <p>By default, <code>SELF</code> is
     * specified. Use <code>SELF</code> for stack sets with self-managed
     * permissions.</p> <ul> <li> <p>If you are signed in to the management account,
     * specify <code>SELF</code>.</p> </li> <li> <p>If you are signed in to a delegated
     * administrator account, specify <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon
     * Web Services account must be registered as a delegated administrator in the
     * management account. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline const CallAs& GetCallAs() const{ return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(const CallAs& value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline void SetCallAs(CallAs&& value) { m_callAsHasBeenSet = true; m_callAs = std::move(value); }
    inline DescribeStackInstanceRequest& WithCallAs(const CallAs& value) { SetCallAs(value); return *this;}
    inline DescribeStackInstanceRequest& WithCallAs(CallAs&& value) { SetCallAs(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_stackInstanceAccount;
    bool m_stackInstanceAccountHasBeenSet = false;

    Aws::String m_stackInstanceRegion;
    bool m_stackInstanceRegionHasBeenSet = false;

    CallAs m_callAs;
    bool m_callAsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
