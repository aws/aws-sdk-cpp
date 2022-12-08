/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/OptInStatus.h>
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
   * <p> Information about the integration of DevOps Guru with CloudWatch log groups
   * for log anomaly detection. You can use this to update the configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/LogsAnomalyDetectionIntegrationConfig">AWS
   * API Reference</a></p>
   */
  class LogsAnomalyDetectionIntegrationConfig
  {
  public:
    AWS_DEVOPSGURU_API LogsAnomalyDetectionIntegrationConfig();
    AWS_DEVOPSGURU_API LogsAnomalyDetectionIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API LogsAnomalyDetectionIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies if DevOps Guru is configured to perform log anomaly detection on
     * CloudWatch log groups.</p>
     */
    inline const OptInStatus& GetOptInStatus() const{ return m_optInStatus; }

    /**
     * <p>Specifies if DevOps Guru is configured to perform log anomaly detection on
     * CloudWatch log groups.</p>
     */
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }

    /**
     * <p>Specifies if DevOps Guru is configured to perform log anomaly detection on
     * CloudWatch log groups.</p>
     */
    inline void SetOptInStatus(const OptInStatus& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }

    /**
     * <p>Specifies if DevOps Guru is configured to perform log anomaly detection on
     * CloudWatch log groups.</p>
     */
    inline void SetOptInStatus(OptInStatus&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }

    /**
     * <p>Specifies if DevOps Guru is configured to perform log anomaly detection on
     * CloudWatch log groups.</p>
     */
    inline LogsAnomalyDetectionIntegrationConfig& WithOptInStatus(const OptInStatus& value) { SetOptInStatus(value); return *this;}

    /**
     * <p>Specifies if DevOps Guru is configured to perform log anomaly detection on
     * CloudWatch log groups.</p>
     */
    inline LogsAnomalyDetectionIntegrationConfig& WithOptInStatus(OptInStatus&& value) { SetOptInStatus(std::move(value)); return *this;}

  private:

    OptInStatus m_optInStatus;
    bool m_optInStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
