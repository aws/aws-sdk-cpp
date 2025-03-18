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
    AWS_DEVOPSGURU_API UpdateServiceIntegrationConfig() = default;
    AWS_DEVOPSGURU_API UpdateServiceIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API UpdateServiceIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const OpsCenterIntegrationConfig& GetOpsCenter() const { return m_opsCenter; }
    inline bool OpsCenterHasBeenSet() const { return m_opsCenterHasBeenSet; }
    template<typename OpsCenterT = OpsCenterIntegrationConfig>
    void SetOpsCenter(OpsCenterT&& value) { m_opsCenterHasBeenSet = true; m_opsCenter = std::forward<OpsCenterT>(value); }
    template<typename OpsCenterT = OpsCenterIntegrationConfig>
    UpdateServiceIntegrationConfig& WithOpsCenter(OpsCenterT&& value) { SetOpsCenter(std::forward<OpsCenterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline const LogsAnomalyDetectionIntegrationConfig& GetLogsAnomalyDetection() const { return m_logsAnomalyDetection; }
    inline bool LogsAnomalyDetectionHasBeenSet() const { return m_logsAnomalyDetectionHasBeenSet; }
    template<typename LogsAnomalyDetectionT = LogsAnomalyDetectionIntegrationConfig>
    void SetLogsAnomalyDetection(LogsAnomalyDetectionT&& value) { m_logsAnomalyDetectionHasBeenSet = true; m_logsAnomalyDetection = std::forward<LogsAnomalyDetectionT>(value); }
    template<typename LogsAnomalyDetectionT = LogsAnomalyDetectionIntegrationConfig>
    UpdateServiceIntegrationConfig& WithLogsAnomalyDetection(LogsAnomalyDetectionT&& value) { SetLogsAnomalyDetection(std::forward<LogsAnomalyDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about whether DevOps Guru is configured to encrypt server-side
     * data using KMS. </p>
     */
    inline const KMSServerSideEncryptionIntegrationConfig& GetKMSServerSideEncryption() const { return m_kMSServerSideEncryption; }
    inline bool KMSServerSideEncryptionHasBeenSet() const { return m_kMSServerSideEncryptionHasBeenSet; }
    template<typename KMSServerSideEncryptionT = KMSServerSideEncryptionIntegrationConfig>
    void SetKMSServerSideEncryption(KMSServerSideEncryptionT&& value) { m_kMSServerSideEncryptionHasBeenSet = true; m_kMSServerSideEncryption = std::forward<KMSServerSideEncryptionT>(value); }
    template<typename KMSServerSideEncryptionT = KMSServerSideEncryptionIntegrationConfig>
    UpdateServiceIntegrationConfig& WithKMSServerSideEncryption(KMSServerSideEncryptionT&& value) { SetKMSServerSideEncryption(std::forward<KMSServerSideEncryptionT>(value)); return *this;}
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
