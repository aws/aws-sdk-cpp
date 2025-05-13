/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RequestLaunchTemplateData.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateLaunchTemplateVersionRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateLaunchTemplateVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunchTemplateVersion"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateLaunchTemplateVersionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure the idempotency of
     * the request. If a client token isn't specified, a randomly generated token is
     * used in the request to ensure idempotency.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p> <p>Constraint: Maximum 128 ASCII characters.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateLaunchTemplateVersionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the launch template.</p> <p>You must specify either the launch
     * template ID or the launch template name, but not both.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const { return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    template<typename LaunchTemplateIdT = Aws::String>
    void SetLaunchTemplateId(LaunchTemplateIdT&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::forward<LaunchTemplateIdT>(value); }
    template<typename LaunchTemplateIdT = Aws::String>
    CreateLaunchTemplateVersionRequest& WithLaunchTemplateId(LaunchTemplateIdT&& value) { SetLaunchTemplateId(std::forward<LaunchTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template.</p> <p>You must specify either the launch
     * template ID or the launch template name, but not both.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const { return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    template<typename LaunchTemplateNameT = Aws::String>
    void SetLaunchTemplateName(LaunchTemplateNameT&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::forward<LaunchTemplateNameT>(value); }
    template<typename LaunchTemplateNameT = Aws::String>
    CreateLaunchTemplateVersionRequest& WithLaunchTemplateName(LaunchTemplateNameT&& value) { SetLaunchTemplateName(std::forward<LaunchTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the launch template on which to base the new version.
     * Snapshots applied to the block device mapping are ignored when creating a new
     * version unless they are explicitly included.</p> <p>If you specify this
     * parameter, the new version inherits the launch parameters from the source
     * version. If you specify additional launch parameters for the new version, they
     * overwrite any corresponding launch parameters inherited from the source
     * version.</p> <p>If you omit this parameter, the new version contains only the
     * launch parameters that you specify for the new version.</p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    CreateLaunchTemplateVersionRequest& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the version of the launch template.</p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    CreateLaunchTemplateVersionRequest& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information for the launch template.</p>
     */
    inline const RequestLaunchTemplateData& GetLaunchTemplateData() const { return m_launchTemplateData; }
    inline bool LaunchTemplateDataHasBeenSet() const { return m_launchTemplateDataHasBeenSet; }
    template<typename LaunchTemplateDataT = RequestLaunchTemplateData>
    void SetLaunchTemplateData(LaunchTemplateDataT&& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = std::forward<LaunchTemplateDataT>(value); }
    template<typename LaunchTemplateDataT = RequestLaunchTemplateData>
    CreateLaunchTemplateVersionRequest& WithLaunchTemplateData(LaunchTemplateDataT&& value) { SetLaunchTemplateData(std::forward<LaunchTemplateDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, and if a Systems Manager parameter is specified for
     * <code>ImageId</code>, the AMI ID is displayed in the response for
     * <code>imageID</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/create-launch-template.html#use-an-ssm-parameter-instead-of-an-ami-id">Use
     * a Systems Manager parameter instead of an AMI ID</a> in the <i>Amazon EC2 User
     * Guide</i>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetResolveAlias() const { return m_resolveAlias; }
    inline bool ResolveAliasHasBeenSet() const { return m_resolveAliasHasBeenSet; }
    inline void SetResolveAlias(bool value) { m_resolveAliasHasBeenSet = true; m_resolveAlias = value; }
    inline CreateLaunchTemplateVersionRequest& WithResolveAlias(bool value) { SetResolveAlias(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    RequestLaunchTemplateData m_launchTemplateData;
    bool m_launchTemplateDataHasBeenSet = false;

    bool m_resolveAlias{false};
    bool m_resolveAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
