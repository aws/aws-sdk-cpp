/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DataSourceStatus.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Describes whether Kubernetes audit logs are enabled as a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesAuditLogsConfigurationResult">AWS
   * API Reference</a></p>
   */
  class KubernetesAuditLogsConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API KubernetesAuditLogsConfigurationResult();
    AWS_GUARDDUTY_API KubernetesAuditLogsConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesAuditLogsConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that describes whether Kubernetes audit logs are enabled as a data
     * source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A value that describes whether Kubernetes audit logs are enabled as a data
     * source.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A value that describes whether Kubernetes audit logs are enabled as a data
     * source.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A value that describes whether Kubernetes audit logs are enabled as a data
     * source.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A value that describes whether Kubernetes audit logs are enabled as a data
     * source.</p>
     */
    inline KubernetesAuditLogsConfigurationResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A value that describes whether Kubernetes audit logs are enabled as a data
     * source.</p>
     */
    inline KubernetesAuditLogsConfigurationResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DataSourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
