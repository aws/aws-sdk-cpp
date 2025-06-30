/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackDriftStatus.h>
#include <aws/cloudformation/model/StackDriftDetectionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class DescribeStackDriftDetectionStatusResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusResult() = default;
    AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeStackDriftDetectionStatusResult& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the drift detection results of this operation.</p>
     * <p>CloudFormation generates new results, with a new drift detection ID, each
     * time this operation is run. However, the number of reports CloudFormation
     * retains for any given stack, and for how long, may vary.</p>
     */
    inline const Aws::String& GetStackDriftDetectionId() const { return m_stackDriftDetectionId; }
    template<typename StackDriftDetectionIdT = Aws::String>
    void SetStackDriftDetectionId(StackDriftDetectionIdT&& value) { m_stackDriftDetectionIdHasBeenSet = true; m_stackDriftDetectionId = std::forward<StackDriftDetectionIdT>(value); }
    template<typename StackDriftDetectionIdT = Aws::String>
    DescribeStackDriftDetectionStatusResult& WithStackDriftDetectionId(StackDriftDetectionIdT&& value) { SetStackDriftDetectionId(std::forward<StackDriftDetectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the stack's actual configuration compared to its expected
     * configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: The stack differs from
     * its expected template configuration. A stack is considered to have drifted if
     * one or more of its resources have drifted.</p> </li> <li> <p>
     * <code>NOT_CHECKED</code>: CloudFormation hasn't checked if the stack differs
     * from its expected template configuration.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The stack's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: CloudFormation
     * could not run drift detection for a resource in the stack. See the
     * <code>DetectionStatusReason</code> for details.</p> </li> </ul>
     */
    inline StackDriftStatus GetStackDriftStatus() const { return m_stackDriftStatus; }
    inline void SetStackDriftStatus(StackDriftStatus value) { m_stackDriftStatusHasBeenSet = true; m_stackDriftStatus = value; }
    inline DescribeStackDriftDetectionStatusResult& WithStackDriftStatus(StackDriftStatus value) { SetStackDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the stack drift detection operation.</p> <ul> <li> <p>
     * <code>DETECTION_COMPLETE</code>: The stack drift detection operation has
     * successfully completed for all resources in the stack that support drift
     * detection. (Resources that don't currently support stack detection remain
     * unchecked.)</p> <p>If you specified logical resource IDs for CloudFormation to
     * use as a filter for the stack drift detection operation, only the resources with
     * those logical IDs are checked for drift.</p> </li> <li> <p>
     * <code>DETECTION_FAILED</code>: The stack drift detection operation has failed
     * for at least one resource in the stack. Results will be available for resources
     * on which CloudFormation successfully completed drift detection.</p> </li> <li>
     * <p> <code>DETECTION_IN_PROGRESS</code>: The stack drift detection operation is
     * currently in progress.</p> </li> </ul>
     */
    inline StackDriftDetectionStatus GetDetectionStatus() const { return m_detectionStatus; }
    inline void SetDetectionStatus(StackDriftDetectionStatus value) { m_detectionStatusHasBeenSet = true; m_detectionStatus = value; }
    inline DescribeStackDriftDetectionStatusResult& WithDetectionStatus(StackDriftDetectionStatus value) { SetDetectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the stack drift detection operation has its current status.</p>
     */
    inline const Aws::String& GetDetectionStatusReason() const { return m_detectionStatusReason; }
    template<typename DetectionStatusReasonT = Aws::String>
    void SetDetectionStatusReason(DetectionStatusReasonT&& value) { m_detectionStatusReasonHasBeenSet = true; m_detectionStatusReason = std::forward<DetectionStatusReasonT>(value); }
    template<typename DetectionStatusReasonT = Aws::String>
    DescribeStackDriftDetectionStatusResult& WithDetectionStatusReason(DetectionStatusReasonT&& value) { SetDetectionStatusReason(std::forward<DetectionStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of stack resources that have drifted. This is NULL until the
     * drift detection operation reaches a status of <code>DETECTION_COMPLETE</code>.
     * This value will be 0 for stacks whose drift status is <code>IN_SYNC</code>.</p>
     */
    inline int GetDriftedStackResourceCount() const { return m_driftedStackResourceCount; }
    inline void SetDriftedStackResourceCount(int value) { m_driftedStackResourceCountHasBeenSet = true; m_driftedStackResourceCount = value; }
    inline DescribeStackDriftDetectionStatusResult& WithDriftedStackResourceCount(int value) { SetDriftedStackResourceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the stack drift detection operation was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    DescribeStackDriftDetectionStatusResult& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStackDriftDetectionStatusResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_stackDriftDetectionId;
    bool m_stackDriftDetectionIdHasBeenSet = false;

    StackDriftStatus m_stackDriftStatus{StackDriftStatus::NOT_SET};
    bool m_stackDriftStatusHasBeenSet = false;

    StackDriftDetectionStatus m_detectionStatus{StackDriftDetectionStatus::NOT_SET};
    bool m_detectionStatusHasBeenSet = false;

    Aws::String m_detectionStatusReason;
    bool m_detectionStatusReasonHasBeenSet = false;

    int m_driftedStackResourceCount{0};
    bool m_driftedStackResourceCountHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
