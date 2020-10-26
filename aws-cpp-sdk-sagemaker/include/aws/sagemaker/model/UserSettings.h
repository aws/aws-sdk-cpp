/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SharingSettings.h>
#include <aws/sagemaker/model/JupyterServerAppSettings.h>
#include <aws/sagemaker/model/KernelGatewayAppSettings.h>
#include <aws/sagemaker/model/TensorBoardAppSettings.h>
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
   * <p>A collection of settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UserSettings">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API UserSettings
  {
  public:
    UserSettings();
    UserSettings(Aws::Utils::Json::JsonView jsonValue);
    UserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The execution role for the user.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The execution role for the user.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The execution role for the user.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The execution role for the user.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The execution role for the user.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The execution role for the user.</p>
     */
    inline UserSettings& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The execution role for the user.</p>
     */
    inline UserSettings& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The execution role for the user.</p>
     */
    inline UserSettings& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline UserSettings& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline UserSettings& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline UserSettings& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline UserSettings& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p>
     */
    inline UserSettings& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The sharing settings.</p>
     */
    inline const SharingSettings& GetSharingSettings() const{ return m_sharingSettings; }

    /**
     * <p>The sharing settings.</p>
     */
    inline bool SharingSettingsHasBeenSet() const { return m_sharingSettingsHasBeenSet; }

    /**
     * <p>The sharing settings.</p>
     */
    inline void SetSharingSettings(const SharingSettings& value) { m_sharingSettingsHasBeenSet = true; m_sharingSettings = value; }

    /**
     * <p>The sharing settings.</p>
     */
    inline void SetSharingSettings(SharingSettings&& value) { m_sharingSettingsHasBeenSet = true; m_sharingSettings = std::move(value); }

    /**
     * <p>The sharing settings.</p>
     */
    inline UserSettings& WithSharingSettings(const SharingSettings& value) { SetSharingSettings(value); return *this;}

    /**
     * <p>The sharing settings.</p>
     */
    inline UserSettings& WithSharingSettings(SharingSettings&& value) { SetSharingSettings(std::move(value)); return *this;}


    /**
     * <p>The Jupyter server's app settings.</p>
     */
    inline const JupyterServerAppSettings& GetJupyterServerAppSettings() const{ return m_jupyterServerAppSettings; }

    /**
     * <p>The Jupyter server's app settings.</p>
     */
    inline bool JupyterServerAppSettingsHasBeenSet() const { return m_jupyterServerAppSettingsHasBeenSet; }

    /**
     * <p>The Jupyter server's app settings.</p>
     */
    inline void SetJupyterServerAppSettings(const JupyterServerAppSettings& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = value; }

    /**
     * <p>The Jupyter server's app settings.</p>
     */
    inline void SetJupyterServerAppSettings(JupyterServerAppSettings&& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = std::move(value); }

    /**
     * <p>The Jupyter server's app settings.</p>
     */
    inline UserSettings& WithJupyterServerAppSettings(const JupyterServerAppSettings& value) { SetJupyterServerAppSettings(value); return *this;}

    /**
     * <p>The Jupyter server's app settings.</p>
     */
    inline UserSettings& WithJupyterServerAppSettings(JupyterServerAppSettings&& value) { SetJupyterServerAppSettings(std::move(value)); return *this;}


    /**
     * <p>The kernel gateway app settings.</p>
     */
    inline const KernelGatewayAppSettings& GetKernelGatewayAppSettings() const{ return m_kernelGatewayAppSettings; }

    /**
     * <p>The kernel gateway app settings.</p>
     */
    inline bool KernelGatewayAppSettingsHasBeenSet() const { return m_kernelGatewayAppSettingsHasBeenSet; }

    /**
     * <p>The kernel gateway app settings.</p>
     */
    inline void SetKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = value; }

    /**
     * <p>The kernel gateway app settings.</p>
     */
    inline void SetKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = std::move(value); }

    /**
     * <p>The kernel gateway app settings.</p>
     */
    inline UserSettings& WithKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { SetKernelGatewayAppSettings(value); return *this;}

    /**
     * <p>The kernel gateway app settings.</p>
     */
    inline UserSettings& WithKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { SetKernelGatewayAppSettings(std::move(value)); return *this;}


    /**
     * <p>The TensorBoard app settings.</p>
     */
    inline const TensorBoardAppSettings& GetTensorBoardAppSettings() const{ return m_tensorBoardAppSettings; }

    /**
     * <p>The TensorBoard app settings.</p>
     */
    inline bool TensorBoardAppSettingsHasBeenSet() const { return m_tensorBoardAppSettingsHasBeenSet; }

    /**
     * <p>The TensorBoard app settings.</p>
     */
    inline void SetTensorBoardAppSettings(const TensorBoardAppSettings& value) { m_tensorBoardAppSettingsHasBeenSet = true; m_tensorBoardAppSettings = value; }

    /**
     * <p>The TensorBoard app settings.</p>
     */
    inline void SetTensorBoardAppSettings(TensorBoardAppSettings&& value) { m_tensorBoardAppSettingsHasBeenSet = true; m_tensorBoardAppSettings = std::move(value); }

    /**
     * <p>The TensorBoard app settings.</p>
     */
    inline UserSettings& WithTensorBoardAppSettings(const TensorBoardAppSettings& value) { SetTensorBoardAppSettings(value); return *this;}

    /**
     * <p>The TensorBoard app settings.</p>
     */
    inline UserSettings& WithTensorBoardAppSettings(TensorBoardAppSettings&& value) { SetTensorBoardAppSettings(std::move(value)); return *this;}

  private:

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    SharingSettings m_sharingSettings;
    bool m_sharingSettingsHasBeenSet;

    JupyterServerAppSettings m_jupyterServerAppSettings;
    bool m_jupyterServerAppSettingsHasBeenSet;

    KernelGatewayAppSettings m_kernelGatewayAppSettings;
    bool m_kernelGatewayAppSettingsHasBeenSet;

    TensorBoardAppSettings m_tensorBoardAppSettings;
    bool m_tensorBoardAppSettingsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
