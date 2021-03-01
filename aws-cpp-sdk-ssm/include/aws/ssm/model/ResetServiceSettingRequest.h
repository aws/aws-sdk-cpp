/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   * <p>The request body of the ResetServiceSetting API action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSettingRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API ResetServiceSettingRequest : public SSMRequest
  {
  public:
    ResetServiceSettingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetServiceSetting"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to reset. The setting
     * ID can be <code>/ssm/automation/customer-script-log-destination</code>,
     * <code>/ssm/automation/customer-script-log-group-name</code>,
     * <code>/ssm/parameter-store/default-parameter-tier</code>,
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, or
     * <code>/ssm/managed-instance/activation-tier</code>. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.</p>
     */
    inline const Aws::String& GetSettingId() const{ return m_settingId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to reset. The setting
     * ID can be <code>/ssm/automation/customer-script-log-destination</code>,
     * <code>/ssm/automation/customer-script-log-group-name</code>,
     * <code>/ssm/parameter-store/default-parameter-tier</code>,
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, or
     * <code>/ssm/managed-instance/activation-tier</code>. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.</p>
     */
    inline bool SettingIdHasBeenSet() const { return m_settingIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to reset. The setting
     * ID can be <code>/ssm/automation/customer-script-log-destination</code>,
     * <code>/ssm/automation/customer-script-log-group-name</code>,
     * <code>/ssm/parameter-store/default-parameter-tier</code>,
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, or
     * <code>/ssm/managed-instance/activation-tier</code>. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.</p>
     */
    inline void SetSettingId(const Aws::String& value) { m_settingIdHasBeenSet = true; m_settingId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to reset. The setting
     * ID can be <code>/ssm/automation/customer-script-log-destination</code>,
     * <code>/ssm/automation/customer-script-log-group-name</code>,
     * <code>/ssm/parameter-store/default-parameter-tier</code>,
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, or
     * <code>/ssm/managed-instance/activation-tier</code>. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.</p>
     */
    inline void SetSettingId(Aws::String&& value) { m_settingIdHasBeenSet = true; m_settingId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to reset. The setting
     * ID can be <code>/ssm/automation/customer-script-log-destination</code>,
     * <code>/ssm/automation/customer-script-log-group-name</code>,
     * <code>/ssm/parameter-store/default-parameter-tier</code>,
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, or
     * <code>/ssm/managed-instance/activation-tier</code>. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.</p>
     */
    inline void SetSettingId(const char* value) { m_settingIdHasBeenSet = true; m_settingId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to reset. The setting
     * ID can be <code>/ssm/automation/customer-script-log-destination</code>,
     * <code>/ssm/automation/customer-script-log-group-name</code>,
     * <code>/ssm/parameter-store/default-parameter-tier</code>,
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, or
     * <code>/ssm/managed-instance/activation-tier</code>. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.</p>
     */
    inline ResetServiceSettingRequest& WithSettingId(const Aws::String& value) { SetSettingId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to reset. The setting
     * ID can be <code>/ssm/automation/customer-script-log-destination</code>,
     * <code>/ssm/automation/customer-script-log-group-name</code>,
     * <code>/ssm/parameter-store/default-parameter-tier</code>,
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, or
     * <code>/ssm/managed-instance/activation-tier</code>. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.</p>
     */
    inline ResetServiceSettingRequest& WithSettingId(Aws::String&& value) { SetSettingId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service setting to reset. The setting
     * ID can be <code>/ssm/automation/customer-script-log-destination</code>,
     * <code>/ssm/automation/customer-script-log-group-name</code>,
     * <code>/ssm/parameter-store/default-parameter-tier</code>,
     * <code>/ssm/parameter-store/high-throughput-enabled</code>, or
     * <code>/ssm/managed-instance/activation-tier</code>. For example,
     * <code>arn:aws:ssm:us-east-1:111122223333:servicesetting/ssm/parameter-store/high-throughput-enabled</code>.</p>
     */
    inline ResetServiceSettingRequest& WithSettingId(const char* value) { SetSettingId(value); return *this;}

  private:

    Aws::String m_settingId;
    bool m_settingIdHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
