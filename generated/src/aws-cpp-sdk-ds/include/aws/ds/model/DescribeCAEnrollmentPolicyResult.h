/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/CaEnrollmentPolicyStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>DescribeCAEnrollmentPolicy</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DescribeCAEnrollmentPolicyResult">AWS
   * API Reference</a></p>
   */
  class DescribeCAEnrollmentPolicyResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeCAEnrollmentPolicyResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeCAEnrollmentPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeCAEnrollmentPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the directory associated with this CA enrollment
     * policy.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DescribeCAEnrollmentPolicyResult& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Private Certificate
     * Authority (PCA) connector that is configured for automatic certificate
     * enrollment in this directory.</p>
     */
    inline const Aws::String& GetPcaConnectorArn() const { return m_pcaConnectorArn; }
    template<typename PcaConnectorArnT = Aws::String>
    void SetPcaConnectorArn(PcaConnectorArnT&& value) { m_pcaConnectorArnHasBeenSet = true; m_pcaConnectorArn = std::forward<PcaConnectorArnT>(value); }
    template<typename PcaConnectorArnT = Aws::String>
    DescribeCAEnrollmentPolicyResult& WithPcaConnectorArn(PcaConnectorArnT&& value) { SetPcaConnectorArn(std::forward<PcaConnectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the CA enrollment policy. This indicates if automatic
     * certificate enrollment is currently active, inactive, or in a transitional
     * state.</p> <p>Valid values:</p> <ul> <li> <p> <code>IN_PROGRESS</code> - The
     * policy is being activated T</p> </li> <li> <p> <code>SUCCESS</code> - The policy
     * is active and automatic certificate enrollment is operational</p> </li> <li> <p>
     * <code>FAILED</code> - The policy activation or deactivation failed</p> </li>
     * <li> <p> <code>DISABLING</code> - The policy is being deactivated</p> </li> <li>
     * <p> <code>DISABLED</code> - The policy is inactive and automatic certificate
     * enrollment is not available</p> </li> <li> <p> <code>IMPAIRED</code> - Network
     * connectivity is impaired.</p> </li> </ul>
     */
    inline CaEnrollmentPolicyStatus GetCaEnrollmentPolicyStatus() const { return m_caEnrollmentPolicyStatus; }
    inline void SetCaEnrollmentPolicyStatus(CaEnrollmentPolicyStatus value) { m_caEnrollmentPolicyStatusHasBeenSet = true; m_caEnrollmentPolicyStatus = value; }
    inline DescribeCAEnrollmentPolicyResult& WithCaEnrollmentPolicyStatus(CaEnrollmentPolicyStatus value) { SetCaEnrollmentPolicyStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the CA enrollment policy was last modified or
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeCAEnrollmentPolicyResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information explaining the current status of the CA enrollment
     * policy, particularly useful when the policy is in an error or transitional
     * state.</p>
     */
    inline const Aws::String& GetCaEnrollmentPolicyStatusReason() const { return m_caEnrollmentPolicyStatusReason; }
    template<typename CaEnrollmentPolicyStatusReasonT = Aws::String>
    void SetCaEnrollmentPolicyStatusReason(CaEnrollmentPolicyStatusReasonT&& value) { m_caEnrollmentPolicyStatusReasonHasBeenSet = true; m_caEnrollmentPolicyStatusReason = std::forward<CaEnrollmentPolicyStatusReasonT>(value); }
    template<typename CaEnrollmentPolicyStatusReasonT = Aws::String>
    DescribeCAEnrollmentPolicyResult& WithCaEnrollmentPolicyStatusReason(CaEnrollmentPolicyStatusReasonT&& value) { SetCaEnrollmentPolicyStatusReason(std::forward<CaEnrollmentPolicyStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCAEnrollmentPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_pcaConnectorArn;
    bool m_pcaConnectorArnHasBeenSet = false;

    CaEnrollmentPolicyStatus m_caEnrollmentPolicyStatus{CaEnrollmentPolicyStatus::NOT_SET};
    bool m_caEnrollmentPolicyStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_caEnrollmentPolicyStatusReason;
    bool m_caEnrollmentPolicyStatusReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
