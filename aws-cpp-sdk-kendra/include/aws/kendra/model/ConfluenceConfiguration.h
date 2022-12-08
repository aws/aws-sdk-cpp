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
#include <aws/kendra/model/ProxyConfiguration.h>
#include <aws/kendra/model/ConfluenceAuthenticationType.h>
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
   * <p>Provides the configuration information to connect to Confluence as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfluenceConfiguration
  {
  public:
    AWS_KENDRA_API ConfluenceConfiguration();
    AWS_KENDRA_API ConfluenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline const Aws::String& GetServerUrl() const{ return m_serverUrl; }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline bool ServerUrlHasBeenSet() const { return m_serverUrlHasBeenSet; }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline void SetServerUrl(const Aws::String& value) { m_serverUrlHasBeenSet = true; m_serverUrl = value; }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline void SetServerUrl(Aws::String&& value) { m_serverUrlHasBeenSet = true; m_serverUrl = std::move(value); }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline void SetServerUrl(const char* value) { m_serverUrlHasBeenSet = true; m_serverUrl.assign(value); }

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline ConfluenceConfiguration& WithServerUrl(const Aws::String& value) { SetServerUrl(value); return *this;}

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline ConfluenceConfiguration& WithServerUrl(Aws::String&& value) { SetServerUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of your Confluence instance. Use the full URL of the server. For
     * example, <i>https://server.example.com:port/</i>. You can also use an IP
     * address, for example, <i>https://192.168.1.113/</i>.</p>
     */
    inline ConfluenceConfiguration& WithServerUrl(const char* value) { SetServerUrl(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline ConfluenceConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline ConfluenceConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Secrets Manager secret that contains the
     * user name and password required to connect to the Confluence instance. If you
     * use Confluence Cloud, you use a generated API token as the password.</p> <p>You
     * can also provide authentication credentials in the form of a personal access
     * token. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-confluence.html">Using
     * a Confluence data source</a>.</p>
     */
    inline ConfluenceConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The version or the type of Confluence installation to connect to.</p>
     */
    inline const ConfluenceVersion& GetVersion() const{ return m_version; }

    /**
     * <p>The version or the type of Confluence installation to connect to.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version or the type of Confluence installation to connect to.</p>
     */
    inline void SetVersion(const ConfluenceVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version or the type of Confluence installation to connect to.</p>
     */
    inline void SetVersion(ConfluenceVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version or the type of Confluence installation to connect to.</p>
     */
    inline ConfluenceConfiguration& WithVersion(const ConfluenceVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>The version or the type of Confluence installation to connect to.</p>
     */
    inline ConfluenceConfiguration& WithVersion(ConfluenceVersion&& value) { SetVersion(std::move(value)); return *this;}


    /**
     * <p>Configuration information for indexing Confluence spaces.</p>
     */
    inline const ConfluenceSpaceConfiguration& GetSpaceConfiguration() const{ return m_spaceConfiguration; }

    /**
     * <p>Configuration information for indexing Confluence spaces.</p>
     */
    inline bool SpaceConfigurationHasBeenSet() const { return m_spaceConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for indexing Confluence spaces.</p>
     */
    inline void SetSpaceConfiguration(const ConfluenceSpaceConfiguration& value) { m_spaceConfigurationHasBeenSet = true; m_spaceConfiguration = value; }

    /**
     * <p>Configuration information for indexing Confluence spaces.</p>
     */
    inline void SetSpaceConfiguration(ConfluenceSpaceConfiguration&& value) { m_spaceConfigurationHasBeenSet = true; m_spaceConfiguration = std::move(value); }

    /**
     * <p>Configuration information for indexing Confluence spaces.</p>
     */
    inline ConfluenceConfiguration& WithSpaceConfiguration(const ConfluenceSpaceConfiguration& value) { SetSpaceConfiguration(value); return *this;}

    /**
     * <p>Configuration information for indexing Confluence spaces.</p>
     */
    inline ConfluenceConfiguration& WithSpaceConfiguration(ConfluenceSpaceConfiguration&& value) { SetSpaceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information for indexing Confluence pages.</p>
     */
    inline const ConfluencePageConfiguration& GetPageConfiguration() const{ return m_pageConfiguration; }

    /**
     * <p>Configuration information for indexing Confluence pages.</p>
     */
    inline bool PageConfigurationHasBeenSet() const { return m_pageConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for indexing Confluence pages.</p>
     */
    inline void SetPageConfiguration(const ConfluencePageConfiguration& value) { m_pageConfigurationHasBeenSet = true; m_pageConfiguration = value; }

    /**
     * <p>Configuration information for indexing Confluence pages.</p>
     */
    inline void SetPageConfiguration(ConfluencePageConfiguration&& value) { m_pageConfigurationHasBeenSet = true; m_pageConfiguration = std::move(value); }

    /**
     * <p>Configuration information for indexing Confluence pages.</p>
     */
    inline ConfluenceConfiguration& WithPageConfiguration(const ConfluencePageConfiguration& value) { SetPageConfiguration(value); return *this;}

    /**
     * <p>Configuration information for indexing Confluence pages.</p>
     */
    inline ConfluenceConfiguration& WithPageConfiguration(ConfluencePageConfiguration&& value) { SetPageConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information for indexing Confluence blogs.</p>
     */
    inline const ConfluenceBlogConfiguration& GetBlogConfiguration() const{ return m_blogConfiguration; }

    /**
     * <p>Configuration information for indexing Confluence blogs.</p>
     */
    inline bool BlogConfigurationHasBeenSet() const { return m_blogConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for indexing Confluence blogs.</p>
     */
    inline void SetBlogConfiguration(const ConfluenceBlogConfiguration& value) { m_blogConfigurationHasBeenSet = true; m_blogConfiguration = value; }

    /**
     * <p>Configuration information for indexing Confluence blogs.</p>
     */
    inline void SetBlogConfiguration(ConfluenceBlogConfiguration&& value) { m_blogConfigurationHasBeenSet = true; m_blogConfiguration = std::move(value); }

    /**
     * <p>Configuration information for indexing Confluence blogs.</p>
     */
    inline ConfluenceConfiguration& WithBlogConfiguration(const ConfluenceBlogConfiguration& value) { SetBlogConfiguration(value); return *this;}

    /**
     * <p>Configuration information for indexing Confluence blogs.</p>
     */
    inline ConfluenceConfiguration& WithBlogConfiguration(ConfluenceBlogConfiguration&& value) { SetBlogConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information for indexing attachments to Confluence blogs and
     * pages.</p>
     */
    inline const ConfluenceAttachmentConfiguration& GetAttachmentConfiguration() const{ return m_attachmentConfiguration; }

    /**
     * <p>Configuration information for indexing attachments to Confluence blogs and
     * pages.</p>
     */
    inline bool AttachmentConfigurationHasBeenSet() const { return m_attachmentConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for indexing attachments to Confluence blogs and
     * pages.</p>
     */
    inline void SetAttachmentConfiguration(const ConfluenceAttachmentConfiguration& value) { m_attachmentConfigurationHasBeenSet = true; m_attachmentConfiguration = value; }

    /**
     * <p>Configuration information for indexing attachments to Confluence blogs and
     * pages.</p>
     */
    inline void SetAttachmentConfiguration(ConfluenceAttachmentConfiguration&& value) { m_attachmentConfigurationHasBeenSet = true; m_attachmentConfiguration = std::move(value); }

    /**
     * <p>Configuration information for indexing attachments to Confluence blogs and
     * pages.</p>
     */
    inline ConfluenceConfiguration& WithAttachmentConfiguration(const ConfluenceAttachmentConfiguration& value) { SetAttachmentConfiguration(value); return *this;}

    /**
     * <p>Configuration information for indexing attachments to Confluence blogs and
     * pages.</p>
     */
    inline ConfluenceConfiguration& WithAttachmentConfiguration(ConfluenceAttachmentConfiguration&& value) { SetAttachmentConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Confluence. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline const DataSourceVpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Confluence. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Confluence. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(const DataSourceVpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Confluence. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline void SetVpcConfiguration(DataSourceVpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Confluence. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline ConfluenceConfiguration& WithVpcConfiguration(const DataSourceVpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    /**
     * <p>Configuration information for an Amazon Virtual Private Cloud to connect to
     * your Confluence. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/vpc-configuration.html">Configuring
     * a VPC</a>.</p>
     */
    inline ConfluenceConfiguration& WithVpcConfiguration(DataSourceVpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * included in the index. Content that doesn't match the patterns is excluded from
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain blog posts, pages,
     * spaces, or attachments in your Confluence. Content that matches the patterns are
     * excluded from the index. Content that doesn't match the patterns is included in
     * the index. If content matches both an inclusion and exclusion pattern, the
     * exclusion pattern takes precedence and the content isn't included in the
     * index.</p>
     */
    inline ConfluenceConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }


    /**
     * <p>Configuration information to connect to your Confluence URL instance via a
     * web proxy. You can use this option for Confluence Server.</p> <p>You must
     * provide the website host name and port number. For example, the host name of
     * <i>https://a.example.com/page1.html</i> is "a.example.com" and the port is 443,
     * the standard port for HTTPS.</p> <p>Web proxy credentials are optional and you
     * can use them to connect to a web proxy server that requires basic authentication
     * of user name and password. To store web proxy credentials, you use a secret in
     * Secrets Manager.</p> <p>It is recommended that you follow best security
     * practices when configuring your web proxy. This includes setting up throttling,
     * setting up logging and monitoring, and applying security patches on a regular
     * basis. If you use your web proxy with multiple data sources, sync jobs that
     * occur at the same time could strain the load on your proxy. It is recommended
     * you prepare your proxy beforehand for any security and load requirements.</p>
     */
    inline const ProxyConfiguration& GetProxyConfiguration() const{ return m_proxyConfiguration; }

    /**
     * <p>Configuration information to connect to your Confluence URL instance via a
     * web proxy. You can use this option for Confluence Server.</p> <p>You must
     * provide the website host name and port number. For example, the host name of
     * <i>https://a.example.com/page1.html</i> is "a.example.com" and the port is 443,
     * the standard port for HTTPS.</p> <p>Web proxy credentials are optional and you
     * can use them to connect to a web proxy server that requires basic authentication
     * of user name and password. To store web proxy credentials, you use a secret in
     * Secrets Manager.</p> <p>It is recommended that you follow best security
     * practices when configuring your web proxy. This includes setting up throttling,
     * setting up logging and monitoring, and applying security patches on a regular
     * basis. If you use your web proxy with multiple data sources, sync jobs that
     * occur at the same time could strain the load on your proxy. It is recommended
     * you prepare your proxy beforehand for any security and load requirements.</p>
     */
    inline bool ProxyConfigurationHasBeenSet() const { return m_proxyConfigurationHasBeenSet; }

    /**
     * <p>Configuration information to connect to your Confluence URL instance via a
     * web proxy. You can use this option for Confluence Server.</p> <p>You must
     * provide the website host name and port number. For example, the host name of
     * <i>https://a.example.com/page1.html</i> is "a.example.com" and the port is 443,
     * the standard port for HTTPS.</p> <p>Web proxy credentials are optional and you
     * can use them to connect to a web proxy server that requires basic authentication
     * of user name and password. To store web proxy credentials, you use a secret in
     * Secrets Manager.</p> <p>It is recommended that you follow best security
     * practices when configuring your web proxy. This includes setting up throttling,
     * setting up logging and monitoring, and applying security patches on a regular
     * basis. If you use your web proxy with multiple data sources, sync jobs that
     * occur at the same time could strain the load on your proxy. It is recommended
     * you prepare your proxy beforehand for any security and load requirements.</p>
     */
    inline void SetProxyConfiguration(const ProxyConfiguration& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = value; }

    /**
     * <p>Configuration information to connect to your Confluence URL instance via a
     * web proxy. You can use this option for Confluence Server.</p> <p>You must
     * provide the website host name and port number. For example, the host name of
     * <i>https://a.example.com/page1.html</i> is "a.example.com" and the port is 443,
     * the standard port for HTTPS.</p> <p>Web proxy credentials are optional and you
     * can use them to connect to a web proxy server that requires basic authentication
     * of user name and password. To store web proxy credentials, you use a secret in
     * Secrets Manager.</p> <p>It is recommended that you follow best security
     * practices when configuring your web proxy. This includes setting up throttling,
     * setting up logging and monitoring, and applying security patches on a regular
     * basis. If you use your web proxy with multiple data sources, sync jobs that
     * occur at the same time could strain the load on your proxy. It is recommended
     * you prepare your proxy beforehand for any security and load requirements.</p>
     */
    inline void SetProxyConfiguration(ProxyConfiguration&& value) { m_proxyConfigurationHasBeenSet = true; m_proxyConfiguration = std::move(value); }

    /**
     * <p>Configuration information to connect to your Confluence URL instance via a
     * web proxy. You can use this option for Confluence Server.</p> <p>You must
     * provide the website host name and port number. For example, the host name of
     * <i>https://a.example.com/page1.html</i> is "a.example.com" and the port is 443,
     * the standard port for HTTPS.</p> <p>Web proxy credentials are optional and you
     * can use them to connect to a web proxy server that requires basic authentication
     * of user name and password. To store web proxy credentials, you use a secret in
     * Secrets Manager.</p> <p>It is recommended that you follow best security
     * practices when configuring your web proxy. This includes setting up throttling,
     * setting up logging and monitoring, and applying security patches on a regular
     * basis. If you use your web proxy with multiple data sources, sync jobs that
     * occur at the same time could strain the load on your proxy. It is recommended
     * you prepare your proxy beforehand for any security and load requirements.</p>
     */
    inline ConfluenceConfiguration& WithProxyConfiguration(const ProxyConfiguration& value) { SetProxyConfiguration(value); return *this;}

    /**
     * <p>Configuration information to connect to your Confluence URL instance via a
     * web proxy. You can use this option for Confluence Server.</p> <p>You must
     * provide the website host name and port number. For example, the host name of
     * <i>https://a.example.com/page1.html</i> is "a.example.com" and the port is 443,
     * the standard port for HTTPS.</p> <p>Web proxy credentials are optional and you
     * can use them to connect to a web proxy server that requires basic authentication
     * of user name and password. To store web proxy credentials, you use a secret in
     * Secrets Manager.</p> <p>It is recommended that you follow best security
     * practices when configuring your web proxy. This includes setting up throttling,
     * setting up logging and monitoring, and applying security patches on a regular
     * basis. If you use your web proxy with multiple data sources, sync jobs that
     * occur at the same time could strain the load on your proxy. It is recommended
     * you prepare your proxy beforehand for any security and load requirements.</p>
     */
    inline ConfluenceConfiguration& WithProxyConfiguration(ProxyConfiguration&& value) { SetProxyConfiguration(std::move(value)); return *this;}


    /**
     * <p>Whether you want to connect to Confluence using basic authentication of user
     * name and password, or a personal access token. You can use a personal access
     * token for Confluence Server.</p>
     */
    inline const ConfluenceAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>Whether you want to connect to Confluence using basic authentication of user
     * name and password, or a personal access token. You can use a personal access
     * token for Confluence Server.</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>Whether you want to connect to Confluence using basic authentication of user
     * name and password, or a personal access token. You can use a personal access
     * token for Confluence Server.</p>
     */
    inline void SetAuthenticationType(const ConfluenceAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>Whether you want to connect to Confluence using basic authentication of user
     * name and password, or a personal access token. You can use a personal access
     * token for Confluence Server.</p>
     */
    inline void SetAuthenticationType(ConfluenceAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>Whether you want to connect to Confluence using basic authentication of user
     * name and password, or a personal access token. You can use a personal access
     * token for Confluence Server.</p>
     */
    inline ConfluenceConfiguration& WithAuthenticationType(const ConfluenceAuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>Whether you want to connect to Confluence using basic authentication of user
     * name and password, or a personal access token. You can use a personal access
     * token for Confluence Server.</p>
     */
    inline ConfluenceConfiguration& WithAuthenticationType(ConfluenceAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}

  private:

    Aws::String m_serverUrl;
    bool m_serverUrlHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    ConfluenceVersion m_version;
    bool m_versionHasBeenSet = false;

    ConfluenceSpaceConfiguration m_spaceConfiguration;
    bool m_spaceConfigurationHasBeenSet = false;

    ConfluencePageConfiguration m_pageConfiguration;
    bool m_pageConfigurationHasBeenSet = false;

    ConfluenceBlogConfiguration m_blogConfiguration;
    bool m_blogConfigurationHasBeenSet = false;

    ConfluenceAttachmentConfiguration m_attachmentConfiguration;
    bool m_attachmentConfigurationHasBeenSet = false;

    DataSourceVpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    ProxyConfiguration m_proxyConfiguration;
    bool m_proxyConfigurationHasBeenSet = false;

    ConfluenceAuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
