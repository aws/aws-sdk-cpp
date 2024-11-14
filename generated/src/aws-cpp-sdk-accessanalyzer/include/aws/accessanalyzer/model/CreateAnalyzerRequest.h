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
    AWS_ACCESSANALYZER_API CreateAnalyzerRequest();

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
    inline const Aws::String& GetAnalyzerName() const{ return m_analyzerName; }
    inline bool AnalyzerNameHasBeenSet() const { return m_analyzerNameHasBeenSet; }
    inline void SetAnalyzerName(const Aws::String& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = value; }
    inline void SetAnalyzerName(Aws::String&& value) { m_analyzerNameHasBeenSet = true; m_analyzerName = std::move(value); }
    inline void SetAnalyzerName(const char* value) { m_analyzerNameHasBeenSet = true; m_analyzerName.assign(value); }
    inline CreateAnalyzerRequest& WithAnalyzerName(const Aws::String& value) { SetAnalyzerName(value); return *this;}
    inline CreateAnalyzerRequest& WithAnalyzerName(Aws::String&& value) { SetAnalyzerName(std::move(value)); return *this;}
    inline CreateAnalyzerRequest& WithAnalyzerName(const char* value) { SetAnalyzerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of analyzer to create. Only <code>ACCOUNT</code>,
     * <code>ORGANIZATION</code>, <code>ACCOUNT_UNUSED_ACCESS</code>, and
     * <code>ORGANIZATION_UNUSED_ACCESS</code> analyzers are supported. You can create
     * only one analyzer per account per Region. You can create up to 5 analyzers per
     * organization per Region.</p>
     */
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateAnalyzerRequest& WithType(const Type& value) { SetType(value); return *this;}
    inline CreateAnalyzerRequest& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the archive rules to add for the analyzer. Archive rules
     * automatically archive findings that meet the criteria you define for the
     * rule.</p>
     */
    inline const Aws::Vector<InlineArchiveRule>& GetArchiveRules() const{ return m_archiveRules; }
    inline bool ArchiveRulesHasBeenSet() const { return m_archiveRulesHasBeenSet; }
    inline void SetArchiveRules(const Aws::Vector<InlineArchiveRule>& value) { m_archiveRulesHasBeenSet = true; m_archiveRules = value; }
    inline void SetArchiveRules(Aws::Vector<InlineArchiveRule>&& value) { m_archiveRulesHasBeenSet = true; m_archiveRules = std::move(value); }
    inline CreateAnalyzerRequest& WithArchiveRules(const Aws::Vector<InlineArchiveRule>& value) { SetArchiveRules(value); return *this;}
    inline CreateAnalyzerRequest& WithArchiveRules(Aws::Vector<InlineArchiveRule>&& value) { SetArchiveRules(std::move(value)); return *this;}
    inline CreateAnalyzerRequest& AddArchiveRules(const InlineArchiveRule& value) { m_archiveRulesHasBeenSet = true; m_archiveRules.push_back(value); return *this; }
    inline CreateAnalyzerRequest& AddArchiveRules(InlineArchiveRule&& value) { m_archiveRulesHasBeenSet = true; m_archiveRules.push_back(std::move(value)); return *this; }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAnalyzerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAnalyzerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAnalyzerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAnalyzerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAnalyzerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAnalyzerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAnalyzerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAnalyzerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAnalyzerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A client token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateAnalyzerRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAnalyzerRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAnalyzerRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of the analyzer. If the analyzer is an unused
     * access analyzer, the specified scope of unused access is used for the
     * configuration.</p>
     */
    inline const AnalyzerConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const AnalyzerConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(AnalyzerConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateAnalyzerRequest& WithConfiguration(const AnalyzerConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateAnalyzerRequest& WithConfiguration(AnalyzerConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_analyzerName;
    bool m_analyzerNameHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<InlineArchiveRule> m_archiveRules;
    bool m_archiveRulesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    AnalyzerConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
