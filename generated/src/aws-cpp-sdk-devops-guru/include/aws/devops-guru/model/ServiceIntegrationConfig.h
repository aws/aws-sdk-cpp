/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/OpsCenterIntegration.h>
#include <aws/devops-guru/model/LogsAnomalyDetectionIntegration.h>
#include <aws/devops-guru/model/KMSServerSideEncryptionIntegration.h>
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
   * <p> Information about the integration of DevOps Guru with another Amazon Web
   * Services service, such as Amazon Web Services Systems Manager. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ServiceIntegrationConfig">AWS
   * API Reference</a></p>
   */
  class ServiceIntegrationConfig
  {
  public:
    AWS_DEVOPSGURU_API ServiceIntegrationConfig() = default;
    AWS_DEVOPSGURU_API ServiceIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ServiceIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Information about whether DevOps Guru is configured to create an OpsItem in
     * Amazon Web Services Systems Manager OpsCenter for each created insight. </p>
     */
    inline const OpsCenterIntegration& GetOpsCenter() const { return m_opsCenter; }
    inline bool OpsCenterHasBeenSet() const { return m_opsCenterHasBeenSet; }
    template<typename OpsCenterT = OpsCenterIntegration>
    void SetOpsCenter(OpsCenterT&& value) { m_opsCenterHasBeenSet = true; m_opsCenter = std::forward<OpsCenterT>(value); }
    template<typename OpsCenterT = OpsCenterIntegration>
    ServiceIntegrationConfig& WithOpsCenter(OpsCenterT&& value) { SetOpsCenter(std::forward<OpsCenterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline const LogsAnomalyDetectionIntegration& GetLogsAnomalyDetection() const { return m_logsAnomalyDetection; }
    inline bool LogsAnomalyDetectionHasBeenSet() const { return m_logsAnomalyDetectionHasBeenSet; }
    template<typename LogsAnomalyDetectionT = LogsAnomalyDetectionIntegration>
    void SetLogsAnomalyDetection(LogsAnomalyDetectionT&& value) { m_logsAnomalyDetectionHasBeenSet = true; m_logsAnomalyDetection = std::forward<LogsAnomalyDetectionT>(value); }
    template<typename LogsAnomalyDetectionT = LogsAnomalyDetectionIntegration>
    ServiceIntegrationConfig& WithLogsAnomalyDetection(LogsAnomalyDetectionT&& value) { SetLogsAnomalyDetection(std::forward<LogsAnomalyDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about whether DevOps Guru is configured to encrypt server-side
     * data using KMS. </p>
     */
    inline const KMSServerSideEncryptionIntegration& GetKMSServerSideEncryption() const { return m_kMSServerSideEncryption; }
    inline bool KMSServerSideEncryptionHasBeenSet() const { return m_kMSServerSideEncryptionHasBeenSet; }
    template<typename KMSServerSideEncryptionT = KMSServerSideEncryptionIntegration>
    void SetKMSServerSideEncryption(KMSServerSideEncryptionT&& value) { m_kMSServerSideEncryptionHasBeenSet = true; m_kMSServerSideEncryption = std::forward<KMSServerSideEncryptionT>(value); }
    template<typename KMSServerSideEncryptionT = KMSServerSideEncryptionIntegration>
    ServiceIntegrationConfig& WithKMSServerSideEncryption(KMSServerSideEncryptionT&& value) { SetKMSServerSideEncryption(std::forward<KMSServerSideEncryptionT>(value)); return *this;}
    ///@}
  private:

    OpsCenterIntegration m_opsCenter;
    bool m_opsCenterHasBeenSet = false;

    LogsAnomalyDetectionIntegration m_logsAnomalyDetection;
    bool m_logsAnomalyDetectionHasBeenSet = false;

    KMSServerSideEncryptionIntegration m_kMSServerSideEncryption;
    bool m_kMSServerSideEncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
