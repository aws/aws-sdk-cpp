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
  class StopStackSetOperationRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API StopStackSetOperationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopStackSetOperation"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name or unique ID of the StackSet that you want to stop the operation
     * for.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    StopStackSetOperationRequest& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the stack operation.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    StopStackSetOperationRequest& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you are acting as an account administrator in the
     * organization's management account or as a delegated administrator in a member
     * account. Valid only if the StackSet uses service-managed permissions.</p> <p>By
     * default, <code>SELF</code> is specified. Use <code>SELF</code> for StackSets
     * with self-managed permissions.</p> <ul> <li> <p>If you are signed in to the
     * management account, specify <code>SELF</code>.</p> </li> <li> <p>If you are
     * signed in to a delegated administrator account, specify
     * <code>DELEGATED_ADMIN</code>.</p> <p>Your Amazon Web Services account must be
     * registered as a delegated administrator in the management account. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-delegated-admin.html">Register
     * a delegated administrator</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * </ul>
     */
    inline CallAs GetCallAs() const { return m_callAs; }
    inline bool CallAsHasBeenSet() const { return m_callAsHasBeenSet; }
    inline void SetCallAs(CallAs value) { m_callAsHasBeenSet = true; m_callAs = value; }
    inline StopStackSetOperationRequest& WithCallAs(CallAs value) { SetCallAs(value); return *this;}
    ///@}
  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    CallAs m_callAs{CallAs::NOT_SET};
    bool m_callAsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
