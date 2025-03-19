/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/SalesforceKnowledgeArticleConfiguration.h>
#include <aws/kendra/model/SalesforceChatterFeedConfiguration.h>
#include <aws/kendra/model/SalesforceStandardObjectAttachmentConfiguration.h>
#include <aws/kendra/model/SalesforceStandardObjectConfiguration.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to Salesforce as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SalesforceConfiguration">AWS
   * API Reference</a></p>
   */
  class SalesforceConfiguration
  {
  public:
    AWS_KENDRA_API SalesforceConfiguration() = default;
    AWS_KENDRA_API SalesforceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SalesforceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline const Aws::String& GetServerUrl() const { return m_serverUrl; }
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }
    template<typename ServerUrlT = Aws::String>
    void SetServerUrl(ServerUrlT&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::forward<ServerUrlT>(value); }
    template<typename ServerUrlT = Aws::String>
    SalesforceConfiguration& WithServerUrl(ServerUrlT&& value) { SetServerUrl(std::forward<ServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Managersecret that contains the
     * key/value pairs required to connect to your Salesforce instance. The secret must
     * contain a JSON structure with the following keys:</p> <ul> <li>
     * <p>authenticationUrl - The OAUTH endpoint that Amazon Kendra connects to get an
     * OAUTH token. </p> </li> <li> <p>consumerKey - The application public key
     * generated when you created your Salesforce application.</p> </li> <li>
     * <p>consumerSecret - The application private key generated when you created your
     * Salesforce application.</p> </li> <li> <p>password - The password associated
     * with the user logging in to the Salesforce instance.</p> </li> <li>
     * <p>securityToken - The token associated with the user logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    SalesforceConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline const Aws::Vector<SalesforceStandardObjectConfiguration>& GetStandardObjectConfigurations() const { return m_standardObjectConfigurations; }
    inline bool StandardObjectConfigurationsHasBeenSet() const { return m_standardObjectConfigurationsHasBeenSet; }
    template<typename StandardObjectConfigurationsT = Aws::Vector<SalesforceStandardObjectConfiguration>>
    void SetStandardObjectConfigurations(StandardObjectConfigurationsT&& value) { m_standardObjectConfigurationsHasBeenSet = true; m_standardObjectConfigurations = std::forward<StandardObjectConfigurationsT>(value); }
    template<typename StandardObjectConfigurationsT = Aws::Vector<SalesforceStandardObjectConfiguration>>
    SalesforceConfiguration& WithStandardObjectConfigurations(StandardObjectConfigurationsT&& value) { SetStandardObjectConfigurations(std::forward<StandardObjectConfigurationsT>(value)); return *this;}
    template<typename StandardObjectConfigurationsT = SalesforceStandardObjectConfiguration>
    SalesforceConfiguration& AddStandardObjectConfigurations(StandardObjectConfigurationsT&& value) { m_standardObjectConfigurationsHasBeenSet = true; m_standardObjectConfigurations.emplace_back(std::forward<StandardObjectConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for the knowledge article types that Amazon Kendra
     * indexes. Amazon Kendra indexes standard knowledge articles and the standard
     * fields of knowledge articles, or the custom fields of custom knowledge articles,
     * but not both.</p>
     */
    inline const SalesforceKnowledgeArticleConfiguration& GetKnowledgeArticleConfiguration() const { return m_knowledgeArticleConfiguration; }
    inline bool KnowledgeArticleConfigurationHasBeenSet() const { return m_knowledgeArticleConfigurationHasBeenSet; }
    template<typename KnowledgeArticleConfigurationT = SalesforceKnowledgeArticleConfiguration>
    void SetKnowledgeArticleConfiguration(KnowledgeArticleConfigurationT&& value) { m_knowledgeArticleConfigurationHasBeenSet = true; m_knowledgeArticleConfiguration = std::forward<KnowledgeArticleConfigurationT>(value); }
    template<typename KnowledgeArticleConfigurationT = SalesforceKnowledgeArticleConfiguration>
    SalesforceConfiguration& WithKnowledgeArticleConfiguration(KnowledgeArticleConfigurationT&& value) { SetKnowledgeArticleConfiguration(std::forward<KnowledgeArticleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for Salesforce chatter feeds.</p>
     */
    inline const SalesforceChatterFeedConfiguration& GetChatterFeedConfiguration() const { return m_chatterFeedConfiguration; }
    inline bool ChatterFeedConfigurationHasBeenSet() const { return m_chatterFeedConfigurationHasBeenSet; }
    template<typename ChatterFeedConfigurationT = SalesforceChatterFeedConfiguration>
    void SetChatterFeedConfiguration(ChatterFeedConfigurationT&& value) { m_chatterFeedConfigurationHasBeenSet = true; m_chatterFeedConfiguration = std::forward<ChatterFeedConfigurationT>(value); }
    template<typename ChatterFeedConfigurationT = SalesforceChatterFeedConfiguration>
    SalesforceConfiguration& WithChatterFeedConfiguration(ChatterFeedConfigurationT&& value) { SetChatterFeedConfiguration(std::forward<ChatterFeedConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon Kendra should index attachments to Salesforce
     * objects.</p>
     */
    inline bool GetCrawlAttachments() const { return m_crawlAttachments; }
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }
    inline SalesforceConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for processing attachments to Salesforce standard
     * objects. </p>
     */
    inline const SalesforceStandardObjectAttachmentConfiguration& GetStandardObjectAttachmentConfiguration() const { return m_standardObjectAttachmentConfiguration; }
    inline bool StandardObjectAttachmentConfigurationHasBeenSet() const { return m_standardObjectAttachmentConfigurationHasBeenSet; }
    template<typename StandardObjectAttachmentConfigurationT = SalesforceStandardObjectAttachmentConfiguration>
    void SetStandardObjectAttachmentConfiguration(StandardObjectAttachmentConfigurationT&& value) { m_standardObjectAttachmentConfigurationHasBeenSet = true; m_standardObjectAttachmentConfiguration = std::forward<StandardObjectAttachmentConfigurationT>(value); }
    template<typename StandardObjectAttachmentConfigurationT = SalesforceStandardObjectAttachmentConfiguration>
    SalesforceConfiguration& WithStandardObjectAttachmentConfiguration(StandardObjectAttachmentConfigurationT&& value) { SetStandardObjectAttachmentConfiguration(std::forward<StandardObjectAttachmentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeAttachmentFilePatterns() const { return m_includeAttachmentFilePatterns; }
    inline bool IncludeAttachmentFilePatternsHasBeenSet() const { return m_includeAttachmentFilePatternsHasBeenSet; }
    template<typename IncludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    void SetIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns = std::forward<IncludeAttachmentFilePatternsT>(value); }
    template<typename IncludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    SalesforceConfiguration& WithIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { SetIncludeAttachmentFilePatterns(std::forward<IncludeAttachmentFilePatternsT>(value)); return *this;}
    template<typename IncludeAttachmentFilePatternsT = Aws::String>
    SalesforceConfiguration& AddIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.emplace_back(std::forward<IncludeAttachmentFilePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAttachmentFilePatterns() const { return m_excludeAttachmentFilePatterns; }
    inline bool ExcludeAttachmentFilePatternsHasBeenSet() const { return m_excludeAttachmentFilePatternsHasBeenSet; }
    template<typename ExcludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    void SetExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns = std::forward<ExcludeAttachmentFilePatternsT>(value); }
    template<typename ExcludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    SalesforceConfiguration& WithExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { SetExcludeAttachmentFilePatterns(std::forward<ExcludeAttachmentFilePatternsT>(value)); return *this;}
    template<typename ExcludeAttachmentFilePatternsT = Aws::String>
    SalesforceConfiguration& AddExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.emplace_back(std::forward<ExcludeAttachmentFilePatternsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::Vector<SalesforceStandardObjectConfiguration> m_standardObjectConfigurations;
    bool m_standardObjectConfigurationsHasBeenSet = false;

    SalesforceKnowledgeArticleConfiguration m_knowledgeArticleConfiguration;
    bool m_knowledgeArticleConfigurationHasBeenSet = false;

    SalesforceChatterFeedConfiguration m_chatterFeedConfiguration;
    bool m_chatterFeedConfigurationHasBeenSet = false;

    bool m_crawlAttachments{false};
    bool m_crawlAttachmentsHasBeenSet = false;

    SalesforceStandardObjectAttachmentConfiguration m_standardObjectAttachmentConfiguration;
    bool m_standardObjectAttachmentConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeAttachmentFilePatterns;
    bool m_includeAttachmentFilePatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeAttachmentFilePatterns;
    bool m_excludeAttachmentFilePatternsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
