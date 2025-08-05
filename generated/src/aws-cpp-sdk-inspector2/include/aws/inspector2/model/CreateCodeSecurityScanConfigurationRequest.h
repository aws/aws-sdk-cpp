/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/ConfigurationLevel.h>
#include <aws/inspector2/model/CodeSecurityScanConfiguration.h>
#include <aws/inspector2/model/ScopeSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class CreateCodeSecurityScanConfigurationRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API CreateCodeSecurityScanConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCodeSecurityScanConfiguration"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the scan configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateCodeSecurityScanConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security level for the scan configuration.</p>
     */
    inline ConfigurationLevel GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(ConfigurationLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline CreateCodeSecurityScanConfigurationRequest& WithLevel(ConfigurationLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the code security scan.</p>
     */
    inline const CodeSecurityScanConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = CodeSecurityScanConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = CodeSecurityScanConfiguration>
    CreateCodeSecurityScanConfigurationRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope settings that define which repositories will be scanned. Include
     * this parameter to create a default scan configuration. Otherwise Amazon
     * Inspector creates a general scan configuration. </p> <p>A default scan
     * configuration automatically applies to all existing and future projects imported
     * into Amazon Inspector. Use the
     * <code>BatchAssociateCodeSecurityScanConfiguration</code> operation to associate
     * a general scan configuration with projects.</p>
     */
    inline const ScopeSettings& GetScopeSettings() const { return m_scopeSettings; }
    inline bool ScopeSettingsHasBeenSet() const { return m_scopeSettingsHasBeenSet; }
    template<typename ScopeSettingsT = ScopeSettings>
    void SetScopeSettings(ScopeSettingsT&& value) { m_scopeSettingsHasBeenSet = true; m_scopeSettings = std::forward<ScopeSettingsT>(value); }
    template<typename ScopeSettingsT = ScopeSettings>
    CreateCodeSecurityScanConfigurationRequest& WithScopeSettings(ScopeSettingsT&& value) { SetScopeSettings(std::forward<ScopeSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the scan configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCodeSecurityScanConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCodeSecurityScanConfigurationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConfigurationLevel m_level{ConfigurationLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    CodeSecurityScanConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ScopeSettings m_scopeSettings;
    bool m_scopeSettingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
