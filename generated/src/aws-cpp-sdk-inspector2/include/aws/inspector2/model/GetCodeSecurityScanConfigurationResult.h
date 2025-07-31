/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeSecurityScanConfiguration.h>
#include <aws/inspector2/model/ConfigurationLevel.h>
#include <aws/inspector2/model/ScopeSettings.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{
  class GetCodeSecurityScanConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API GetCodeSecurityScanConfigurationResult() = default;
    AWS_INSPECTOR2_API GetCodeSecurityScanConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetCodeSecurityScanConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scan configuration.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const { return m_scanConfigurationArn; }
    template<typename ScanConfigurationArnT = Aws::String>
    void SetScanConfigurationArn(ScanConfigurationArnT&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::forward<ScanConfigurationArnT>(value); }
    template<typename ScanConfigurationArnT = Aws::String>
    GetCodeSecurityScanConfigurationResult& WithScanConfigurationArn(ScanConfigurationArnT&& value) { SetScanConfigurationArn(std::forward<ScanConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scan configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetCodeSecurityScanConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the code security scan.</p>
     */
    inline const CodeSecurityScanConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = CodeSecurityScanConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = CodeSecurityScanConfiguration>
    GetCodeSecurityScanConfigurationResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security level for the scan configuration.</p>
     */
    inline ConfigurationLevel GetLevel() const { return m_level; }
    inline void SetLevel(ConfigurationLevel value) { m_levelHasBeenSet = true; m_level = value; }
    inline GetCodeSecurityScanConfigurationResult& WithLevel(ConfigurationLevel value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope settings that define which repositories will be scanned. If the
     * <code>ScopeSetting</code> parameter is <code>ALL</code> the scan configuration
     * applies to all existing and future projects imported into Amazon Inspector.</p>
     */
    inline const ScopeSettings& GetScopeSettings() const { return m_scopeSettings; }
    template<typename ScopeSettingsT = ScopeSettings>
    void SetScopeSettings(ScopeSettingsT&& value) { m_scopeSettingsHasBeenSet = true; m_scopeSettings = std::forward<ScopeSettingsT>(value); }
    template<typename ScopeSettingsT = ScopeSettings>
    GetCodeSecurityScanConfigurationResult& WithScopeSettings(ScopeSettingsT&& value) { SetScopeSettings(std::forward<ScopeSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the scan configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetCodeSecurityScanConfigurationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the scan configuration was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetCodeSecurityScanConfigurationResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the scan configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetCodeSecurityScanConfigurationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetCodeSecurityScanConfigurationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCodeSecurityScanConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CodeSecurityScanConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    ConfigurationLevel m_level{ConfigurationLevel::NOT_SET};
    bool m_levelHasBeenSet = false;

    ScopeSettings m_scopeSettings;
    bool m_scopeSettingsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
