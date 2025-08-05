/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ProjectCodeSecurityScanConfiguration.h>
#include <aws/inspector2/model/CodeRepositoryOnDemandScan.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains metadata information about a code repository that is being scanned
   * by Amazon Inspector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeRepositoryMetadata">AWS
   * API Reference</a></p>
   */
  class CodeRepositoryMetadata
  {
  public:
    AWS_INSPECTOR2_API CodeRepositoryMetadata() = default;
    AWS_INSPECTOR2_API CodeRepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeRepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the project in the code repository.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CodeRepositoryMetadata& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the code security integration associated
     * with the repository.</p>
     */
    inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
    template<typename IntegrationArnT = Aws::String>
    void SetIntegrationArn(IntegrationArnT&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::forward<IntegrationArnT>(value); }
    template<typename IntegrationArnT = Aws::String>
    CodeRepositoryMetadata& WithIntegrationArn(IntegrationArnT&& value) { SetIntegrationArn(std::forward<IntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of repository provider (such as GitHub, GitLab, etc.).</p>
     */
    inline const Aws::String& GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    template<typename ProviderTypeT = Aws::String>
    void SetProviderType(ProviderTypeT&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::forward<ProviderTypeT>(value); }
    template<typename ProviderTypeT = Aws::String>
    CodeRepositoryMetadata& WithProviderType(ProviderTypeT&& value) { SetProviderType(std::forward<ProviderTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility setting of the repository (public or private).</p>
     */
    inline const Aws::String& GetProviderTypeVisibility() const { return m_providerTypeVisibility; }
    inline bool ProviderTypeVisibilityHasBeenSet() const { return m_providerTypeVisibilityHasBeenSet; }
    template<typename ProviderTypeVisibilityT = Aws::String>
    void SetProviderTypeVisibility(ProviderTypeVisibilityT&& value) { m_providerTypeVisibilityHasBeenSet = true; m_providerTypeVisibility = std::forward<ProviderTypeVisibilityT>(value); }
    template<typename ProviderTypeVisibilityT = Aws::String>
    CodeRepositoryMetadata& WithProviderTypeVisibility(ProviderTypeVisibilityT&& value) { SetProviderTypeVisibility(std::forward<ProviderTypeVisibilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last commit that was scanned in the repository.</p>
     */
    inline const Aws::String& GetLastScannedCommitId() const { return m_lastScannedCommitId; }
    inline bool LastScannedCommitIdHasBeenSet() const { return m_lastScannedCommitIdHasBeenSet; }
    template<typename LastScannedCommitIdT = Aws::String>
    void SetLastScannedCommitId(LastScannedCommitIdT&& value) { m_lastScannedCommitIdHasBeenSet = true; m_lastScannedCommitId = std::forward<LastScannedCommitIdT>(value); }
    template<typename LastScannedCommitIdT = Aws::String>
    CodeRepositoryMetadata& WithLastScannedCommitId(LastScannedCommitIdT&& value) { SetLastScannedCommitId(std::forward<LastScannedCommitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scan configuration settings applied to the code repository.</p>
     */
    inline const ProjectCodeSecurityScanConfiguration& GetScanConfiguration() const { return m_scanConfiguration; }
    inline bool ScanConfigurationHasBeenSet() const { return m_scanConfigurationHasBeenSet; }
    template<typename ScanConfigurationT = ProjectCodeSecurityScanConfiguration>
    void SetScanConfiguration(ScanConfigurationT&& value) { m_scanConfigurationHasBeenSet = true; m_scanConfiguration = std::forward<ScanConfigurationT>(value); }
    template<typename ScanConfigurationT = ProjectCodeSecurityScanConfiguration>
    CodeRepositoryMetadata& WithScanConfiguration(ScanConfigurationT&& value) { SetScanConfiguration(std::forward<ScanConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about on-demand scans performed on the repository.</p>
     */
    inline const CodeRepositoryOnDemandScan& GetOnDemandScan() const { return m_onDemandScan; }
    inline bool OnDemandScanHasBeenSet() const { return m_onDemandScanHasBeenSet; }
    template<typename OnDemandScanT = CodeRepositoryOnDemandScan>
    void SetOnDemandScan(OnDemandScanT&& value) { m_onDemandScanHasBeenSet = true; m_onDemandScan = std::forward<OnDemandScanT>(value); }
    template<typename OnDemandScanT = CodeRepositoryOnDemandScan>
    CodeRepositoryMetadata& WithOnDemandScan(OnDemandScanT&& value) { SetOnDemandScan(std::forward<OnDemandScanT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;

    Aws::String m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_providerTypeVisibility;
    bool m_providerTypeVisibilityHasBeenSet = false;

    Aws::String m_lastScannedCommitId;
    bool m_lastScannedCommitIdHasBeenSet = false;

    ProjectCodeSecurityScanConfiguration m_scanConfiguration;
    bool m_scanConfigurationHasBeenSet = false;

    CodeRepositoryOnDemandScan m_onDemandScan;
    bool m_onDemandScanHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
