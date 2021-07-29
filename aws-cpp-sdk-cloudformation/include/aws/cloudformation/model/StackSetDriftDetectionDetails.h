﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/StackSetDriftStatus.h>
#include <aws/cloudformation/model/StackSetDriftDetectionStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Detailed information about the drift status of the stack set.</p> <p>For
   * stack sets, contains information about the last <i>completed</i> drift operation
   * performed on the stack set. Information about drift operations in-progress is
   * not included. </p> <p>For stack set operations, includes information about drift
   * operations currently being performed on the stack set.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting
   * Unmanaged Changes in Stack Sets</a> in the <i>CloudFormation User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetDriftDetectionDetails">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API StackSetDriftDetectionDetails
  {
  public:
    StackSetDriftDetectionDetails();
    StackSetDriftDetectionDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackSetDriftDetectionDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation has not
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All of
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> </ul>
     */
    inline const StackSetDriftStatus& GetDriftStatus() const{ return m_driftStatus; }

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation has not
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All of
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> </ul>
     */
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation has not
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All of
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> </ul>
     */
    inline void SetDriftStatus(const StackSetDriftStatus& value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation has not
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All of
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> </ul>
     */
    inline void SetDriftStatus(StackSetDriftStatus&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::move(value); }

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation has not
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All of
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> </ul>
     */
    inline StackSetDriftDetectionDetails& WithDriftStatus(const StackSetDriftStatus& value) { SetDriftStatus(value); return *this;}

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation has not
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All of
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> </ul>
     */
    inline StackSetDriftDetectionDetails& WithDriftStatus(StackSetDriftStatus&& value) { SetDriftStatus(std::move(value)); return *this;}


    /**
     * <p>The status of the stack set drift detection operation.</p> <ul> <li> <p>
     * <code>COMPLETED</code>: The drift detection operation completed without failing
     * on any stack instances.</p> </li> <li> <p> <code>FAILED</code>: The drift
     * detection operation exceeded the specified failure tolerance. </p> </li> <li>
     * <p> <code>PARTIAL_SUCCESS</code>: The drift detection operation completed
     * without exceeding the failure tolerance for the operation.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The drift detection operation is currently being
     * performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has cancelled the
     * drift detection operation.</p> </li> </ul>
     */
    inline const StackSetDriftDetectionStatus& GetDriftDetectionStatus() const{ return m_driftDetectionStatus; }

    /**
     * <p>The status of the stack set drift detection operation.</p> <ul> <li> <p>
     * <code>COMPLETED</code>: The drift detection operation completed without failing
     * on any stack instances.</p> </li> <li> <p> <code>FAILED</code>: The drift
     * detection operation exceeded the specified failure tolerance. </p> </li> <li>
     * <p> <code>PARTIAL_SUCCESS</code>: The drift detection operation completed
     * without exceeding the failure tolerance for the operation.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The drift detection operation is currently being
     * performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has cancelled the
     * drift detection operation.</p> </li> </ul>
     */
    inline bool DriftDetectionStatusHasBeenSet() const { return m_driftDetectionStatusHasBeenSet; }

    /**
     * <p>The status of the stack set drift detection operation.</p> <ul> <li> <p>
     * <code>COMPLETED</code>: The drift detection operation completed without failing
     * on any stack instances.</p> </li> <li> <p> <code>FAILED</code>: The drift
     * detection operation exceeded the specified failure tolerance. </p> </li> <li>
     * <p> <code>PARTIAL_SUCCESS</code>: The drift detection operation completed
     * without exceeding the failure tolerance for the operation.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The drift detection operation is currently being
     * performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has cancelled the
     * drift detection operation.</p> </li> </ul>
     */
    inline void SetDriftDetectionStatus(const StackSetDriftDetectionStatus& value) { m_driftDetectionStatusHasBeenSet = true; m_driftDetectionStatus = value; }

    /**
     * <p>The status of the stack set drift detection operation.</p> <ul> <li> <p>
     * <code>COMPLETED</code>: The drift detection operation completed without failing
     * on any stack instances.</p> </li> <li> <p> <code>FAILED</code>: The drift
     * detection operation exceeded the specified failure tolerance. </p> </li> <li>
     * <p> <code>PARTIAL_SUCCESS</code>: The drift detection operation completed
     * without exceeding the failure tolerance for the operation.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The drift detection operation is currently being
     * performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has cancelled the
     * drift detection operation.</p> </li> </ul>
     */
    inline void SetDriftDetectionStatus(StackSetDriftDetectionStatus&& value) { m_driftDetectionStatusHasBeenSet = true; m_driftDetectionStatus = std::move(value); }

    /**
     * <p>The status of the stack set drift detection operation.</p> <ul> <li> <p>
     * <code>COMPLETED</code>: The drift detection operation completed without failing
     * on any stack instances.</p> </li> <li> <p> <code>FAILED</code>: The drift
     * detection operation exceeded the specified failure tolerance. </p> </li> <li>
     * <p> <code>PARTIAL_SUCCESS</code>: The drift detection operation completed
     * without exceeding the failure tolerance for the operation.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The drift detection operation is currently being
     * performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has cancelled the
     * drift detection operation.</p> </li> </ul>
     */
    inline StackSetDriftDetectionDetails& WithDriftDetectionStatus(const StackSetDriftDetectionStatus& value) { SetDriftDetectionStatus(value); return *this;}

    /**
     * <p>The status of the stack set drift detection operation.</p> <ul> <li> <p>
     * <code>COMPLETED</code>: The drift detection operation completed without failing
     * on any stack instances.</p> </li> <li> <p> <code>FAILED</code>: The drift
     * detection operation exceeded the specified failure tolerance. </p> </li> <li>
     * <p> <code>PARTIAL_SUCCESS</code>: The drift detection operation completed
     * without exceeding the failure tolerance for the operation.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The drift detection operation is currently being
     * performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has cancelled the
     * drift detection operation.</p> </li> </ul>
     */
    inline StackSetDriftDetectionDetails& WithDriftDetectionStatus(StackSetDriftDetectionStatus&& value) { SetDriftDetectionStatus(std::move(value)); return *this;}


    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection has not yet been performed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDriftCheckTimestamp() const{ return m_lastDriftCheckTimestamp; }

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection has not yet been performed.</p>
     */
    inline bool LastDriftCheckTimestampHasBeenSet() const { return m_lastDriftCheckTimestampHasBeenSet; }

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection has not yet been performed.</p>
     */
    inline void SetLastDriftCheckTimestamp(const Aws::Utils::DateTime& value) { m_lastDriftCheckTimestampHasBeenSet = true; m_lastDriftCheckTimestamp = value; }

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection has not yet been performed.</p>
     */
    inline void SetLastDriftCheckTimestamp(Aws::Utils::DateTime&& value) { m_lastDriftCheckTimestampHasBeenSet = true; m_lastDriftCheckTimestamp = std::move(value); }

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection has not yet been performed.</p>
     */
    inline StackSetDriftDetectionDetails& WithLastDriftCheckTimestamp(const Aws::Utils::DateTime& value) { SetLastDriftCheckTimestamp(value); return *this;}

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection has not yet been performed.</p>
     */
    inline StackSetDriftDetectionDetails& WithLastDriftCheckTimestamp(Aws::Utils::DateTime&& value) { SetLastDriftCheckTimestamp(std::move(value)); return *this;}


    /**
     * <p>The total number of stack instances belonging to this stack set. </p> <p>The
     * total number of stack instances is equal to the total of:</p> <ul> <li> <p>Stack
     * instances that match the stack set configuration. </p> </li> <li> <p>Stack
     * instances that have drifted from the stack set configuration. </p> </li> <li>
     * <p>Stack instances where the drift detection operation has failed.</p> </li>
     * <li> <p>Stack instances currently being checked for drift.</p> </li> </ul>
     */
    inline int GetTotalStackInstancesCount() const{ return m_totalStackInstancesCount; }

    /**
     * <p>The total number of stack instances belonging to this stack set. </p> <p>The
     * total number of stack instances is equal to the total of:</p> <ul> <li> <p>Stack
     * instances that match the stack set configuration. </p> </li> <li> <p>Stack
     * instances that have drifted from the stack set configuration. </p> </li> <li>
     * <p>Stack instances where the drift detection operation has failed.</p> </li>
     * <li> <p>Stack instances currently being checked for drift.</p> </li> </ul>
     */
    inline bool TotalStackInstancesCountHasBeenSet() const { return m_totalStackInstancesCountHasBeenSet; }

    /**
     * <p>The total number of stack instances belonging to this stack set. </p> <p>The
     * total number of stack instances is equal to the total of:</p> <ul> <li> <p>Stack
     * instances that match the stack set configuration. </p> </li> <li> <p>Stack
     * instances that have drifted from the stack set configuration. </p> </li> <li>
     * <p>Stack instances where the drift detection operation has failed.</p> </li>
     * <li> <p>Stack instances currently being checked for drift.</p> </li> </ul>
     */
    inline void SetTotalStackInstancesCount(int value) { m_totalStackInstancesCountHasBeenSet = true; m_totalStackInstancesCount = value; }

    /**
     * <p>The total number of stack instances belonging to this stack set. </p> <p>The
     * total number of stack instances is equal to the total of:</p> <ul> <li> <p>Stack
     * instances that match the stack set configuration. </p> </li> <li> <p>Stack
     * instances that have drifted from the stack set configuration. </p> </li> <li>
     * <p>Stack instances where the drift detection operation has failed.</p> </li>
     * <li> <p>Stack instances currently being checked for drift.</p> </li> </ul>
     */
    inline StackSetDriftDetectionDetails& WithTotalStackInstancesCount(int value) { SetTotalStackInstancesCount(value); return *this;}


    /**
     * <p>The number of stack instances that have drifted from the expected template
     * and parameter configuration of the stack set. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack do not
     * match their expected configuration.</p>
     */
    inline int GetDriftedStackInstancesCount() const{ return m_driftedStackInstancesCount; }

    /**
     * <p>The number of stack instances that have drifted from the expected template
     * and parameter configuration of the stack set. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack do not
     * match their expected configuration.</p>
     */
    inline bool DriftedStackInstancesCountHasBeenSet() const { return m_driftedStackInstancesCountHasBeenSet; }

    /**
     * <p>The number of stack instances that have drifted from the expected template
     * and parameter configuration of the stack set. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack do not
     * match their expected configuration.</p>
     */
    inline void SetDriftedStackInstancesCount(int value) { m_driftedStackInstancesCountHasBeenSet = true; m_driftedStackInstancesCount = value; }

    /**
     * <p>The number of stack instances that have drifted from the expected template
     * and parameter configuration of the stack set. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack do not
     * match their expected configuration.</p>
     */
    inline StackSetDriftDetectionDetails& WithDriftedStackInstancesCount(int value) { SetDriftedStackInstancesCount(value); return *this;}


    /**
     * <p>The number of stack instances which match the expected template and parameter
     * configuration of the stack set.</p>
     */
    inline int GetInSyncStackInstancesCount() const{ return m_inSyncStackInstancesCount; }

    /**
     * <p>The number of stack instances which match the expected template and parameter
     * configuration of the stack set.</p>
     */
    inline bool InSyncStackInstancesCountHasBeenSet() const { return m_inSyncStackInstancesCountHasBeenSet; }

    /**
     * <p>The number of stack instances which match the expected template and parameter
     * configuration of the stack set.</p>
     */
    inline void SetInSyncStackInstancesCount(int value) { m_inSyncStackInstancesCountHasBeenSet = true; m_inSyncStackInstancesCount = value; }

    /**
     * <p>The number of stack instances which match the expected template and parameter
     * configuration of the stack set.</p>
     */
    inline StackSetDriftDetectionDetails& WithInSyncStackInstancesCount(int value) { SetInSyncStackInstancesCount(value); return *this;}


    /**
     * <p>The number of stack instances that are currently being checked for drift.</p>
     */
    inline int GetInProgressStackInstancesCount() const{ return m_inProgressStackInstancesCount; }

    /**
     * <p>The number of stack instances that are currently being checked for drift.</p>
     */
    inline bool InProgressStackInstancesCountHasBeenSet() const { return m_inProgressStackInstancesCountHasBeenSet; }

    /**
     * <p>The number of stack instances that are currently being checked for drift.</p>
     */
    inline void SetInProgressStackInstancesCount(int value) { m_inProgressStackInstancesCountHasBeenSet = true; m_inProgressStackInstancesCount = value; }

    /**
     * <p>The number of stack instances that are currently being checked for drift.</p>
     */
    inline StackSetDriftDetectionDetails& WithInProgressStackInstancesCount(int value) { SetInProgressStackInstancesCount(value); return *this;}


    /**
     * <p>The number of stack instances for which the drift detection operation
     * failed.</p>
     */
    inline int GetFailedStackInstancesCount() const{ return m_failedStackInstancesCount; }

    /**
     * <p>The number of stack instances for which the drift detection operation
     * failed.</p>
     */
    inline bool FailedStackInstancesCountHasBeenSet() const { return m_failedStackInstancesCountHasBeenSet; }

    /**
     * <p>The number of stack instances for which the drift detection operation
     * failed.</p>
     */
    inline void SetFailedStackInstancesCount(int value) { m_failedStackInstancesCountHasBeenSet = true; m_failedStackInstancesCount = value; }

    /**
     * <p>The number of stack instances for which the drift detection operation
     * failed.</p>
     */
    inline StackSetDriftDetectionDetails& WithFailedStackInstancesCount(int value) { SetFailedStackInstancesCount(value); return *this;}

  private:

    StackSetDriftStatus m_driftStatus;
    bool m_driftStatusHasBeenSet;

    StackSetDriftDetectionStatus m_driftDetectionStatus;
    bool m_driftDetectionStatusHasBeenSet;

    Aws::Utils::DateTime m_lastDriftCheckTimestamp;
    bool m_lastDriftCheckTimestampHasBeenSet;

    int m_totalStackInstancesCount;
    bool m_totalStackInstancesCountHasBeenSet;

    int m_driftedStackInstancesCount;
    bool m_driftedStackInstancesCountHasBeenSet;

    int m_inSyncStackInstancesCount;
    bool m_inSyncStackInstancesCountHasBeenSet;

    int m_inProgressStackInstancesCount;
    bool m_inProgressStackInstancesCountHasBeenSet;

    int m_failedStackInstancesCount;
    bool m_failedStackInstancesCountHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
