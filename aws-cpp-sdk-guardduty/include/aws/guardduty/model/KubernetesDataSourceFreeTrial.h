/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DataSourceFreeTrial.h>
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
   * <p>Provides details about the Kubernetes resources when it is enabled as a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesDataSourceFreeTrial">AWS
   * API Reference</a></p>
   */
  class KubernetesDataSourceFreeTrial
  {
  public:
    AWS_GUARDDUTY_API KubernetesDataSourceFreeTrial();
    AWS_GUARDDUTY_API KubernetesDataSourceFreeTrial(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesDataSourceFreeTrial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether Kubernetes audit logs are enabled as a data source.</p>
     */
    inline const DataSourceFreeTrial& GetAuditLogs() const{ return m_auditLogs; }

    /**
     * <p>Describes whether Kubernetes audit logs are enabled as a data source.</p>
     */
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }

    /**
     * <p>Describes whether Kubernetes audit logs are enabled as a data source.</p>
     */
    inline void SetAuditLogs(const DataSourceFreeTrial& value) { m_auditLogsHasBeenSet = true; m_auditLogs = value; }

    /**
     * <p>Describes whether Kubernetes audit logs are enabled as a data source.</p>
     */
    inline void SetAuditLogs(DataSourceFreeTrial&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::move(value); }

    /**
     * <p>Describes whether Kubernetes audit logs are enabled as a data source.</p>
     */
    inline KubernetesDataSourceFreeTrial& WithAuditLogs(const DataSourceFreeTrial& value) { SetAuditLogs(value); return *this;}

    /**
     * <p>Describes whether Kubernetes audit logs are enabled as a data source.</p>
     */
    inline KubernetesDataSourceFreeTrial& WithAuditLogs(DataSourceFreeTrial&& value) { SetAuditLogs(std::move(value)); return *this;}

  private:

    DataSourceFreeTrial m_auditLogs;
    bool m_auditLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
