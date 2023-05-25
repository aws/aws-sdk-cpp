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
   * CloudFormation invokes, if present, before proceeding with a stack set operation
   * in an account and Region.</p> <p>For each account and Region, CloudFormation
   * lets you specify a Lambda function that encapsulates any requirements that must
   * be met before CloudFormation can proceed with a stack set operation in that
   * account and Region. CloudFormation invokes the function each time a stack set
   * operation is requested for that account and Region; if the function returns
   * <code>FAILED</code>, CloudFormation cancels the operation in that account and
   * Region, and sets the stack set operation result status for that account and
   * Region to <code>FAILED</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-account-gating.html">Configuring
   * a target account gate</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/AccountGateResult">AWS
   * API Reference</a></p>
   */
  class AccountGateResult
  {
  public:
    AWS_CLOUDFORMATION_API AccountGateResult();
    AWS_CLOUDFORMATION_API AccountGateResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API AccountGateResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account and Region passes any requirements for a stack set operation to occur.
     * CloudFormation proceeds with the stack operation in that account and Region.</p>
     * </li> <li> <p> <code>FAILED</code>: The account gate function has determined
     * that the account and Region doesn't meet the requirements for a stack set
     * operation to occur. CloudFormation cancels the stack set operation in that
     * account and Region, and sets the stack set operation result status for that
     * account and Region to <code>FAILED</code>.</p> </li> <li> <p>
     * <code>SKIPPED</code>: CloudFormation has skipped calling the account gate
     * function for this account and Region, for one of the following reasons:</p> <ul>
     * <li> <p>An account gate function hasn't been specified for the account and
     * Region. CloudFormation proceeds with the stack set operation in this account and
     * Region.</p> </li> <li> <p>The
     * <code>AWSCloudFormationStackSetExecutionRole</code> of the stack set
     * administration account lacks permissions to invoke the function. CloudFormation
     * proceeds with the stack set operation in this account and Region.</p> </li> <li>
     * <p>Either no action is necessary, or no action is possible, on the stack.
     * CloudFormation skips the stack set operation in this account and Region.</p>
     * </li> </ul> </li> </ul>
     */
    inline const AccountGateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account and Region passes any requirements for a stack set operation to occur.
     * CloudFormation proceeds with the stack operation in that account and Region.</p>
     * </li> <li> <p> <code>FAILED</code>: The account gate function has determined
     * that the account and Region doesn't meet the requirements for a stack set
     * operation to occur. CloudFormation cancels the stack set operation in that
     * account and Region, and sets the stack set operation result status for that
     * account and Region to <code>FAILED</code>.</p> </li> <li> <p>
     * <code>SKIPPED</code>: CloudFormation has skipped calling the account gate
     * function for this account and Region, for one of the following reasons:</p> <ul>
     * <li> <p>An account gate function hasn't been specified for the account and
     * Region. CloudFormation proceeds with the stack set operation in this account and
     * Region.</p> </li> <li> <p>The
     * <code>AWSCloudFormationStackSetExecutionRole</code> of the stack set
     * administration account lacks permissions to invoke the function. CloudFormation
     * proceeds with the stack set operation in this account and Region.</p> </li> <li>
     * <p>Either no action is necessary, or no action is possible, on the stack.
     * CloudFormation skips the stack set operation in this account and Region.</p>
     * </li> </ul> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account and Region passes any requirements for a stack set operation to occur.
     * CloudFormation proceeds with the stack operation in that account and Region.</p>
     * </li> <li> <p> <code>FAILED</code>: The account gate function has determined
     * that the account and Region doesn't meet the requirements for a stack set
     * operation to occur. CloudFormation cancels the stack set operation in that
     * account and Region, and sets the stack set operation result status for that
     * account and Region to <code>FAILED</code>.</p> </li> <li> <p>
     * <code>SKIPPED</code>: CloudFormation has skipped calling the account gate
     * function for this account and Region, for one of the following reasons:</p> <ul>
     * <li> <p>An account gate function hasn't been specified for the account and
     * Region. CloudFormation proceeds with the stack set operation in this account and
     * Region.</p> </li> <li> <p>The
     * <code>AWSCloudFormationStackSetExecutionRole</code> of the stack set
     * administration account lacks permissions to invoke the function. CloudFormation
     * proceeds with the stack set operation in this account and Region.</p> </li> <li>
     * <p>Either no action is necessary, or no action is possible, on the stack.
     * CloudFormation skips the stack set operation in this account and Region.</p>
     * </li> </ul> </li> </ul>
     */
    inline void SetStatus(const AccountGateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account and Region passes any requirements for a stack set operation to occur.
     * CloudFormation proceeds with the stack operation in that account and Region.</p>
     * </li> <li> <p> <code>FAILED</code>: The account gate function has determined
     * that the account and Region doesn't meet the requirements for a stack set
     * operation to occur. CloudFormation cancels the stack set operation in that
     * account and Region, and sets the stack set operation result status for that
     * account and Region to <code>FAILED</code>.</p> </li> <li> <p>
     * <code>SKIPPED</code>: CloudFormation has skipped calling the account gate
     * function for this account and Region, for one of the following reasons:</p> <ul>
     * <li> <p>An account gate function hasn't been specified for the account and
     * Region. CloudFormation proceeds with the stack set operation in this account and
     * Region.</p> </li> <li> <p>The
     * <code>AWSCloudFormationStackSetExecutionRole</code> of the stack set
     * administration account lacks permissions to invoke the function. CloudFormation
     * proceeds with the stack set operation in this account and Region.</p> </li> <li>
     * <p>Either no action is necessary, or no action is possible, on the stack.
     * CloudFormation skips the stack set operation in this account and Region.</p>
     * </li> </ul> </li> </ul>
     */
    inline void SetStatus(AccountGateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account and Region passes any requirements for a stack set operation to occur.
     * CloudFormation proceeds with the stack operation in that account and Region.</p>
     * </li> <li> <p> <code>FAILED</code>: The account gate function has determined
     * that the account and Region doesn't meet the requirements for a stack set
     * operation to occur. CloudFormation cancels the stack set operation in that
     * account and Region, and sets the stack set operation result status for that
     * account and Region to <code>FAILED</code>.</p> </li> <li> <p>
     * <code>SKIPPED</code>: CloudFormation has skipped calling the account gate
     * function for this account and Region, for one of the following reasons:</p> <ul>
     * <li> <p>An account gate function hasn't been specified for the account and
     * Region. CloudFormation proceeds with the stack set operation in this account and
     * Region.</p> </li> <li> <p>The
     * <code>AWSCloudFormationStackSetExecutionRole</code> of the stack set
     * administration account lacks permissions to invoke the function. CloudFormation
     * proceeds with the stack set operation in this account and Region.</p> </li> <li>
     * <p>Either no action is necessary, or no action is possible, on the stack.
     * CloudFormation skips the stack set operation in this account and Region.</p>
     * </li> </ul> </li> </ul>
     */
    inline AccountGateResult& WithStatus(const AccountGateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the account gate function.</p> <ul> <li> <p>
     * <code>SUCCEEDED</code>: The account gate function has determined that the
     * account and Region passes any requirements for a stack set operation to occur.
     * CloudFormation proceeds with the stack operation in that account and Region.</p>
     * </li> <li> <p> <code>FAILED</code>: The account gate function has determined
     * that the account and Region doesn't meet the requirements for a stack set
     * operation to occur. CloudFormation cancels the stack set operation in that
     * account and Region, and sets the stack set operation result status for that
     * account and Region to <code>FAILED</code>.</p> </li> <li> <p>
     * <code>SKIPPED</code>: CloudFormation has skipped calling the account gate
     * function for this account and Region, for one of the following reasons:</p> <ul>
     * <li> <p>An account gate function hasn't been specified for the account and
     * Region. CloudFormation proceeds with the stack set operation in this account and
     * Region.</p> </li> <li> <p>The
     * <code>AWSCloudFormationStackSetExecutionRole</code> of the stack set
     * administration account lacks permissions to invoke the function. CloudFormation
     * proceeds with the stack set operation in this account and Region.</p> </li> <li>
     * <p>Either no action is necessary, or no action is possible, on the stack.
     * CloudFormation skips the stack set operation in this account and Region.</p>
     * </li> </ul> </li> </ul>
     */
    inline AccountGateResult& WithStatus(AccountGateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the stack set operation.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the stack set operation.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the stack set operation.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the stack set operation.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the stack set operation.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the stack set operation.</p>
     */
    inline AccountGateResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the stack set operation.</p>
     */
    inline AccountGateResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the account gate status assigned to this account and Region
     * for the stack set operation.</p>
     */
    inline AccountGateResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    AccountGateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
