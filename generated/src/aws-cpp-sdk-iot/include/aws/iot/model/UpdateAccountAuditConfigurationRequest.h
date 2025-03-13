/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/AuditNotificationType.h>
#include <aws/iot/model/AuditNotificationTarget.h>
#include <aws/iot/model/AuditCheckConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateAccountAuditConfigurationRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateAccountAuditConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountAuditConfiguration"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that grants permission to IoT to
     * access information about your devices, policies, certificates, and other items
     * as required when performing an audit.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateAccountAuditConfigurationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline const Aws::Map<AuditNotificationType, AuditNotificationTarget>& GetAuditNotificationTargetConfigurations() const { return m_auditNotificationTargetConfigurations; }
    inline bool AuditNotificationTargetConfigurationsHasBeenSet() const { return m_auditNotificationTargetConfigurationsHasBeenSet; }
    template<typename AuditNotificationTargetConfigurationsT = Aws::Map<AuditNotificationType, AuditNotificationTarget>>
    void SetAuditNotificationTargetConfigurations(AuditNotificationTargetConfigurationsT&& value) { m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations = std::forward<AuditNotificationTargetConfigurationsT>(value); }
    template<typename AuditNotificationTargetConfigurationsT = Aws::Map<AuditNotificationType, AuditNotificationTarget>>
    UpdateAccountAuditConfigurationRequest& WithAuditNotificationTargetConfigurations(AuditNotificationTargetConfigurationsT&& value) { SetAuditNotificationTargetConfigurations(std::forward<AuditNotificationTargetConfigurationsT>(value)); return *this;}
    inline UpdateAccountAuditConfigurationRequest& AddAuditNotificationTargetConfigurations(AuditNotificationType key, AuditNotificationTarget value) {
      m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks,
     * including those that are currently enabled.</p> <p>Some data collection might
     * start immediately when certain checks are enabled. When a check is disabled, any
     * data collected so far in relation to the check is deleted.</p> <p>You cannot
     * disable a check if it's used by any scheduled audit. You must first delete the
     * check from the scheduled audit or delete the scheduled audit itself.</p> <p>On
     * the first call to <code>UpdateAccountAuditConfiguration</code>, this parameter
     * is required and must specify at least one enabled check.</p>
     */
    inline const Aws::Map<Aws::String, AuditCheckConfiguration>& GetAuditCheckConfigurations() const { return m_auditCheckConfigurations; }
    inline bool AuditCheckConfigurationsHasBeenSet() const { return m_auditCheckConfigurationsHasBeenSet; }
    template<typename AuditCheckConfigurationsT = Aws::Map<Aws::String, AuditCheckConfiguration>>
    void SetAuditCheckConfigurations(AuditCheckConfigurationsT&& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations = std::forward<AuditCheckConfigurationsT>(value); }
    template<typename AuditCheckConfigurationsT = Aws::Map<Aws::String, AuditCheckConfiguration>>
    UpdateAccountAuditConfigurationRequest& WithAuditCheckConfigurations(AuditCheckConfigurationsT&& value) { SetAuditCheckConfigurations(std::forward<AuditCheckConfigurationsT>(value)); return *this;}
    template<typename AuditCheckConfigurationsKeyT = Aws::String, typename AuditCheckConfigurationsValueT = AuditCheckConfiguration>
    UpdateAccountAuditConfigurationRequest& AddAuditCheckConfigurations(AuditCheckConfigurationsKeyT&& key, AuditCheckConfigurationsValueT&& value) {
      m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations.emplace(std::forward<AuditCheckConfigurationsKeyT>(key), std::forward<AuditCheckConfigurationsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<AuditNotificationType, AuditNotificationTarget> m_auditNotificationTargetConfigurations;
    bool m_auditNotificationTargetConfigurationsHasBeenSet = false;

    Aws::Map<Aws::String, AuditCheckConfiguration> m_auditCheckConfigurations;
    bool m_auditCheckConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
