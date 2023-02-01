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
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectorResult();
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DescribeAnomalyDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the detector.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the detector.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the detector.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>The name of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorName() const{ return m_anomalyDetectorName; }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetAnomalyDetectorName(const Aws::String& value) { m_anomalyDetectorName = value; }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetAnomalyDetectorName(Aws::String&& value) { m_anomalyDetectorName = std::move(value); }

    /**
     * <p>The name of the detector.</p>
     */
    inline void SetAnomalyDetectorName(const char* value) { m_anomalyDetectorName.assign(value); }

    /**
     * <p>The name of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorName(const Aws::String& value) { SetAnomalyDetectorName(value); return *this;}

    /**
     * <p>The name of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorName(Aws::String&& value) { SetAnomalyDetectorName(std::move(value)); return *this;}

    /**
     * <p>The name of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorName(const char* value) { SetAnomalyDetectorName(value); return *this;}


    /**
     * <p>A description of the detector.</p>
     */
    inline const Aws::String& GetAnomalyDetectorDescription() const{ return m_anomalyDetectorDescription; }

    /**
     * <p>A description of the detector.</p>
     */
    inline void SetAnomalyDetectorDescription(const Aws::String& value) { m_anomalyDetectorDescription = value; }

    /**
     * <p>A description of the detector.</p>
     */
    inline void SetAnomalyDetectorDescription(Aws::String&& value) { m_anomalyDetectorDescription = std::move(value); }

    /**
     * <p>A description of the detector.</p>
     */
    inline void SetAnomalyDetectorDescription(const char* value) { m_anomalyDetectorDescription.assign(value); }

    /**
     * <p>A description of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorDescription(const Aws::String& value) { SetAnomalyDetectorDescription(value); return *this;}

    /**
     * <p>A description of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorDescription(Aws::String&& value) { SetAnomalyDetectorDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorDescription(const char* value) { SetAnomalyDetectorDescription(value); return *this;}


    /**
     * <p>Contains information about the detector's configuration.</p>
     */
    inline const AnomalyDetectorConfigSummary& GetAnomalyDetectorConfig() const{ return m_anomalyDetectorConfig; }

    /**
     * <p>Contains information about the detector's configuration.</p>
     */
    inline void SetAnomalyDetectorConfig(const AnomalyDetectorConfigSummary& value) { m_anomalyDetectorConfig = value; }

    /**
     * <p>Contains information about the detector's configuration.</p>
     */
    inline void SetAnomalyDetectorConfig(AnomalyDetectorConfigSummary&& value) { m_anomalyDetectorConfig = std::move(value); }

    /**
     * <p>Contains information about the detector's configuration.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorConfig(const AnomalyDetectorConfigSummary& value) { SetAnomalyDetectorConfig(value); return *this;}

    /**
     * <p>Contains information about the detector's configuration.</p>
     */
    inline DescribeAnomalyDetectorResult& WithAnomalyDetectorConfig(AnomalyDetectorConfigSummary&& value) { SetAnomalyDetectorConfig(std::move(value)); return *this;}


    /**
     * <p>The time at which the detector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the detector was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the detector was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the detector was created.</p>
     */
    inline DescribeAnomalyDetectorResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the detector was created.</p>
     */
    inline DescribeAnomalyDetectorResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the detector was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The time at which the detector was last modified.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The time at which the detector was last modified.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The time at which the detector was last modified.</p>
     */
    inline DescribeAnomalyDetectorResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The time at which the detector was last modified.</p>
     */
    inline DescribeAnomalyDetectorResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}


    /**
     * <p>The status of the detector.</p>
     */
    inline const AnomalyDetectorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the detector.</p>
     */
    inline void SetStatus(const AnomalyDetectorStatus& value) { m_status = value; }

    /**
     * <p>The status of the detector.</p>
     */
    inline void SetStatus(AnomalyDetectorStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithStatus(const AnomalyDetectorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the detector.</p>
     */
    inline DescribeAnomalyDetectorResult& WithStatus(AnomalyDetectorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason that the detector failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason that the detector failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The reason that the detector failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The reason that the detector failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The reason that the detector failed.</p>
     */
    inline DescribeAnomalyDetectorResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason that the detector failed.</p>
     */
    inline DescribeAnomalyDetectorResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the detector failed.</p>
     */
    inline DescribeAnomalyDetectorResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline DescribeAnomalyDetectorResult& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline DescribeAnomalyDetectorResult& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key to use to encrypt your data.</p>
     */
    inline DescribeAnomalyDetectorResult& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>The process that caused the detector to fail.</p>
     */
    inline const AnomalyDetectorFailureType& GetFailureType() const{ return m_failureType; }

    /**
     * <p>The process that caused the detector to fail.</p>
     */
    inline void SetFailureType(const AnomalyDetectorFailureType& value) { m_failureType = value; }

    /**
     * <p>The process that caused the detector to fail.</p>
     */
    inline void SetFailureType(AnomalyDetectorFailureType&& value) { m_failureType = std::move(value); }

    /**
     * <p>The process that caused the detector to fail.</p>
     */
    inline DescribeAnomalyDetectorResult& WithFailureType(const AnomalyDetectorFailureType& value) { SetFailureType(value); return *this;}

    /**
     * <p>The process that caused the detector to fail.</p>
     */
    inline DescribeAnomalyDetectorResult& WithFailureType(AnomalyDetectorFailureType&& value) { SetFailureType(std::move(value)); return *this;}

  private:

    Aws::String m_anomalyDetectorArn;

    Aws::String m_anomalyDetectorName;

    Aws::String m_anomalyDetectorDescription;

    AnomalyDetectorConfigSummary m_anomalyDetectorConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    AnomalyDetectorStatus m_status;

    Aws::String m_failureReason;

    Aws::String m_kmsKeyArn;

    AnomalyDetectorFailureType m_failureType;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
