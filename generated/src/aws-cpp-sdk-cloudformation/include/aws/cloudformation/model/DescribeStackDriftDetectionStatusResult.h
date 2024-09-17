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
    AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusResult();
    AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeStackDriftDetectionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackId.assign(value); }
    inline DescribeStackDriftDetectionStatusResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the drift detection results of this operation.</p>
     * <p>CloudFormation generates new results, with a new drift detection ID, each
     * time this operation is run. However, the number of reports CloudFormation
     * retains for any given stack, and for how long, may vary.</p>
     */
    inline const Aws::String& GetStackDriftDetectionId() const{ return m_stackDriftDetectionId; }
    inline void SetStackDriftDetectionId(const Aws::String& value) { m_stackDriftDetectionId = value; }
    inline void SetStackDriftDetectionId(Aws::String&& value) { m_stackDriftDetectionId = std::move(value); }
    inline void SetStackDriftDetectionId(const char* value) { m_stackDriftDetectionId.assign(value); }
    inline DescribeStackDriftDetectionStatusResult& WithStackDriftDetectionId(const Aws::String& value) { SetStackDriftDetectionId(value); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithStackDriftDetectionId(Aws::String&& value) { SetStackDriftDetectionId(std::move(value)); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithStackDriftDetectionId(const char* value) { SetStackDriftDetectionId(value); return *this;}
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
     * template configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: This value is
     * reserved for future use.</p> </li> </ul>
     */
    inline const StackDriftStatus& GetStackDriftStatus() const{ return m_stackDriftStatus; }
    inline void SetStackDriftStatus(const StackDriftStatus& value) { m_stackDriftStatus = value; }
    inline void SetStackDriftStatus(StackDriftStatus&& value) { m_stackDriftStatus = std::move(value); }
    inline DescribeStackDriftDetectionStatusResult& WithStackDriftStatus(const StackDriftStatus& value) { SetStackDriftStatus(value); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithStackDriftStatus(StackDriftStatus&& value) { SetStackDriftStatus(std::move(value)); return *this;}
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
    inline const StackDriftDetectionStatus& GetDetectionStatus() const{ return m_detectionStatus; }
    inline void SetDetectionStatus(const StackDriftDetectionStatus& value) { m_detectionStatus = value; }
    inline void SetDetectionStatus(StackDriftDetectionStatus&& value) { m_detectionStatus = std::move(value); }
    inline DescribeStackDriftDetectionStatusResult& WithDetectionStatus(const StackDriftDetectionStatus& value) { SetDetectionStatus(value); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithDetectionStatus(StackDriftDetectionStatus&& value) { SetDetectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the stack drift detection operation has its current status.</p>
     */
    inline const Aws::String& GetDetectionStatusReason() const{ return m_detectionStatusReason; }
    inline void SetDetectionStatusReason(const Aws::String& value) { m_detectionStatusReason = value; }
    inline void SetDetectionStatusReason(Aws::String&& value) { m_detectionStatusReason = std::move(value); }
    inline void SetDetectionStatusReason(const char* value) { m_detectionStatusReason.assign(value); }
    inline DescribeStackDriftDetectionStatusResult& WithDetectionStatusReason(const Aws::String& value) { SetDetectionStatusReason(value); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithDetectionStatusReason(Aws::String&& value) { SetDetectionStatusReason(std::move(value)); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithDetectionStatusReason(const char* value) { SetDetectionStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of stack resources that have drifted. This is NULL until the
     * drift detection operation reaches a status of <code>DETECTION_COMPLETE</code>.
     * This value will be 0 for stacks whose drift status is <code>IN_SYNC</code>.</p>
     */
    inline int GetDriftedStackResourceCount() const{ return m_driftedStackResourceCount; }
    inline void SetDriftedStackResourceCount(int value) { m_driftedStackResourceCount = value; }
    inline DescribeStackDriftDetectionStatusResult& WithDriftedStackResourceCount(int value) { SetDriftedStackResourceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the stack drift detection operation was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestamp = std::move(value); }
    inline DescribeStackDriftDetectionStatusResult& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeStackDriftDetectionStatusResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeStackDriftDetectionStatusResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;

    Aws::String m_stackDriftDetectionId;

    StackDriftStatus m_stackDriftStatus;

    StackDriftDetectionStatus m_detectionStatus;

    Aws::String m_detectionStatusReason;

    int m_driftedStackResourceCount;

    Aws::Utils::DateTime m_timestamp;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
