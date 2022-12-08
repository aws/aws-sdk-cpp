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
    AWS_KENDRA_API SalesforceConfiguration();
    AWS_KENDRA_API SalesforceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SalesforceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }

    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }

    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline void SetServerUrl(const Aws::String& value) { m_serverUrlHasBeenSet = true; m_serverUrl = value; }

    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline void SetServerUrl(Aws::String&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::move(value); }

    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline void SetServerUrl(const char* value) { m_serverUrlHasBeenSet = true; m_serverUrl.assign(value); }

    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline SalesforceConfiguration& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}

    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline SalesforceConfiguration& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}

    /**
     * <p>The instance URL for the Salesforce site that you want to index.</p>
     */
    inline SalesforceConfiguration& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}


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
     * <p>securityToken - The token associated with the user account logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

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
     * <p>securityToken - The token associated with the user account logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

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
     * <p>securityToken - The token associated with the user account logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

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
     * <p>securityToken - The token associated with the user account logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

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
     * <p>securityToken - The token associated with the user account logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

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
     * <p>securityToken - The token associated with the user account logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline SalesforceConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

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
     * <p>securityToken - The token associated with the user account logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline SalesforceConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

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
     * <p>securityToken - The token associated with the user account logging in to the
     * Salesforce instance.</p> </li> <li> <p>username - The user name of the user
     * logging in to the Salesforce instance.</p> </li> </ul>
     */
    inline SalesforceConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline const Aws::Vector<SalesforceStandardObjectConfiguration>& GetStandardObjectConfigurations() const{ return m_standardObjectConfigurations; }

    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline bool StandardObjectConfigurationsHasBeenSet() const { return m_standardObjectConfigurationsHasBeenSet; }

    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline void SetStandardObjectConfigurations(const Aws::Vector<SalesforceStandardObjectConfiguration>& value) { m_standardObjectConfigurationsHasBeenSet = true; m_standardObjectConfigurations = value; }

    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline void SetStandardObjectConfigurations(Aws::Vector<SalesforceStandardObjectConfiguration>&& value) { m_standardObjectConfigurationsHasBeenSet = true; m_standardObjectConfigurations = std::move(value); }

    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline SalesforceConfiguration& WithStandardObjectConfigurations(const Aws::Vector<SalesforceStandardObjectConfiguration>& value) { SetStandardObjectConfigurations(value); return *this;}

    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline SalesforceConfiguration& WithStandardObjectConfigurations(Aws::Vector<SalesforceStandardObjectConfiguration>&& value) { SetStandardObjectConfigurations(std::move(value)); return *this;}

    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline SalesforceConfiguration& AddStandardObjectConfigurations(const SalesforceStandardObjectConfiguration& value) { m_standardObjectConfigurationsHasBeenSet = true; m_standardObjectConfigurations.push_back(value); return *this; }

    /**
     * <p>Configuration of the Salesforce standard objects that Amazon Kendra
     * indexes.</p>
     */
    inline SalesforceConfiguration& AddStandardObjectConfigurations(SalesforceStandardObjectConfiguration&& value) { m_standardObjectConfigurationsHasBeenSet = true; m_standardObjectConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration information for the knowledge article types that Amazon Kendra
     * indexes. Amazon Kendra indexes standard knowledge articles and the standard
     * fields of knowledge articles, or the custom fields of custom knowledge articles,
     * but not both.</p>
     */
    inline const SalesforceKnowledgeArticleConfiguration& GetKnowledgeArticleConfiguration() const{ return m_knowledgeArticleConfiguration; }

    /**
     * <p>Configuration information for the knowledge article types that Amazon Kendra
     * indexes. Amazon Kendra indexes standard knowledge articles and the standard
     * fields of knowledge articles, or the custom fields of custom knowledge articles,
     * but not both.</p>
     */
    inline bool KnowledgeArticleConfigurationHasBeenSet() const { return m_knowledgeArticleConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for the knowledge article types that Amazon Kendra
     * indexes. Amazon Kendra indexes standard knowledge articles and the standard
     * fields of knowledge articles, or the custom fields of custom knowledge articles,
     * but not both.</p>
     */
    inline void SetKnowledgeArticleConfiguration(const SalesforceKnowledgeArticleConfiguration& value) { m_knowledgeArticleConfigurationHasBeenSet = true; m_knowledgeArticleConfiguration = value; }

    /**
     * <p>Configuration information for the knowledge article types that Amazon Kendra
     * indexes. Amazon Kendra indexes standard knowledge articles and the standard
     * fields of knowledge articles, or the custom fields of custom knowledge articles,
     * but not both.</p>
     */
    inline void SetKnowledgeArticleConfiguration(SalesforceKnowledgeArticleConfiguration&& value) { m_knowledgeArticleConfigurationHasBeenSet = true; m_knowledgeArticleConfiguration = std::move(value); }

    /**
     * <p>Configuration information for the knowledge article types that Amazon Kendra
     * indexes. Amazon Kendra indexes standard knowledge articles and the standard
     * fields of knowledge articles, or the custom fields of custom knowledge articles,
     * but not both.</p>
     */
    inline SalesforceConfiguration& WithKnowledgeArticleConfiguration(const SalesforceKnowledgeArticleConfiguration& value) { SetKnowledgeArticleConfiguration(value); return *this;}

    /**
     * <p>Configuration information for the knowledge article types that Amazon Kendra
     * indexes. Amazon Kendra indexes standard knowledge articles and the standard
     * fields of knowledge articles, or the custom fields of custom knowledge articles,
     * but not both.</p>
     */
    inline SalesforceConfiguration& WithKnowledgeArticleConfiguration(SalesforceKnowledgeArticleConfiguration&& value) { SetKnowledgeArticleConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information for Salesforce chatter feeds.</p>
     */
    inline const SalesforceChatterFeedConfiguration& GetChatterFeedConfiguration() const{ return m_chatterFeedConfiguration; }

    /**
     * <p>Configuration information for Salesforce chatter feeds.</p>
     */
    inline bool ChatterFeedConfigurationHasBeenSet() const { return m_chatterFeedConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for Salesforce chatter feeds.</p>
     */
    inline void SetChatterFeedConfiguration(const SalesforceChatterFeedConfiguration& value) { m_chatterFeedConfigurationHasBeenSet = true; m_chatterFeedConfiguration = value; }

    /**
     * <p>Configuration information for Salesforce chatter feeds.</p>
     */
    inline void SetChatterFeedConfiguration(SalesforceChatterFeedConfiguration&& value) { m_chatterFeedConfigurationHasBeenSet = true; m_chatterFeedConfiguration = std::move(value); }

    /**
     * <p>Configuration information for Salesforce chatter feeds.</p>
     */
    inline SalesforceConfiguration& WithChatterFeedConfiguration(const SalesforceChatterFeedConfiguration& value) { SetChatterFeedConfiguration(value); return *this;}

    /**
     * <p>Configuration information for Salesforce chatter feeds.</p>
     */
    inline SalesforceConfiguration& WithChatterFeedConfiguration(SalesforceChatterFeedConfiguration&& value) { SetChatterFeedConfiguration(std::move(value)); return *this;}


    /**
     * <p>Indicates whether Amazon Kendra should index attachments to Salesforce
     * objects.</p>
     */
    inline bool GetCrawlAttachments() const{ return m_crawlAttachments; }

    /**
     * <p>Indicates whether Amazon Kendra should index attachments to Salesforce
     * objects.</p>
     */
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }

    /**
     * <p>Indicates whether Amazon Kendra should index attachments to Salesforce
     * objects.</p>
     */
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }

    /**
     * <p>Indicates whether Amazon Kendra should index attachments to Salesforce
     * objects.</p>
     */
    inline SalesforceConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}


    /**
     * <p>Configuration information for processing attachments to Salesforce standard
     * objects. </p>
     */
    inline const SalesforceStandardObjectAttachmentConfiguration& GetStandardObjectAttachmentConfiguration() const{ return m_standardObjectAttachmentConfiguration; }

    /**
     * <p>Configuration information for processing attachments to Salesforce standard
     * objects. </p>
     */
    inline bool StandardObjectAttachmentConfigurationHasBeenSet() const { return m_standardObjectAttachmentConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for processing attachments to Salesforce standard
     * objects. </p>
     */
    inline void SetStandardObjectAttachmentConfiguration(const SalesforceStandardObjectAttachmentConfiguration& value) { m_standardObjectAttachmentConfigurationHasBeenSet = true; m_standardObjectAttachmentConfiguration = value; }

    /**
     * <p>Configuration information for processing attachments to Salesforce standard
     * objects. </p>
     */
    inline void SetStandardObjectAttachmentConfiguration(SalesforceStandardObjectAttachmentConfiguration&& value) { m_standardObjectAttachmentConfigurationHasBeenSet = true; m_standardObjectAttachmentConfiguration = std::move(value); }

    /**
     * <p>Configuration information for processing attachments to Salesforce standard
     * objects. </p>
     */
    inline SalesforceConfiguration& WithStandardObjectAttachmentConfiguration(const SalesforceStandardObjectAttachmentConfiguration& value) { SetStandardObjectAttachmentConfiguration(value); return *this;}

    /**
     * <p>Configuration information for processing attachments to Salesforce standard
     * objects. </p>
     */
    inline SalesforceConfiguration& WithStandardObjectAttachmentConfiguration(SalesforceStandardObjectAttachmentConfiguration&& value) { SetStandardObjectAttachmentConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeAttachmentFilePatterns() const{ return m_includeAttachmentFilePatterns; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline bool IncludeAttachmentFilePatternsHasBeenSet() const { return m_includeAttachmentFilePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline void SetIncludeAttachmentFilePatterns(const Aws::Vector<Aws::String>& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline void SetIncludeAttachmentFilePatterns(Aws::Vector<Aws::String>&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& WithIncludeAttachmentFilePatterns(const Aws::Vector<Aws::String>& value) { SetIncludeAttachmentFilePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& WithIncludeAttachmentFilePatterns(Aws::Vector<Aws::String>&& value) { SetIncludeAttachmentFilePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& AddIncludeAttachmentFilePatterns(const Aws::String& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& AddIncludeAttachmentFilePatterns(Aws::String&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain documents in your
     * Salesforce. Documents that match the patterns are included in the index.
     * Documents that don't match the patterns are excluded from the index. If a
     * document matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the document isn't included in the index.</p> <p>The
     * pattern is applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& AddIncludeAttachmentFilePatterns(const char* value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAttachmentFilePatterns() const{ return m_excludeAttachmentFilePatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline bool ExcludeAttachmentFilePatternsHasBeenSet() const { return m_excludeAttachmentFilePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline void SetExcludeAttachmentFilePatterns(const Aws::Vector<Aws::String>& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline void SetExcludeAttachmentFilePatterns(Aws::Vector<Aws::String>&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& WithExcludeAttachmentFilePatterns(const Aws::Vector<Aws::String>& value) { SetExcludeAttachmentFilePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& WithExcludeAttachmentFilePatterns(Aws::Vector<Aws::String>&& value) { SetExcludeAttachmentFilePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& AddExcludeAttachmentFilePatterns(const Aws::String& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& AddExcludeAttachmentFilePatterns(Aws::String&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain documents in your
     * Salesforce. Documents that match the patterns are excluded from the index.
     * Documents that don't match the patterns are included in the index. If a document
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the document isn't included in the index.</p> <p>The pattern is
     * applied to the name of the attached file.</p>
     */
    inline SalesforceConfiguration& AddExcludeAttachmentFilePatterns(const char* value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.push_back(value); return *this; }

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

    bool m_crawlAttachments;
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
