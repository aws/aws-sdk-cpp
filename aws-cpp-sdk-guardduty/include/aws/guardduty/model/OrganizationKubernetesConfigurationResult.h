/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationKubernetesAuditLogsConfigurationResult.h>
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
   * <p>The current configuration of all Kubernetes data sources for the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationKubernetesConfigurationResult">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API OrganizationKubernetesConfigurationResult
  {
  public:
    OrganizationKubernetesConfigurationResult();
    OrganizationKubernetesConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    OrganizationKubernetesConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current configuration of Kubernetes audit logs as a data source for the
     * organization.</p>
     */
    inline const OrganizationKubernetesAuditLogsConfigurationResult& GetAuditLogs() const{ return m_auditLogs; }

    /**
     * <p>The current configuration of Kubernetes audit logs as a data source for the
     * organization.</p>
     */
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }

    /**
     * <p>The current configuration of Kubernetes audit logs as a data source for the
     * organization.</p>
     */
    inline void SetAuditLogs(const OrganizationKubernetesAuditLogsConfigurationResult& value) { m_auditLogsHasBeenSet = true; m_auditLogs = value; }

    /**
     * <p>The current configuration of Kubernetes audit logs as a data source for the
     * organization.</p>
     */
    inline void SetAuditLogs(OrganizationKubernetesAuditLogsConfigurationResult&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::move(value); }

    /**
     * <p>The current configuration of Kubernetes audit logs as a data source for the
     * organization.</p>
     */
    inline OrganizationKubernetesConfigurationResult& WithAuditLogs(const OrganizationKubernetesAuditLogsConfigurationResult& value) { SetAuditLogs(value); return *this;}

    /**
     * <p>The current configuration of Kubernetes audit logs as a data source for the
     * organization.</p>
     */
    inline OrganizationKubernetesConfigurationResult& WithAuditLogs(OrganizationKubernetesAuditLogsConfigurationResult&& value) { SetAuditLogs(std::move(value)); return *this;}

  private:

    OrganizationKubernetesAuditLogsConfigurationResult m_auditLogs;
    bool m_auditLogsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
