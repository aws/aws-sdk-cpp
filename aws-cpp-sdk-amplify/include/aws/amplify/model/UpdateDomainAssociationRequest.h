/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_AMPLIFY_API UpdateDomainAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainAssociation"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline UpdateDomainAssociationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline UpdateDomainAssociationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline UpdateDomainAssociationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> The name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> The name of the domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> The name of the domain. </p>
     */
    inline UpdateDomainAssociationRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> The name of the domain. </p>
     */
    inline UpdateDomainAssociationRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> The name of the domain. </p>
     */
    inline UpdateDomainAssociationRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline bool GetEnableAutoSubDomain() const{ return m_enableAutoSubDomain; }

    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline bool EnableAutoSubDomainHasBeenSet() const { return m_enableAutoSubDomainHasBeenSet; }

    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline void SetEnableAutoSubDomain(bool value) { m_enableAutoSubDomainHasBeenSet = true; m_enableAutoSubDomain = value; }

    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline UpdateDomainAssociationRequest& WithEnableAutoSubDomain(bool value) { SetEnableAutoSubDomain(value); return *this;}


    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline const Aws::Vector<SubDomainSetting>& GetSubDomainSettings() const{ return m_subDomainSettings; }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline bool SubDomainSettingsHasBeenSet() const { return m_subDomainSettingsHasBeenSet; }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline void SetSubDomainSettings(const Aws::Vector<SubDomainSetting>& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings = value; }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline void SetSubDomainSettings(Aws::Vector<SubDomainSetting>&& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings = std::move(value); }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline UpdateDomainAssociationRequest& WithSubDomainSettings(const Aws::Vector<SubDomainSetting>& value) { SetSubDomainSettings(value); return *this;}

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline UpdateDomainAssociationRequest& WithSubDomainSettings(Aws::Vector<SubDomainSetting>&& value) { SetSubDomainSettings(std::move(value)); return *this;}

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline UpdateDomainAssociationRequest& AddSubDomainSettings(const SubDomainSetting& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings.push_back(value); return *this; }

    /**
     * <p> Describes the settings for the subdomain. </p>
     */
    inline UpdateDomainAssociationRequest& AddSubDomainSettings(SubDomainSetting&& value) { m_subDomainSettingsHasBeenSet = true; m_subDomainSettings.push_back(std::move(value)); return *this; }


    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoSubDomainCreationPatterns() const{ return m_autoSubDomainCreationPatterns; }

    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline bool AutoSubDomainCreationPatternsHasBeenSet() const { return m_autoSubDomainCreationPatternsHasBeenSet; }

    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline void SetAutoSubDomainCreationPatterns(const Aws::Vector<Aws::String>& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns = value; }

    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline void SetAutoSubDomainCreationPatterns(Aws::Vector<Aws::String>&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns = std::move(value); }

    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline UpdateDomainAssociationRequest& WithAutoSubDomainCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoSubDomainCreationPatterns(value); return *this;}

    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline UpdateDomainAssociationRequest& WithAutoSubDomainCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoSubDomainCreationPatterns(std::move(value)); return *this;}

    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline UpdateDomainAssociationRequest& AddAutoSubDomainCreationPatterns(const Aws::String& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(value); return *this; }

    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline UpdateDomainAssociationRequest& AddAutoSubDomainCreationPatterns(Aws::String&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p> Sets the branch patterns for automatic subdomain creation. </p>
     */
    inline UpdateDomainAssociationRequest& AddAutoSubDomainCreationPatterns(const char* value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(value); return *this; }


    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline const Aws::String& GetAutoSubDomainIAMRole() const{ return m_autoSubDomainIAMRole; }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline bool AutoSubDomainIAMRoleHasBeenSet() const { return m_autoSubDomainIAMRoleHasBeenSet; }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline void SetAutoSubDomainIAMRole(const Aws::String& value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole = value; }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline void SetAutoSubDomainIAMRole(Aws::String&& value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole = std::move(value); }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline void SetAutoSubDomainIAMRole(const char* value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole.assign(value); }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline UpdateDomainAssociationRequest& WithAutoSubDomainIAMRole(const Aws::String& value) { SetAutoSubDomainIAMRole(value); return *this;}

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline UpdateDomainAssociationRequest& WithAutoSubDomainIAMRole(Aws::String&& value) { SetAutoSubDomainIAMRole(std::move(value)); return *this;}

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline UpdateDomainAssociationRequest& WithAutoSubDomainIAMRole(const char* value) { SetAutoSubDomainIAMRole(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_enableAutoSubDomain;
    bool m_enableAutoSubDomainHasBeenSet = false;

    Aws::Vector<SubDomainSetting> m_subDomainSettings;
    bool m_subDomainSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoSubDomainCreationPatterns;
    bool m_autoSubDomainCreationPatternsHasBeenSet = false;

    Aws::String m_autoSubDomainIAMRole;
    bool m_autoSubDomainIAMRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
