/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API UpdateAccountAuditConfigurationRequest : public IoTRequest
  {
  public:
    UpdateAccountAuditConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountAuditConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants permission to AWS IoT to access information
     * about your devices, policies, certificates and other items as necessary when
     * performing an audit.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline const Aws::Map<AuditNotificationType, AuditNotificationTarget>& GetAuditNotificationTargetConfigurations() const{ return m_auditNotificationTargetConfigurations; }

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline bool AuditNotificationTargetConfigurationsHasBeenSet() const { return m_auditNotificationTargetConfigurationsHasBeenSet; }

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline void SetAuditNotificationTargetConfigurations(const Aws::Map<AuditNotificationType, AuditNotificationTarget>& value) { m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations = value; }

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline void SetAuditNotificationTargetConfigurations(Aws::Map<AuditNotificationType, AuditNotificationTarget>&& value) { m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations = std::move(value); }

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& WithAuditNotificationTargetConfigurations(const Aws::Map<AuditNotificationType, AuditNotificationTarget>& value) { SetAuditNotificationTargetConfigurations(value); return *this;}

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& WithAuditNotificationTargetConfigurations(Aws::Map<AuditNotificationType, AuditNotificationTarget>&& value) { SetAuditNotificationTargetConfigurations(std::move(value)); return *this;}

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditNotificationTargetConfigurations(const AuditNotificationType& key, const AuditNotificationTarget& value) { m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations.emplace(key, value); return *this; }

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditNotificationTargetConfigurations(AuditNotificationType&& key, const AuditNotificationTarget& value) { m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditNotificationTargetConfigurations(const AuditNotificationType& key, AuditNotificationTarget&& value) { m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Information about the targets to which audit notifications are sent.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditNotificationTargetConfigurations(AuditNotificationType&& key, AuditNotificationTarget&& value) { m_auditNotificationTargetConfigurationsHasBeenSet = true; m_auditNotificationTargetConfigurations.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline const Aws::Map<Aws::String, AuditCheckConfiguration>& GetAuditCheckConfigurations() const{ return m_auditCheckConfigurations; }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline bool AuditCheckConfigurationsHasBeenSet() const { return m_auditCheckConfigurationsHasBeenSet; }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline void SetAuditCheckConfigurations(const Aws::Map<Aws::String, AuditCheckConfiguration>& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations = value; }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline void SetAuditCheckConfigurations(Aws::Map<Aws::String, AuditCheckConfiguration>&& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations = std::move(value); }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& WithAuditCheckConfigurations(const Aws::Map<Aws::String, AuditCheckConfiguration>& value) { SetAuditCheckConfigurations(value); return *this;}

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& WithAuditCheckConfigurations(Aws::Map<Aws::String, AuditCheckConfiguration>&& value) { SetAuditCheckConfigurations(std::move(value)); return *this;}

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditCheckConfigurations(const Aws::String& key, const AuditCheckConfiguration& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations.emplace(key, value); return *this; }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditCheckConfigurations(Aws::String&& key, const AuditCheckConfiguration& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditCheckConfigurations(const Aws::String& key, AuditCheckConfiguration&& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditCheckConfigurations(Aws::String&& key, AuditCheckConfiguration&& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditCheckConfigurations(const char* key, AuditCheckConfiguration&& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies which audit checks are enabled and disabled for this account. Use
     * <code>DescribeAccountAuditConfiguration</code> to see the list of all checks
     * including those that are currently enabled.</p> <p>Note that some data
     * collection may begin immediately when certain checks are enabled. When a check
     * is disabled, any data collected so far in relation to the check is deleted.</p>
     * <p>You cannot disable a check if it is used by any scheduled audit. You must
     * first delete the check from the scheduled audit or delete the scheduled audit
     * itself.</p> <p>On the first call to <code>UpdateAccountAuditConfiguration</code>
     * this parameter is required and must specify at least one enabled check.</p>
     */
    inline UpdateAccountAuditConfigurationRequest& AddAuditCheckConfigurations(const char* key, const AuditCheckConfiguration& value) { m_auditCheckConfigurationsHasBeenSet = true; m_auditCheckConfigurations.emplace(key, value); return *this; }

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Map<AuditNotificationType, AuditNotificationTarget> m_auditNotificationTargetConfigurations;
    bool m_auditNotificationTargetConfigurationsHasBeenSet;

    Aws::Map<Aws::String, AuditCheckConfiguration> m_auditCheckConfigurations;
    bool m_auditCheckConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
