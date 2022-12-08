/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationKubernetesAuditLogsConfiguration.h>
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
   * <p>Organization-wide Kubernetes data sources configurations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationKubernetesConfiguration">AWS
   * API Reference</a></p>
   */
  class OrganizationKubernetesConfiguration
  {
  public:
    AWS_GUARDDUTY_API OrganizationKubernetesConfiguration();
    AWS_GUARDDUTY_API OrganizationKubernetesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationKubernetesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether Kubernetes audit logs data source should be auto-enabled for new
     * members joining the organization.</p>
     */
    inline const OrganizationKubernetesAuditLogsConfiguration& GetAuditLogs() const{ return m_auditLogs; }

    /**
     * <p>Whether Kubernetes audit logs data source should be auto-enabled for new
     * members joining the organization.</p>
     */
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }

    /**
     * <p>Whether Kubernetes audit logs data source should be auto-enabled for new
     * members joining the organization.</p>
     */
    inline void SetAuditLogs(const OrganizationKubernetesAuditLogsConfiguration& value) { m_auditLogsHasBeenSet = true; m_auditLogs = value; }

    /**
     * <p>Whether Kubernetes audit logs data source should be auto-enabled for new
     * members joining the organization.</p>
     */
    inline void SetAuditLogs(OrganizationKubernetesAuditLogsConfiguration&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::move(value); }

    /**
     * <p>Whether Kubernetes audit logs data source should be auto-enabled for new
     * members joining the organization.</p>
     */
    inline OrganizationKubernetesConfiguration& WithAuditLogs(const OrganizationKubernetesAuditLogsConfiguration& value) { SetAuditLogs(value); return *this;}

    /**
     * <p>Whether Kubernetes audit logs data source should be auto-enabled for new
     * members joining the organization.</p>
     */
    inline OrganizationKubernetesConfiguration& WithAuditLogs(OrganizationKubernetesAuditLogsConfiguration&& value) { SetAuditLogs(std::move(value)); return *this;}

  private:

    OrganizationKubernetesAuditLogsConfiguration m_auditLogs;
    bool m_auditLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
