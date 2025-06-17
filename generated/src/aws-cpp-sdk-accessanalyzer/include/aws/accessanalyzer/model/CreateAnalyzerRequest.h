/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/Type.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/AnalyzerConfiguration.h>
#include <aws/accessanalyzer/model/InlineArchiveRule.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Creates an analyzer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateAnalyzerRequest">AWS
   * API Reference</a></p>
   */
  class CreateAnalyzerRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API CreateAnalyzerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnalyzer"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the analyzer to create.</p>
     */
    inline const Aws::String& GetAnalyzerName() const { return m_analyzerName; }
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }
    template<typename AnalyzerNameT = Aws::String>
    void SetAnalyzerName(AnalyzerNameT&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::forward<AnalyzerNameT>(value); }
    template<typename AnalyzerNameT = Aws::String>
    CreateAnalyzerRequest& WithAnalyzerName(AnalyzerNameT&& value) { SetAnalyzerName(std::forward<AnalyzerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analyzer to create. You can create only one analyzer per account
     * per Region. You can create up to 5 analyzers per organization per Region.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateAnalyzerRequest& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the archive rules to add for the analyzer. Archive rules
     * automatically archive findings that meet the criteria you define for the
     * rule.</p>
     */
    inline const Aws::Vector<InlineArchiveRule>& GetArchiveRules() const { return m_archiveRules; }
    inline bool ArchiveRulesHasBeenSet() const { return m_archiveRulesHasBeenSet; }
    template<typename ArchiveRulesT = Aws::Vector<InlineArchiveRule>>
    void SetArchiveRules(ArchiveRulesT&& value) { m_archiveRulesHasBeenSet = true; m_archiveRules = std::forward<ArchiveRulesT>(value); }
    template<typename ArchiveRulesT = Aws::Vector<InlineArchiveRule>>
    CreateAnalyzerRequest& WithArchiveRules(ArchiveRulesT&& value) { SetArchiveRules(std::forward<ArchiveRulesT>(value)); return *this;}
    template<typename ArchiveRulesT = InlineArchiveRule>
    CreateAnalyzerRequest& AddArchiveRules(ArchiveRulesT&& value) { m_archiveRulesHasBeenSet = true; m_archiveRules.emplace_back(std::forward<ArchiveRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to the analyzer. You can use the set of
     * Unicode letters, digits, whitespace, <code>_</code>, <code>.</code>,
     * <code>/</code>, <code>=</code>, <code>+</code>, and <code>-</code>.</p> <p>For
     * the tag key, you can specify a value that is 1 to 128 characters in length and
     * cannot be prefixed with <code>aws:</code>.</p> <p>For the tag value, you can
     * specify a value that is 0 to 256 characters in length.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAnalyzerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAnalyzerRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A client token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAnalyzerRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of the analyzer. If the analyzer is an unused
     * access analyzer, the specified scope of unused access is used for the
     * configuration. If the analyzer is an internal access analyzer, the specified
     * internal access analysis rules are used for the configuration.</p>
     */
    inline const AnalyzerConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = AnalyzerConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = AnalyzerConfiguration>
    CreateAnalyzerRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;

    Type m_type{Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<InlineArchiveRule> m_archiveRules;
    bool m_archiveRulesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    AnalyzerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
