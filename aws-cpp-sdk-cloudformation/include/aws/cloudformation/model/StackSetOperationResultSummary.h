﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetOperationResultStatus.h>
#include <aws/cloudformation/model/AccountGateResult.h>
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
   * <p>The structure that contains information about a specified operation's results
   * for a given account in a given Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetOperationResultSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API StackSetOperationResultSummary
  {
  public:
    StackSetOperationResultSummary();
    StackSetOperationResultSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackSetOperationResultSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>[Self-managed permissions] The name of the account for this operation
     * result.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>[Self-managed permissions] The name of the account for this operation
     * result.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>[Self-managed permissions] The name of the account for this operation
     * result.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>[Self-managed permissions] The name of the account for this operation
     * result.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>[Self-managed permissions] The name of the account for this operation
     * result.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>[Self-managed permissions] The name of the account for this operation
     * result.</p>
     */
    inline StackSetOperationResultSummary& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>[Self-managed permissions] The name of the account for this operation
     * result.</p>
     */
    inline StackSetOperationResultSummary& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>[Self-managed permissions] The name of the account for this operation
     * result.</p>
     */
    inline StackSetOperationResultSummary& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>The name of the Region for this operation result.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The name of the Region for this operation result.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The name of the Region for this operation result.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The name of the Region for this operation result.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The name of the Region for this operation result.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The name of the Region for this operation result.</p>
     */
    inline StackSetOperationResultSummary& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The name of the Region for this operation result.</p>
     */
    inline StackSetOperationResultSummary& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the Region for this operation result.</p>
     */
    inline StackSetOperationResultSummary& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The result status of the stack set operation for the given account in the
     * given Region.</p> <ul> <li> <p> <code>CANCELLED</code>: The operation in the
     * specified account and Region has been cancelled. This is either because a user
     * has stopped the stack set operation, or because the failure tolerance of the
     * stack set operation has been exceeded.</p> </li> <li> <p> <code>FAILED</code>:
     * The operation in the specified account and Region failed. </p> <p>If the stack
     * set operation fails in enough accounts within a Region, the failure tolerance
     * for the stack set operation as a whole might be exceeded. </p> </li> <li> <p>
     * <code>RUNNING</code>: The operation in the specified account and Region is
     * currently in progress.</p> </li> <li> <p> <code>PENDING</code>: The operation in
     * the specified account and Region has yet to start. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation in the specified account and Region
     * completed successfully.</p> </li> </ul>
     */
    inline const StackSetOperationResultStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The result status of the stack set operation for the given account in the
     * given Region.</p> <ul> <li> <p> <code>CANCELLED</code>: The operation in the
     * specified account and Region has been cancelled. This is either because a user
     * has stopped the stack set operation, or because the failure tolerance of the
     * stack set operation has been exceeded.</p> </li> <li> <p> <code>FAILED</code>:
     * The operation in the specified account and Region failed. </p> <p>If the stack
     * set operation fails in enough accounts within a Region, the failure tolerance
     * for the stack set operation as a whole might be exceeded. </p> </li> <li> <p>
     * <code>RUNNING</code>: The operation in the specified account and Region is
     * currently in progress.</p> </li> <li> <p> <code>PENDING</code>: The operation in
     * the specified account and Region has yet to start. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation in the specified account and Region
     * completed successfully.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The result status of the stack set operation for the given account in the
     * given Region.</p> <ul> <li> <p> <code>CANCELLED</code>: The operation in the
     * specified account and Region has been cancelled. This is either because a user
     * has stopped the stack set operation, or because the failure tolerance of the
     * stack set operation has been exceeded.</p> </li> <li> <p> <code>FAILED</code>:
     * The operation in the specified account and Region failed. </p> <p>If the stack
     * set operation fails in enough accounts within a Region, the failure tolerance
     * for the stack set operation as a whole might be exceeded. </p> </li> <li> <p>
     * <code>RUNNING</code>: The operation in the specified account and Region is
     * currently in progress.</p> </li> <li> <p> <code>PENDING</code>: The operation in
     * the specified account and Region has yet to start. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation in the specified account and Region
     * completed successfully.</p> </li> </ul>
     */
    inline void SetStatus(const StackSetOperationResultStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The result status of the stack set operation for the given account in the
     * given Region.</p> <ul> <li> <p> <code>CANCELLED</code>: The operation in the
     * specified account and Region has been cancelled. This is either because a user
     * has stopped the stack set operation, or because the failure tolerance of the
     * stack set operation has been exceeded.</p> </li> <li> <p> <code>FAILED</code>:
     * The operation in the specified account and Region failed. </p> <p>If the stack
     * set operation fails in enough accounts within a Region, the failure tolerance
     * for the stack set operation as a whole might be exceeded. </p> </li> <li> <p>
     * <code>RUNNING</code>: The operation in the specified account and Region is
     * currently in progress.</p> </li> <li> <p> <code>PENDING</code>: The operation in
     * the specified account and Region has yet to start. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation in the specified account and Region
     * completed successfully.</p> </li> </ul>
     */
    inline void SetStatus(StackSetOperationResultStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The result status of the stack set operation for the given account in the
     * given Region.</p> <ul> <li> <p> <code>CANCELLED</code>: The operation in the
     * specified account and Region has been cancelled. This is either because a user
     * has stopped the stack set operation, or because the failure tolerance of the
     * stack set operation has been exceeded.</p> </li> <li> <p> <code>FAILED</code>:
     * The operation in the specified account and Region failed. </p> <p>If the stack
     * set operation fails in enough accounts within a Region, the failure tolerance
     * for the stack set operation as a whole might be exceeded. </p> </li> <li> <p>
     * <code>RUNNING</code>: The operation in the specified account and Region is
     * currently in progress.</p> </li> <li> <p> <code>PENDING</code>: The operation in
     * the specified account and Region has yet to start. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation in the specified account and Region
     * completed successfully.</p> </li> </ul>
     */
    inline StackSetOperationResultSummary& WithStatus(const StackSetOperationResultStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The result status of the stack set operation for the given account in the
     * given Region.</p> <ul> <li> <p> <code>CANCELLED</code>: The operation in the
     * specified account and Region has been cancelled. This is either because a user
     * has stopped the stack set operation, or because the failure tolerance of the
     * stack set operation has been exceeded.</p> </li> <li> <p> <code>FAILED</code>:
     * The operation in the specified account and Region failed. </p> <p>If the stack
     * set operation fails in enough accounts within a Region, the failure tolerance
     * for the stack set operation as a whole might be exceeded. </p> </li> <li> <p>
     * <code>RUNNING</code>: The operation in the specified account and Region is
     * currently in progress.</p> </li> <li> <p> <code>PENDING</code>: The operation in
     * the specified account and Region has yet to start. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation in the specified account and Region
     * completed successfully.</p> </li> </ul>
     */
    inline StackSetOperationResultSummary& WithStatus(StackSetOperationResultStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline StackSetOperationResultSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline StackSetOperationResultSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline StackSetOperationResultSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The results of the account gate function CloudFormation invokes, if present,
     * before proceeding with stack set operations in an account</p>
     */
    inline const AccountGateResult& GetAccountGateResult() const{ return m_accountGateResult; }

    /**
     * <p>The results of the account gate function CloudFormation invokes, if present,
     * before proceeding with stack set operations in an account</p>
     */
    inline bool AccountGateResultHasBeenSet() const { return m_accountGateResultHasBeenSet; }

    /**
     * <p>The results of the account gate function CloudFormation invokes, if present,
     * before proceeding with stack set operations in an account</p>
     */
    inline void SetAccountGateResult(const AccountGateResult& value) { m_accountGateResultHasBeenSet = true; m_accountGateResult = value; }

    /**
     * <p>The results of the account gate function CloudFormation invokes, if present,
     * before proceeding with stack set operations in an account</p>
     */
    inline void SetAccountGateResult(AccountGateResult&& value) { m_accountGateResultHasBeenSet = true; m_accountGateResult = std::move(value); }

    /**
     * <p>The results of the account gate function CloudFormation invokes, if present,
     * before proceeding with stack set operations in an account</p>
     */
    inline StackSetOperationResultSummary& WithAccountGateResult(const AccountGateResult& value) { SetAccountGateResult(value); return *this;}

    /**
     * <p>The results of the account gate function CloudFormation invokes, if present,
     * before proceeding with stack set operations in an account</p>
     */
    inline StackSetOperationResultSummary& WithAccountGateResult(AccountGateResult&& value) { SetAccountGateResult(std::move(value)); return *this;}


    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const{ return m_organizationalUnitId; }

    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }

    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline void SetOrganizationalUnitId(const Aws::String& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = value; }

    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline void SetOrganizationalUnitId(Aws::String&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::move(value); }

    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline void SetOrganizationalUnitId(const char* value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId.assign(value); }

    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline StackSetOperationResultSummary& WithOrganizationalUnitId(const Aws::String& value) { SetOrganizationalUnitId(value); return *this;}

    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline StackSetOperationResultSummary& WithOrganizationalUnitId(Aws::String&& value) { SetOrganizationalUnitId(std::move(value)); return *this;}

    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline StackSetOperationResultSummary& WithOrganizationalUnitId(const char* value) { SetOrganizationalUnitId(value); return *this;}

  private:

    Aws::String m_account;
    bool m_accountHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    StackSetOperationResultStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    AccountGateResult m_accountGateResult;
    bool m_accountGateResultHasBeenSet;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
