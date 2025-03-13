/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/CertificateSettings.h>
#include <aws/amplify/model/SubDomainSetting.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> The request structure for the update domain association request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateDomainAssociationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDomainAssociationRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API UpdateDomainAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainAssociation"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    UpdateDomainAssociationRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateDomainAssociationRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline bool GetEnableAutoSubDomain() const { return m_enableAutoSubDomain; }
    inline bool EnableAutoSubDomainHasBeenSet() const { return m_enableAutoSubDomainHasBeenSet; }
    inline void SetEnableAutoSubDomain(bool value) { m_enableAutoSubDomainHasBeenSet = true; m_enableAutoSubDomain = value; }
    inline UpdateDomainAssociationRequest& WithEnableAutoSubDomain(bool value) { SetEnableAutoSubDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline const Aws::Vector<SubDomainSetting>& GetSubDomainSettings() const { return m_subDomainSettings; }
    inline bool SubDomainSettingsHasBeenSet() const { return m_subDomainSettingsHasBeenSet; }
    template<typename SubDomainSettingsT = Aws::Vector<SubDomainSetting>>
    void SetSubDomainSettings(SubDomainSettingsT&& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings = std::forward<SubDomainSettingsT>(value); }
    template<typename SubDomainSettingsT = Aws::Vector<SubDomainSetting>>
    UpdateDomainAssociationRequest& WithSubDomainSettings(SubDomainSettingsT&& value) { SetSubDomainSettings(std::forward<SubDomainSettingsT>(value)); return *this;}
    template<typename SubDomainSettingsT = SubDomainSetting>
    UpdateDomainAssociationRequest& AddSubDomainSettings(SubDomainSettingsT&& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings.emplace_back(std::forward<SubDomainSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoSubDomainCreationPatterns() const { return m_autoSubDomainCreationPatterns; }
    inline bool AutoSubDomainCreationPatternsHasBeenSet() const { return m_autoSubDomainCreationPatternsHasBeenSet; }
    template<typename AutoSubDomainCreationPatternsT = Aws::Vector<Aws::String>>
    void SetAutoSubDomainCreationPatterns(AutoSubDomainCreationPatternsT&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns = std::forward<AutoSubDomainCreationPatternsT>(value); }
    template<typename AutoSubDomainCreationPatternsT = Aws::Vector<Aws::String>>
    UpdateDomainAssociationRequest& WithAutoSubDomainCreationPatterns(AutoSubDomainCreationPatternsT&& value) { SetAutoSubDomainCreationPatterns(std::forward<AutoSubDomainCreationPatternsT>(value)); return *this;}
    template<typename AutoSubDomainCreationPatternsT = Aws::String>
    UpdateDomainAssociationRequest& AddAutoSubDomainCreationPatterns(AutoSubDomainCreationPatternsT&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.emplace_back(std::forward<AutoSubDomainCreationPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline const Aws::String& GetAutoSubDomainIAMRole() const { return m_autoSubDomainIAMRole; }
    inline bool AutoSubDomainIAMRoleHasBeenSet() const { return m_autoSubDomainIAMRoleHasBeenSet; }
    template<typename AutoSubDomainIAMRoleT = Aws::String>
    void SetAutoSubDomainIAMRole(AutoSubDomainIAMRoleT&& value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole = std::forward<AutoSubDomainIAMRoleT>(value); }
    template<typename AutoSubDomainIAMRoleT = Aws::String>
    UpdateDomainAssociationRequest& WithAutoSubDomainIAMRole(AutoSubDomainIAMRoleT&& value) { SetAutoSubDomainIAMRole(std::forward<AutoSubDomainIAMRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of SSL/TLS certificate to use for your custom domain.</p>
     */
    inline const CertificateSettings& GetCertificateSettings() const { return m_certificateSettings; }
    inline bool CertificateSettingsHasBeenSet() const { return m_certificateSettingsHasBeenSet; }
    template<typename CertificateSettingsT = CertificateSettings>
    void SetCertificateSettings(CertificateSettingsT&& value) { m_certificateSettingsHasBeenSet = true; m_certificateSettings = std::forward<CertificateSettingsT>(value); }
    template<typename CertificateSettingsT = CertificateSettings>
    UpdateDomainAssociationRequest& WithCertificateSettings(CertificateSettingsT&& value) { SetCertificateSettings(std::forward<CertificateSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_enableAutoSubDomain{false};
    bool m_enableAutoSubDomainHasBeenSet = false;

    Aws::Vector<SubDomainSetting> m_subDomainSettings;
    bool m_subDomainSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoSubDomainCreationPatterns;
    bool m_autoSubDomainCreationPatternsHasBeenSet = false;

    Aws::String m_autoSubDomainIAMRole;
    bool m_autoSubDomainIAMRoleHasBeenSet = false;

    CertificateSettings m_certificateSettings;
    bool m_certificateSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
