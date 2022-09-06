/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RStudioServerProDomainSettingsForUpdate.h>
#include <aws/sagemaker/model/ExecutionRoleIdentityConfig.h>
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
   * <p>A collection of <code>Domain</code> configuration settings to
   * update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DomainSettingsForUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DomainSettingsForUpdate
  {
  public:
    DomainSettingsForUpdate();
    DomainSettingsForUpdate(Aws::Utils::Json::JsonView jsonValue);
    DomainSettingsForUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of <code>RStudioServerPro</code> Domain-level app settings to
     * update.</p>
     */
    inline const RStudioServerProDomainSettingsForUpdate& GetRStudioServerProDomainSettingsForUpdate() const{ return m_rStudioServerProDomainSettingsForUpdate; }

    /**
     * <p>A collection of <code>RStudioServerPro</code> Domain-level app settings to
     * update.</p>
     */
    inline bool RStudioServerProDomainSettingsForUpdateHasBeenSet() const { return m_rStudioServerProDomainSettingsForUpdateHasBeenSet; }

    /**
     * <p>A collection of <code>RStudioServerPro</code> Domain-level app settings to
     * update.</p>
     */
    inline void SetRStudioServerProDomainSettingsForUpdate(const RStudioServerProDomainSettingsForUpdate& value) { m_rStudioServerProDomainSettingsForUpdateHasBeenSet = true; m_rStudioServerProDomainSettingsForUpdate = value; }

    /**
     * <p>A collection of <code>RStudioServerPro</code> Domain-level app settings to
     * update.</p>
     */
    inline void SetRStudioServerProDomainSettingsForUpdate(RStudioServerProDomainSettingsForUpdate&& value) { m_rStudioServerProDomainSettingsForUpdateHasBeenSet = true; m_rStudioServerProDomainSettingsForUpdate = std::move(value); }

    /**
     * <p>A collection of <code>RStudioServerPro</code> Domain-level app settings to
     * update.</p>
     */
    inline DomainSettingsForUpdate& WithRStudioServerProDomainSettingsForUpdate(const RStudioServerProDomainSettingsForUpdate& value) { SetRStudioServerProDomainSettingsForUpdate(value); return *this;}

    /**
     * <p>A collection of <code>RStudioServerPro</code> Domain-level app settings to
     * update.</p>
     */
    inline DomainSettingsForUpdate& WithRStudioServerProDomainSettingsForUpdate(RStudioServerProDomainSettingsForUpdate&& value) { SetRStudioServerProDomainSettingsForUpdate(std::move(value)); return *this;}


    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">
     * <code>sts:SourceIdentity</code> key</a>. This configuration can only be modified
     * if there are no apps in the <code>InService</code> or <code>Pending</code>
     * state.</p>
     */
    inline const ExecutionRoleIdentityConfig& GetExecutionRoleIdentityConfig() const{ return m_executionRoleIdentityConfig; }

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">
     * <code>sts:SourceIdentity</code> key</a>. This configuration can only be modified
     * if there are no apps in the <code>InService</code> or <code>Pending</code>
     * state.</p>
     */
    inline bool ExecutionRoleIdentityConfigHasBeenSet() const { return m_executionRoleIdentityConfigHasBeenSet; }

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">
     * <code>sts:SourceIdentity</code> key</a>. This configuration can only be modified
     * if there are no apps in the <code>InService</code> or <code>Pending</code>
     * state.</p>
     */
    inline void SetExecutionRoleIdentityConfig(const ExecutionRoleIdentityConfig& value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = value; }

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">
     * <code>sts:SourceIdentity</code> key</a>. This configuration can only be modified
     * if there are no apps in the <code>InService</code> or <code>Pending</code>
     * state.</p>
     */
    inline void SetExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig&& value) { m_executionRoleIdentityConfigHasBeenSet = true; m_executionRoleIdentityConfig = std::move(value); }

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">
     * <code>sts:SourceIdentity</code> key</a>. This configuration can only be modified
     * if there are no apps in the <code>InService</code> or <code>Pending</code>
     * state.</p>
     */
    inline DomainSettingsForUpdate& WithExecutionRoleIdentityConfig(const ExecutionRoleIdentityConfig& value) { SetExecutionRoleIdentityConfig(value); return *this;}

    /**
     * <p>The configuration for attaching a SageMaker user profile name to the
     * execution role as a <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">
     * <code>sts:SourceIdentity</code> key</a>. This configuration can only be modified
     * if there are no apps in the <code>InService</code> or <code>Pending</code>
     * state.</p>
     */
    inline DomainSettingsForUpdate& WithExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig&& value) { SetExecutionRoleIdentityConfig(std::move(value)); return *this;}

  private:

    RStudioServerProDomainSettingsForUpdate m_rStudioServerProDomainSettingsForUpdate;
    bool m_rStudioServerProDomainSettingsForUpdateHasBeenSet = false;

    ExecutionRoleIdentityConfig m_executionRoleIdentityConfig;
    bool m_executionRoleIdentityConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
