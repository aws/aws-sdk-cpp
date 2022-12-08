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
#include <aws/sagemaker/model/RStudioServerProAppSettings.h>
#include <aws/sagemaker/model/RSessionAppSettings.h>
#include <aws/sagemaker/model/CanvasAppSettings.h>
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
   * <p>A collection of settings that apply to users of Amazon SageMaker Studio.
   * These settings are specified when the <code>CreateUserProfile</code> API is
   * called, and as <code>DefaultUserSettings</code> when the
   * <code>CreateDomain</code> API is called.</p> <p> <code>SecurityGroups</code> is
   * aggregated when specified in both calls. For all other settings in
   * <code>UserSettings</code>, the values specified in
   * <code>CreateUserProfile</code> take precedence over those specified in
   * <code>CreateDomain</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UserSettings">AWS
   * API Reference</a></p>
   */
  class UserSettings
  {
  public:
    AWS_SAGEMAKER_API UserSettings();
    AWS_SAGEMAKER_API UserSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline UserSettings& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline UserSettings& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline UserSettings& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline UserSettings& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that Studio
     * uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>.</p> <p>Amazon SageMaker adds a security group to allow NFS
     * traffic from SageMaker Studio. Therefore, the number of security groups that you
     * can specify is one less than the maximum number shown.</p>
     */
    inline UserSettings& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>Specifies options for sharing SageMaker Studio notebooks.</p>
     */
    inline const SharingSettings& GetSharingSettings() const{ return m_sharingSettings; }

    /**
     * <p>Specifies options for sharing SageMaker Studio notebooks.</p>
     */
    inline bool SharingSettingsHasBeenSet() const { return m_sharingSettingsHasBeenSet; }

    /**
     * <p>Specifies options for sharing SageMaker Studio notebooks.</p>
     */
    inline void SetSharingSettings(const SharingSettings& value) { m_sharingSettingsHasBeenSet = true; m_sharingSettings = value; }

    /**
     * <p>Specifies options for sharing SageMaker Studio notebooks.</p>
     */
    inline void SetSharingSettings(SharingSettings&& value) { m_sharingSettingsHasBeenSet = true; m_sharingSettings = std::move(value); }

    /**
     * <p>Specifies options for sharing SageMaker Studio notebooks.</p>
     */
    inline UserSettings& WithSharingSettings(const SharingSettings& value) { SetSharingSettings(value); return *this;}

    /**
     * <p>Specifies options for sharing SageMaker Studio notebooks.</p>
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


    /**
     * <p>A collection of settings that configure user interaction with the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline const RStudioServerProAppSettings& GetRStudioServerProAppSettings() const{ return m_rStudioServerProAppSettings; }

    /**
     * <p>A collection of settings that configure user interaction with the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline bool RStudioServerProAppSettingsHasBeenSet() const { return m_rStudioServerProAppSettingsHasBeenSet; }

    /**
     * <p>A collection of settings that configure user interaction with the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline void SetRStudioServerProAppSettings(const RStudioServerProAppSettings& value) { m_rStudioServerProAppSettingsHasBeenSet = true; m_rStudioServerProAppSettings = value; }

    /**
     * <p>A collection of settings that configure user interaction with the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline void SetRStudioServerProAppSettings(RStudioServerProAppSettings&& value) { m_rStudioServerProAppSettingsHasBeenSet = true; m_rStudioServerProAppSettings = std::move(value); }

    /**
     * <p>A collection of settings that configure user interaction with the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline UserSettings& WithRStudioServerProAppSettings(const RStudioServerProAppSettings& value) { SetRStudioServerProAppSettings(value); return *this;}

    /**
     * <p>A collection of settings that configure user interaction with the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline UserSettings& WithRStudioServerProAppSettings(RStudioServerProAppSettings&& value) { SetRStudioServerProAppSettings(std::move(value)); return *this;}


    /**
     * <p>A collection of settings that configure the <code>RSessionGateway</code>
     * app.</p>
     */
    inline const RSessionAppSettings& GetRSessionAppSettings() const{ return m_rSessionAppSettings; }

    /**
     * <p>A collection of settings that configure the <code>RSessionGateway</code>
     * app.</p>
     */
    inline bool RSessionAppSettingsHasBeenSet() const { return m_rSessionAppSettingsHasBeenSet; }

    /**
     * <p>A collection of settings that configure the <code>RSessionGateway</code>
     * app.</p>
     */
    inline void SetRSessionAppSettings(const RSessionAppSettings& value) { m_rSessionAppSettingsHasBeenSet = true; m_rSessionAppSettings = value; }

    /**
     * <p>A collection of settings that configure the <code>RSessionGateway</code>
     * app.</p>
     */
    inline void SetRSessionAppSettings(RSessionAppSettings&& value) { m_rSessionAppSettingsHasBeenSet = true; m_rSessionAppSettings = std::move(value); }

    /**
     * <p>A collection of settings that configure the <code>RSessionGateway</code>
     * app.</p>
     */
    inline UserSettings& WithRSessionAppSettings(const RSessionAppSettings& value) { SetRSessionAppSettings(value); return *this;}

    /**
     * <p>A collection of settings that configure the <code>RSessionGateway</code>
     * app.</p>
     */
    inline UserSettings& WithRSessionAppSettings(RSessionAppSettings&& value) { SetRSessionAppSettings(std::move(value)); return *this;}


    /**
     * <p>The Canvas app settings.</p>
     */
    inline const CanvasAppSettings& GetCanvasAppSettings() const{ return m_canvasAppSettings; }

    /**
     * <p>The Canvas app settings.</p>
     */
    inline bool CanvasAppSettingsHasBeenSet() const { return m_canvasAppSettingsHasBeenSet; }

    /**
     * <p>The Canvas app settings.</p>
     */
    inline void SetCanvasAppSettings(const CanvasAppSettings& value) { m_canvasAppSettingsHasBeenSet = true; m_canvasAppSettings = value; }

    /**
     * <p>The Canvas app settings.</p>
     */
    inline void SetCanvasAppSettings(CanvasAppSettings&& value) { m_canvasAppSettingsHasBeenSet = true; m_canvasAppSettings = std::move(value); }

    /**
     * <p>The Canvas app settings.</p>
     */
    inline UserSettings& WithCanvasAppSettings(const CanvasAppSettings& value) { SetCanvasAppSettings(value); return *this;}

    /**
     * <p>The Canvas app settings.</p>
     */
    inline UserSettings& WithCanvasAppSettings(CanvasAppSettings&& value) { SetCanvasAppSettings(std::move(value)); return *this;}

  private:

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    SharingSettings m_sharingSettings;
    bool m_sharingSettingsHasBeenSet = false;

    JupyterServerAppSettings m_jupyterServerAppSettings;
    bool m_jupyterServerAppSettingsHasBeenSet = false;

    KernelGatewayAppSettings m_kernelGatewayAppSettings;
    bool m_kernelGatewayAppSettingsHasBeenSet = false;

    TensorBoardAppSettings m_tensorBoardAppSettings;
    bool m_tensorBoardAppSettingsHasBeenSet = false;

    RStudioServerProAppSettings m_rStudioServerProAppSettings;
    bool m_rStudioServerProAppSettingsHasBeenSet = false;

    RSessionAppSettings m_rSessionAppSettings;
    bool m_rSessionAppSettingsHasBeenSet = false;

    CanvasAppSettings m_canvasAppSettings;
    bool m_canvasAppSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
