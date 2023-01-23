/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/KubernetesAuditLogsConfiguration.h>
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
   * <p>Describes whether any Kubernetes data sources are enabled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesConfiguration">AWS
   * API Reference</a></p>
   */
  class KubernetesConfiguration
  {
  public:
    AWS_GUARDDUTY_API KubernetesConfiguration();
    AWS_GUARDDUTY_API KubernetesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline const KubernetesAuditLogsConfiguration& GetAuditLogs() const{ return m_auditLogs; }

    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }

    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline void SetAuditLogs(const KubernetesAuditLogsConfiguration& value) { m_auditLogsHasBeenSet = true; m_auditLogs = value; }

    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline void SetAuditLogs(KubernetesAuditLogsConfiguration&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::move(value); }

    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline KubernetesConfiguration& WithAuditLogs(const KubernetesAuditLogsConfiguration& value) { SetAuditLogs(value); return *this;}

    /**
     * <p>The status of Kubernetes audit logs as a data source.</p>
     */
    inline KubernetesConfiguration& WithAuditLogs(KubernetesAuditLogsConfiguration&& value) { SetAuditLogs(std::move(value)); return *this;}

  private:

    KubernetesAuditLogsConfiguration m_auditLogs;
    bool m_auditLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
