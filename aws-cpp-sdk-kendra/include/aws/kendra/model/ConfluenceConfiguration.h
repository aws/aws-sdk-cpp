/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ConfluenceVersion.h>
#include <aws/kendra/model/ConfluenceSpaceConfiguration.h>
#include <aws/kendra/model/ConfluencePageConfiguration.h>
#include <aws/kendra/model/ConfluenceBlogConfiguration.h>
#include <aws/kendra/model/ConfluenceAttachmentConfiguration.h>
#include <aws/kendra/model/DataSourceVpcConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Provides configuration information for data sources that connect to
   * Confluence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API ConfluenceConfiguration
  {
  public:
    ConfluenceConfiguration();
    ConfluenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ConfluenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <code>https://server.example.com:port/</code>. You can also use an IP
     * address, for example, <code>https://192.168.1.113/</code>.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <code>https://server.example.com:port/</code>. You can also use an IP
     * address, for example, <code>https://192.168.1.113/</code>.</p>
     */
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <code>https://server.example.com:port/</code>. You can also use an IP
     * address, for example, <code>https://192.168.1.113/</code>.</p>
     */
    inline void SetServerUrl(const Aws::String& value) { m_serverUrlHasBeenSet = true; m_serverUrl = value; }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <code>https://server.example.com:port/</code>. You can also use an IP
     * address, for example, <code>https://192.168.1.113/</code>.</p>
     */
    inline void SetServerUrl(Aws::String&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::move(value); }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <code>https://server.example.com:port/</code>. You can also use an IP
     * address, for example, <code>https://192.168.1.113/</code>.</p>
     */
    inline void SetServerUrl(const char* value) { m_serverUrlHasBeenSet = true; m_serverUrl.assign(value); }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <code>https://server.example.com:port/</code>. You can also use an IP
     * address, for example, <code>https://192.168.1.113/</code>.</p>
     */
    inline ConfluenceConfiguration& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <code>https://server.example.com:port/</code>. You can also use an IP
     * address, for example, <code>https://192.168.1.113/</code>.</p>
     */
    inline ConfluenceConfiguration& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <code>https://server.example.com:port/</code>. You can also use an IP
     * address, for example, <code>https://192.168.1.113/</code>.</p>
     */
    inline ConfluenceConfiguration& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Secrets Manager secret that contains
     * the key/value pairs required to connect to your Confluence server. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li> <p>username
     * - The user name or email address of a user with administrative privileges for
     * the Confluence server.</p> </li> <li> <p>password - The password associated with
     * the user logging in to the Confluence server.</p> </li> </ul>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Secrets Manager secret that contains
     * the key/value pairs required to connect to your Confluence server. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li> <p>username
     * - The user name or email address of a user with administrative privileges for
     * the Confluence server.</p> </li> <li> <p>password - The password associated with
     * the user logging in to the Confluence server.</p> </li> </ul>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Secrets Manager secret that contains
     * the key/value pairs required to connect to your Confluence server. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li> <p>username
     * - The user name or email address of a user with administrative privileges for
     * the Confluence server.</p> </li> <li> <p>password - The password associated with
     * the user logging in to the Confluence server.</p> </li> </ul>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Secrets Manager secret that contains
     * the key/value pairs required to connect to your Confluence server. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li> <p>username
     * - The user name or email address of a user with administrative privileges for
     * the Confluence server.</p> </li> <li> <p>password - The password associated with
     * the user logging in to the Confluence server.</p> </li> </ul>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Secrets Manager secret that contains
     * the key/value pairs required to connect to your Confluence server. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li> <p>username
     * - The user name or email address of a user with administrative privileges for
     * the Confluence server.</p> </li> <li> <p>password - The password associated with
     * the user logging in to the Confluence server.</p> </li> </ul>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Secrets Manager secret that contains
     * the key/value pairs required to connect to your Confluence server. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li> <p>username
     * - The user name or email address of a user with administrative privileges for
     * the Confluence server.</p> </li> <li> <p>password - The password associated with
     * the user logging in to the Confluence server.</p> </li> </ul>
     */
    inline ConfluenceConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Secrets Manager secret that contains
     * the key/value pairs required to connect to your Confluence server. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li> <p>username
     * - The user name or email address of a user with administrative privileges for
     * the Confluence server.</p> </li> <li> <p>password - The password associated with
     * the user logging in to the Confluence server.</p> </li> </ul>
     */
    inline ConfluenceConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an AWS Secrets Manager secret that contains
     * the key/value pairs required to connect to your Confluence server. The secret
     * must contain a JSON structure with the following keys:</p> <ul> <li> <p>username
     * - The user name or email address of a user with administrative privileges for
     * the Confluence server.</p> </li> <li> <p>password - The password associated with
     * the user logging in to the Confluence server.</p> </li> </ul>
     */
    inline ConfluenceConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>Specifies the version of the Confluence installation that you are connecting
     * to.</p>
     */
    inline const ConfluenceVersion& GetVersion() const{ return m_version; }

    /**
     * <p>Specifies the version of the Confluence installation that you are connecting
     * to.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Specifies the version of the Confluence installation that you are connecting
     * to.</p>
     */
    inline void SetVersion(const ConfluenceVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Specifies the version of the Confluence installation that you are connecting
     * to.</p>
     */
    inline void SetVersion(ConfluenceVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Specifies the version of the Confluence installation that you are connecting
     * to.</p>
     */
    inline ConfluenceConfiguration& WithVersion(const ConfluenceVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>Specifies the version of the Confluence installation that you are connecting
     * to.</p>
     */
    inline ConfluenceConfiguration& WithVersion(ConfluenceVersion&& value) { SetVersion(std::move(value)); return *this;}


    /**
     * <p>Specifies configuration information for indexing Confluence spaces.</p>
     */
    inline const ConfluenceSpaceConfiguration& GetSpaceConfiguration() const{ return m_spaceConfiguration; }

    /**
     * <p>Specifies configuration information for indexing Confluence spaces.</p>
     */
    inline bool SpaceConfigurationHasBeenSet() const { return m_spaceConfigurationHasBeenSet; }

    /**
     * <p>Specifies configuration information for indexing Confluence spaces.</p>
     */
    inline void SetSpaceConfiguration(const ConfluenceSpaceConfiguration& value) { m_spaceConfigurationHasBeenSet = true; m_spaceConfiguration = value; }

    /**
     * <p>Specifies configuration information for indexing Confluence spaces.</p>
     */
    inline void SetSpaceConfiguration(ConfluenceSpaceConfiguration&& value) { m_spaceConfigurationHasBeenSet = true; m_spaceConfiguration = std::move(value); }

    /**
     * <p>Specifies configuration information for indexing Confluence spaces.</p>
     */
    inline ConfluenceConfiguration& WithSpaceConfiguration(const ConfluenceSpaceConfiguration& value) { SetSpaceConfiguration(value); return *this;}

    /**
     * <p>Specifies configuration information for indexing Confluence spaces.</p>
     */
    inline ConfluenceConfiguration& WithSpaceConfiguration(ConfluenceSpaceConfiguration&& value) { SetSpaceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies configuration information for indexing Confluence pages.</p>
     */
    inline const ConfluencePageConfiguration& GetPageConfiguration() const{ return m_pageConfiguration; }

    /**
     * <p>Specifies configuration information for indexing Confluence pages.</p>
     */
    inline bool PageConfigurationHasBeenSet() const { return m_pageConfigurationHasBeenSet; }

    /**
     * <p>Specifies configuration information for indexing Confluence pages.</p>
     */
    inline void SetPageConfiguration(const ConfluencePageConfiguration& value) { m_pageConfigurationHasBeenSet = true; m_pageConfiguration = value; }

    /**
     * <p>Specifies configuration information for indexing Confluence pages.</p>
     */
    inline void SetPageConfiguration(ConfluencePageConfiguration&& value) { m_pageConfigurationHasBeenSet = true; m_pageConfiguration = std::move(value); }

    /**
     * <p>Specifies configuration information for indexing Confluence pages.</p>
     */
    inline ConfluenceConfiguration& WithPageConfiguration(const ConfluencePageConfiguration& value) { SetPageConfiguration(value); return *this;}

    /**
     * <p>Specifies configuration information for indexing Confluence pages.</p>
     */
    inline ConfluenceConfiguration& WithPageConfiguration(ConfluencePageConfiguration&& value) { SetPageConfiguration(std::move(value)); return *this;}


    /**
     * <p> Specifies configuration information for indexing Confluence blogs.</p>
     */
    inline const ConfluenceBlogConfiguration& GetBlogConfiguration() const{ return m_blogConfiguration; }

    /**
     * <p> Specifies configuration information for indexing Confluence blogs.</p>
     */
    inline bool BlogConfigurationHasBeenSet() const { return m_blogConfigurationHasBeenSet; }

    /**
     * <p> Specifies configuration information for indexing Confluence blogs.</p>
     */
    inline void SetBlogConfiguration(const ConfluenceBlogConfiguration& value) { m_blogConfigurationHasBeenSet = true; m_blogConfiguration = value; }

    /**
     * <p> Specifies configuration information for indexing Confluence blogs.</p>
     */
    inline void SetBlogConfiguration(ConfluenceBlogConfiguration&& value) { m_blogConfigurationHasBeenSet = true; m_blogConfiguration = std::move(value); }

    /**
     * <p> Specifies configuration information for indexing Confluence blogs.</p>
     */
    inline ConfluenceConfiguration& WithBlogConfiguration(const ConfluenceBlogConfiguration& value) { SetBlogConfiguration(value); return *this;}

    /**
     * <p> Specifies configuration information for indexing Confluence blogs.</p>
     */
    inline ConfluenceConfiguration& WithBlogConfiguration(ConfluenceBlogConfiguration&& value) { SetBlogConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies configuration information for indexing attachments to Confluence
     * blogs and pages.</p>
     */
    inline const ConfluenceAttachmentConfiguration& GetAttachmentConfiguration() const{ return m_attachmentConfiguration; }

    /**
     * <p>Specifies configuration information for indexing attachments to Confluence
     * blogs and pages.</p>
     */
    inline bool AttachmentConfigurationHasBeenSet() const { return m_attachmentConfigurationHasBeenSet; }

    /**
     * <p>Specifies configuration information for indexing attachments to Confluence
     * blogs and pages.</p>
     */
    inline void SetAttachmentConfiguration(const ConfluenceAttachmentConfiguration& value) { m_attachmentConfigurationHasBeenSet = true; m_attachmentConfiguration = value; }

    /**
     * <p>Specifies configuration information for indexing attachments to Confluence
     * blogs and pages.</p>
     */
    inline void SetAttachmentConfiguration(ConfluenceAttachmentConfiguration&& value) { m_attachmentConfigurationHasBeenSet = true; m_attachmentConfiguration = std::move(value); }

    /**
     * <p>Specifies configuration information for indexing attachments to Confluence
     * blogs and pages.</p>
     */
    inline ConfluenceConfiguration& WithAttachmentConfiguration(const ConfluenceAttachmentConfiguration& value) { SetAttachmentConfiguration(value); return *this;}

    /**
     * <p>Specifies configuration information for indexing attachments to Confluence
     * blogs and pages.</p>
     */
    inline ConfluenceConfiguration& WithAttachmentConfiguration(ConfluenceAttachmentConfiguration&& value) { SetAttachmentConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the information for connecting to an Amazon VPC.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Specifies the information for connecting to an Amazon VPC.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>Specifies the information for connecting to an Amazon VPC.</p>
     */
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>Specifies the information for connecting to an Amazon VPC.</p>
     */
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>Specifies the information for connecting to an Amazon VPC.</p>
     */
    inline ConfluenceConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Specifies the information for connecting to an Amazon VPC.</p>
     */
    inline ConfluenceConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An inclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the patterns are included in the index. Items that
     * don't match the pattern are excluded from the index. If an item matches both an
     * inclusion pattern and an exclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns that apply to a URL on the Confluence
     * server. An exclusion pattern can apply to a blog post, a page, a space, or an
     * attachment. Items that match the pattern are excluded from the index. Items that
     * don't match the pattern are included in the index. If a item matches both an
     * exclusion pattern and an inclusion pattern, the item isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

  private:

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;

    ConfluenceVersion m_version;
    bool m_versionHasBeenSet;

    ConfluenceSpaceConfiguration m_spaceConfiguration;
    bool m_spaceConfigurationHasBeenSet;

    ConfluencePageConfiguration m_pageConfiguration;
    bool m_pageConfigurationHasBeenSet;

    ConfluenceBlogConfiguration m_blogConfiguration;
    bool m_blogConfigurationHasBeenSet;

    ConfluenceAttachmentConfiguration m_attachmentConfiguration;
    bool m_attachmentConfigurationHasBeenSet;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
