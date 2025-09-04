/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/AccountGateStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Structure that contains the results of the account gate function which
   * CloudFormation invokes, if present, before proceeding with a StackSet operation
   * in an account and Region.</p> <p>For each account and Region, CloudFormation
   * lets you specify a Lambda function that encapsulates any requirements that must
   * be met before CloudFormation can proceed with a StackSet operation in that
   * account and Region. CloudFormation invokes the function each time a StackSet
   * operation is requested for that account and Region; if the function returns
   * <code>FAILED</code>, CloudFormation cancels the operation in that account and
   * Region, and sets the StackSet operation result status for that account and
   * Region to <code>FAILED</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-account-gating.html">Prevent
   * failed StackSets deployments using target account gates</a> in the
   * <i>CloudFormation User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/AccountGateResult">AWS
   * API Reference</a></p>
   */
  class AccountGateResult
  {
  public:
    AWS_CLOUDFORMATION_API AccountGateResult() = default;
    AWS_CLOUDFORMATION_API AccountGateResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API AccountGateResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account and Region passes any requirements for a StackSet operation to occur.
     * CloudFormation proceeds with the stack operation in that account and Region.</p>
     * </li> <li> <p> <code>FAILED</code>: The account gate function has determined
     * that the account and Region doesn't meet the requirements for a StackSet
     * operation to occur. CloudFormation cancels the StackSet operation in that
     * account and Region, and sets the StackSet operation result status for that
     * account and Region to <code>FAILED</code>.</p> </li> <li> <p>
     * <code>SKIPPED</code>: CloudFormation has skipped calling the account gate
     * function for this account and Region, for one of the following reasons:</p> <ul>
     * <li> <p>An account gate function hasn't been specified for the account and
     * Region. CloudFormation proceeds with the StackSet operation in this account and
     * Region.</p> </li> <li> <p>The
     * <code>AWSCloudFormationStackSetExecutionRole</code> of the administration
     * account lacks permissions to invoke the function. CloudFormation proceeds with
     * the StackSet operation in this account and Region.</p> </li> <li> <p>Either no
     * action is necessary, or no action is possible, on the stack. CloudFormation
     * skips the StackSet operation in this account and Region.</p> </li> </ul> </li>
     * </ul>
     */
    inline AccountGateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AccountGateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AccountGateResult& WithStatus(AccountGateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the StackSet operation.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    AccountGateResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    AccountGateStatus m_status{AccountGateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
