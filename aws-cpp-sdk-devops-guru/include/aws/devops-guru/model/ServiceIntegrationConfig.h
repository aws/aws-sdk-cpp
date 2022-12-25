/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/OpsCenterIntegration.h>
#include <aws/devops-guru/model/LogsAnomalyDetectionIntegration.h>
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
    AWS_DEVOPSGURU_API ServiceIntegrationConfig();
    AWS_DEVOPSGURU_API ServiceIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ServiceIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about whether DevOps Guru is configured to create an OpsItem in
     * Amazon Web Services Systems Manager OpsCenter for each created insight. </p>
     */
    inline const OpsCenterIntegration& GetOpsCenter() const{ return m_opsCenter; }

    /**
     * <p> Information about whether DevOps Guru is configured to create an OpsItem in
     * Amazon Web Services Systems Manager OpsCenter for each created insight. </p>
     */
    inline bool OpsCenterHasBeenSet() const { return m_opsCenterHasBeenSet; }

    /**
     * <p> Information about whether DevOps Guru is configured to create an OpsItem in
     * Amazon Web Services Systems Manager OpsCenter for each created insight. </p>
     */
    inline void SetOpsCenter(const OpsCenterIntegration& value) { m_opsCenterHasBeenSet = true; m_opsCenter = value; }

    /**
     * <p> Information about whether DevOps Guru is configured to create an OpsItem in
     * Amazon Web Services Systems Manager OpsCenter for each created insight. </p>
     */
    inline void SetOpsCenter(OpsCenterIntegration&& value) { m_opsCenterHasBeenSet = true; m_opsCenter = std::move(value); }

    /**
     * <p> Information about whether DevOps Guru is configured to create an OpsItem in
     * Amazon Web Services Systems Manager OpsCenter for each created insight. </p>
     */
    inline ServiceIntegrationConfig& WithOpsCenter(const OpsCenterIntegration& value) { SetOpsCenter(value); return *this;}

    /**
     * <p> Information about whether DevOps Guru is configured to create an OpsItem in
     * Amazon Web Services Systems Manager OpsCenter for each created insight. </p>
     */
    inline ServiceIntegrationConfig& WithOpsCenter(OpsCenterIntegration&& value) { SetOpsCenter(std::move(value)); return *this;}


    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline const LogsAnomalyDetectionIntegration& GetLogsAnomalyDetection() const{ return m_logsAnomalyDetection; }

    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline bool LogsAnomalyDetectionHasBeenSet() const { return m_logsAnomalyDetectionHasBeenSet; }

    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline void SetLogsAnomalyDetection(const LogsAnomalyDetectionIntegration& value) { m_logsAnomalyDetectionHasBeenSet = true; m_logsAnomalyDetection = value; }

    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline void SetLogsAnomalyDetection(LogsAnomalyDetectionIntegration&& value) { m_logsAnomalyDetectionHasBeenSet = true; m_logsAnomalyDetection = std::move(value); }

    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline ServiceIntegrationConfig& WithLogsAnomalyDetection(const LogsAnomalyDetectionIntegration& value) { SetLogsAnomalyDetection(value); return *this;}

    /**
     * <p> Information about whether DevOps Guru is configured to perform log anomaly
     * detection on Amazon CloudWatch log groups. </p>
     */
    inline ServiceIntegrationConfig& WithLogsAnomalyDetection(LogsAnomalyDetectionIntegration&& value) { SetLogsAnomalyDetection(std::move(value)); return *this;}

  private:

    OpsCenterIntegration m_opsCenter;
    bool m_opsCenterHasBeenSet = false;

    LogsAnomalyDetectionIntegration m_logsAnomalyDetection;
    bool m_logsAnomalyDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
