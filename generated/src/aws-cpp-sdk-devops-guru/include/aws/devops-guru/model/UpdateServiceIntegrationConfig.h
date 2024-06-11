/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/OpsCenterIntegrationConfig.h>
#include <aws/devops-guru/model/LogsAnomalyDetectionIntegrationConfig.h>
#include <aws/devops-guru/model/KMSServerSideEncryptionIntegrationConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about updating the integration status of an Amazon Web Services
   * service, such as Amazon Web Services Systems Manager, with DevOps Guru.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateServiceIntegrationConfig">AWS
   * API Reference</a></p>
   */
  class UpdateServiceIntegrationConfig
  {
  public:
    AWS_DEVOPSGURU_API UpdateServiceIntegrationConfig();
    AWS_DEVOPSGURU_API UpdateServiceIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API UpdateServiceIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const OpsCenterIntegrationConfig& GetOpsCenter() const{ return m_opsCenter; }
    inline bool OpsCenterHasBeenSet() const { return m_opsCenterHasBeenSet; }
    inline void SetOpsCenter(const OpsCenterIntegrationConfig& value) { m_opsCenterHasBeenSet = true; m_opsCenter = value; }
    inline void SetOpsCenter(OpsCenterIntegrationConfig&& value) { m_opsCenterHasBeenSet = true; m_opsCenter = std::move(value); }
    inline UpdateServiceIntegrationConfig& WithOpsCenter(const OpsCenterIntegrationConfig& value) { SetOpsCenter(value); return *this;}
    inline UpdateServiceIntegrationConfig& WithOpsCenter(OpsCenterIntegrationConfig&& value) { SetOpsCenter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline const LogsAnomalyDetectionIntegrationConfig& GetLogsAnomalyDetection() const{ return m_logsAnomalyDetection; }
    inline bool LogsAnomalyDetectionHasBeenSet() const { return m_logsAnomalyDetectionHasBeenSet; }
    inline void SetLogsAnomalyDetection(const LogsAnomalyDetectionIntegrationConfig& value) { m_logsAnomalyDetectionHasBeenSet = true; m_logsAnomalyDetection = value; }
    inline void SetLogsAnomalyDetection(LogsAnomalyDetectionIntegrationConfig&& value) { m_logsAnomalyDetectionHasBeenSet = true; m_logsAnomalyDetection = std::move(value); }
    inline UpdateServiceIntegrationConfig& WithLogsAnomalyDetection(const LogsAnomalyDetectionIntegrationConfig& value) { SetLogsAnomalyDetection(value); return *this;}
    inline UpdateServiceIntegrationConfig& WithLogsAnomalyDetection(LogsAnomalyDetectionIntegrationConfig&& value) { SetLogsAnomalyDetection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about whether DevOps Guru is configured to encrypt server-side
     * data using KMS. </p>
     */
    inline const KMSServerSideEncryptionIntegrationConfig& GetKMSServerSideEncryption() const{ return m_kMSServerSideEncryption; }
    inline bool KMSServerSideEncryptionHasBeenSet() const { return m_kMSServerSideEncryptionHasBeenSet; }
    inline void SetKMSServerSideEncryption(const KMSServerSideEncryptionIntegrationConfig& value) { m_kMSServerSideEncryptionHasBeenSet = true; m_kMSServerSideEncryption = value; }
    inline void SetKMSServerSideEncryption(KMSServerSideEncryptionIntegrationConfig&& value) { m_kMSServerSideEncryptionHasBeenSet = true; m_kMSServerSideEncryption = std::move(value); }
    inline UpdateServiceIntegrationConfig& WithKMSServerSideEncryption(const KMSServerSideEncryptionIntegrationConfig& value) { SetKMSServerSideEncryption(value); return *this;}
    inline UpdateServiceIntegrationConfig& WithKMSServerSideEncryption(KMSServerSideEncryptionIntegrationConfig&& value) { SetKMSServerSideEncryption(std::move(value)); return *this;}
    ///@}
  private:

    OpsCenterIntegrationConfig m_opsCenter;
    bool m_opsCenterHasBeenSet = false;

    LogsAnomalyDetectionIntegrationConfig m_logsAnomalyDetection;
    bool m_logsAnomalyDetectionHasBeenSet = false;

    KMSServerSideEncryptionIntegrationConfig m_kMSServerSideEncryption;
    bool m_kMSServerSideEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
