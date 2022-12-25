/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RStudioServerProDomainSettings.h>
#include <aws/sagemaker/model/ExecutionRoleIdentityConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A collection of settings that apply to the <code>SageMaker Domain</code>.
   * These settings are specified through the <code>CreateDomain</code> API
   * call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DomainSettings">AWS
   * API Reference</a></p>
   */
  class DomainSettings
  {
  public:
    AWS_SAGEMAKER_API DomainSettings();
    AWS_SAGEMAKER_API DomainSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DomainSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline DomainSettings& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline DomainSettings& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline DomainSettings& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline DomainSettings& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud that the
     * <code>Domain</code> uses for communication between Domain-level apps and user
     * apps.</p>
     */
    inline DomainSettings& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>A collection of settings that configure the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline const RStudioServerProDomainSettings& GetRStudioServerProDomainSettings() const{ return m_rStudioServerProDomainSettings; }

    /**
     * <p>A collection of settings that configure the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline bool RStudioServerProDomainSettingsHasBeenSet() const { return m_rStudioServerProDomainSettingsHasBeenSet; }

    /**
     * <p>A collection of settings that configure the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline void SetRStudioServerProDomainSettings(const RStudioServerProDomainSettings& value) { m_rStudioServerProDomainSettingsHasBeenSet = true; m_rStudioServerProDomainSettings = value; }

    /**
     * <p>A collection of settings that configure the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline void SetRStudioServerProDomainSettings(RStudioServerProDomainSettings&& value) { m_rStudioServerProDomainSettingsHasBeenSet = true; m_rStudioServerProDomainSettings = std::move(value); }

    /**
     * <p>A collection of settings that configure the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline DomainSettings& WithRStudioServerProDomainSettings(const RStudioServerProDomainSettings& value) { SetRStudioServerProDomainSettings(value); return *this;}

    /**
     * <p>A collection of settings that configure the <code>RStudioServerPro</code>
     * Domain-level app.</p>
     */
    inline DomainSettings& WithRStudioServerProDomainSettings(RStudioServerProDomainSettings&& value) { SetRStudioServerProDomainSettings(std::move(value)); return *this;}


    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>.</p>
     */
    inline const ExecutionRoleIdentityConfig& GetExecutionRoleIdentityConfig() const{ return m_executionRoleIdentityConfig; }

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>.</p>
     */
    inline bool ExecutionRoleIdentityConfigHasBeenSet() const { return m_executionRoleIdentityConfigHasBeenSet; }

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>.</p>
     */
    inline void SetExecutionRoleIdentityConfig(const ExecutionRoleIdentityConfig& value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = value; }

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>.</p>
     */
    inline void SetExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig&& value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = std::move(value); }

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>.</p>
     */
    inline DomainSettings& WithExecutionRoleIdentityConfig(const ExecutionRoleIdentityConfig& value) { SetExecutionRoleIdentityConfig(value); return *this;}

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">sts:SourceIdentity
     * key</a>.</p>
     */
    inline DomainSettings& WithExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig&& value) { SetExecutionRoleIdentityConfig(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    RStudioServerProDomainSettings m_rStudioServerProDomainSettings;
    bool m_rStudioServerProDomainSettingsHasBeenSet = false;

    ExecutionRoleIdentityConfig m_executionRoleIdentityConfig;
    bool m_executionRoleIdentityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
