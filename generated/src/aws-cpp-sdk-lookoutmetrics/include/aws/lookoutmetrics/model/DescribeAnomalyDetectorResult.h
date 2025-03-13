/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorConfigSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorStatus.h>
#include <aws/lookoutmetrics/model/AnomalyDetectorFailureType.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class DescribeAnomalyDetectorResult
  {
  public:
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectorResult() = default;
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    DescribeAnomalyDetectorResult& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorName() const { return m_anomalyDetectorName; }
    template<typename AnomalyDetectorNameT = Aws::String>
    void SetAnomalyDetectorName(AnomalyDetectorNameT&& value) { m_anomalyDetectorNameHasBeenSet = true; m_anomalyDetectorName = std::forward<AnomalyDetectorNameT>(value); }
    template<typename AnomalyDetectorNameT = Aws::String>
    DescribeAnomalyDetectorResult& WithAnomalyDetectorName(AnomalyDetectorNameT&& value) { SetAnomalyDetectorName(std::forward<AnomalyDetectorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorDescription() const { return m_anomalyDetectorDescription; }
    template<typename AnomalyDetectorDescriptionT = Aws::String>
    void SetAnomalyDetectorDescription(AnomalyDetectorDescriptionT&& value) { m_anomalyDetectorDescriptionHasBeenSet = true; m_anomalyDetectorDescription = std::forward<AnomalyDetectorDescriptionT>(value); }
    template<typename AnomalyDetectorDescriptionT = Aws::String>
    DescribeAnomalyDetectorResult& WithAnomalyDetectorDescription(AnomalyDetectorDescriptionT&& value) { SetAnomalyDetectorDescription(std::forward<AnomalyDetectorDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the detector's configuration.</p>
     */
    inline const AnomalyDetectorConfigSummary& GetAnomalyDetectorConfig() const { return m_anomalyDetectorConfig; }
    template<typename AnomalyDetectorConfigT = AnomalyDetectorConfigSummary>
    void SetAnomalyDetectorConfig(AnomalyDetectorConfigT&& value) { m_anomalyDetectorConfigHasBeenSet = true; m_anomalyDetectorConfig = std::forward<AnomalyDetectorConfigT>(value); }
    template<typename AnomalyDetectorConfigT = AnomalyDetectorConfigSummary>
    DescribeAnomalyDetectorResult& WithAnomalyDetectorConfig(AnomalyDetectorConfigT&& value) { SetAnomalyDetectorConfig(std::forward<AnomalyDetectorConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the detector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAnomalyDetectorResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the detector was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribeAnomalyDetectorResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the detector.</p>
     */
    inline AnomalyDetectorStatus GetStatus() const { return m_status; }
    inline void SetStatus(AnomalyDetectorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAnomalyDetectorResult& WithStatus(AnomalyDetectorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the detector failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeAnomalyDetectorResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    DescribeAnomalyDetectorResult& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process that caused the detector to fail.</p>
     */
    inline AnomalyDetectorFailureType GetFailureType() const { return m_failureType; }
    inline void SetFailureType(AnomalyDetectorFailureType value) { m_failureTypeHasBeenSet = true; m_failureType = value; }
    inline DescribeAnomalyDetectorResult& WithFailureType(AnomalyDetectorFailureType value) { SetFailureType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAnomalyDetectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_anomalyDetectorName;
    bool m_anomalyDetectorNameHasBeenSet = false;

    Aws::String m_anomalyDetectorDescription;
    bool m_anomalyDetectorDescriptionHasBeenSet = false;

    AnomalyDetectorConfigSummary m_anomalyDetectorConfig;
    bool m_anomalyDetectorConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    AnomalyDetectorStatus m_status{AnomalyDetectorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    AnomalyDetectorFailureType m_failureType{AnomalyDetectorFailureType::NOT_SET};
    bool m_failureTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
