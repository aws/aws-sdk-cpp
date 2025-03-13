/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/KubernetesAuditLogsConfigurationResult.h>
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
   * <p>Describes whether any Kubernetes logs will be enabled as a data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesConfigurationResult">AWS
   * API Reference</a></p>
   */
  class KubernetesConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API KubernetesConfigurationResult() = default;
    AWS_GUARDDUTY_API KubernetesConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API KubernetesConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes whether Kubernetes audit logs are enabled as a data source.</p>
     */
    inline const KubernetesAuditLogsConfigurationResult& GetAuditLogs() const { return m_auditLogs; }
    inline bool AuditLogsHasBeenSet() const { return m_auditLogsHasBeenSet; }
    template<typename AuditLogsT = KubernetesAuditLogsConfigurationResult>
    void SetAuditLogs(AuditLogsT&& value) { m_auditLogsHasBeenSet = true; m_auditLogs = std::forward<AuditLogsT>(value); }
    template<typename AuditLogsT = KubernetesAuditLogsConfigurationResult>
    KubernetesConfigurationResult& WithAuditLogs(AuditLogsT&& value) { SetAuditLogs(std::forward<AuditLogsT>(value)); return *this;}
    ///@}
  private:

    KubernetesAuditLogsConfigurationResult m_auditLogs;
    bool m_auditLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
