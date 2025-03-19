/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DocumentsMetadataConfiguration.h>
#include <aws/kendra/model/AccessControlListConfiguration.h>
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
   * <p>Provides the configuration information to connect to an Amazon S3 bucket.</p>
   *  <p>Amazon Kendra now supports an upgraded Amazon S3 connector.</p> <p>You
   * must now use the <a
   * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_TemplateConfiguration.html">TemplateConfiguration</a>
   * object instead of the <code>S3DataSourceConfiguration</code> object to configure
   * your connector.</p> <p>Connectors configured using the older console and API
   * architecture will continue to function as configured. However, you won't be able
   * to edit or update them. If you want to edit or update your connector
   * configuration, you must create a new connector.</p> <p>We recommended migrating
   * your connector workflow to the upgraded version. Support for connectors
   * configured using the older architecture is scheduled to end by June 2024.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/S3DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DataSourceConfiguration
  {
  public:
    AWS_KENDRA_API S3DataSourceConfiguration() = default;
    AWS_KENDRA_API S3DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API S3DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3DataSourceConfiguration& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPrefixes() const { return m_inclusionPrefixes; }
    inline bool InclusionPrefixesHasBeenSet() const { return m_inclusionPrefixesHasBeenSet; }
    template<typename InclusionPrefixesT = Aws::Vector<Aws::String>>
    void SetInclusionPrefixes(InclusionPrefixesT&& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes = std::forward<InclusionPrefixesT>(value); }
    template<typename InclusionPrefixesT = Aws::Vector<Aws::String>>
    S3DataSourceConfiguration& WithInclusionPrefixes(InclusionPrefixesT&& value) { SetInclusionPrefixes(std::forward<InclusionPrefixesT>(value)); return *this;}
    template<typename InclusionPrefixesT = Aws::String>
    S3DataSourceConfiguration& AddInclusionPrefixes(InclusionPrefixesT&& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes.emplace_back(std::forward<InclusionPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of glob patterns (patterns that can expand a wildcard pattern into a
     * list of path names that match the given pattern) for certain file names and file
     * types to include in your index. If a document matches both an inclusion and
     * exclusion prefix or pattern, the exclusion prefix takes precendence and the
     * document is not indexed. Examples of glob patterns include:</p> <ul> <li> <p>
     * <i>/myapp/config/ *</i>—All files inside config directory.</p> </li> <li> <p>
     * <i>** / *.png</i>—All .png files in all directories.</p> </li> <li> <p>
     * <i>** / *.{png, ico, md}</i>—All .png, .ico or .md files in all directories.</p>
     * </li> <li> <p> <i>/myapp/src/ ** / *.ts</i>—All .ts files inside src directory (and
     * all its subdirectories).</p> </li> <li> <p> <i>** /!(*.module).ts</i>—All .ts
     * files but not .module.ts</p> </li> <li> <p> <i>*.png , *.jpg</i>—All PNG and
     * JPEG image files in a directory (files with the extensions .png and .jpg).</p>
     * </li> <li> <p> <i>*internal*</i>—All files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i>—All internal-related
     * files in a directory and its subdirectories.</p> </li> </ul> <p>For more
     * examples, see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">Use
     * of Exclude and Include Filters</a> in the Amazon Web Services CLI Command
     * Reference.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    S3DataSourceConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    S3DataSourceConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of glob patterns (patterns that can expand a wildcard pattern into a
     * list of path names that match the given pattern) for certain file names and file
     * types to exclude from your index. If a document matches both an inclusion and
     * exclusion prefix or pattern, the exclusion prefix takes precendence and the
     * document is not indexed. Examples of glob patterns include:</p> <ul> <li> <p>
     * <i>/myapp/config/ *</i>—All files inside config directory.</p> </li> <li> <p>
     * <i>** / *.png</i>—All .png files in all directories.</p> </li> <li> <p>
     * <i>** / *.{png, ico, md}</i>—All .png, .ico or .md files in all directories.</p>
     * </li> <li> <p> <i>/myapp/src/ ** / *.ts</i>—All .ts files inside src directory (and
     * all its subdirectories).</p> </li> <li> <p> <i>** /!(*.module).ts</i>—All .ts
     * files but not .module.ts</p> </li> <li> <p> <i>*.png , *.jpg</i>—All PNG and
     * JPEG image files in a directory (files with the extensions .png and .jpg).</p>
     * </li> <li> <p> <i>*internal*</i>—All files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i>—All internal-related
     * files in a directory and its subdirectories.</p> </li> </ul> <p>For more
     * examples, see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">Use
     * of Exclude and Include Filters</a> in the Amazon Web Services CLI Command
     * Reference.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    S3DataSourceConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    S3DataSourceConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DocumentsMetadataConfiguration& GetDocumentsMetadataConfiguration() const { return m_documentsMetadataConfiguration; }
    inline bool DocumentsMetadataConfigurationHasBeenSet() const { return m_documentsMetadataConfigurationHasBeenSet; }
    template<typename DocumentsMetadataConfigurationT = DocumentsMetadataConfiguration>
    void SetDocumentsMetadataConfiguration(DocumentsMetadataConfigurationT&& value) { m_documentsMetadataConfigurationHasBeenSet = true; m_documentsMetadataConfiguration = std::forward<DocumentsMetadataConfigurationT>(value); }
    template<typename DocumentsMetadataConfigurationT = DocumentsMetadataConfiguration>
    S3DataSourceConfiguration& WithDocumentsMetadataConfiguration(DocumentsMetadataConfigurationT&& value) { SetDocumentsMetadataConfiguration(std::forward<DocumentsMetadataConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source. For the format of the file, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/s3-acl.html">Access control
     * for S3 data sources</a>.</p>
     */
    inline const AccessControlListConfiguration& GetAccessControlListConfiguration() const { return m_accessControlListConfiguration; }
    inline bool AccessControlListConfigurationHasBeenSet() const { return m_accessControlListConfigurationHasBeenSet; }
    template<typename AccessControlListConfigurationT = AccessControlListConfiguration>
    void SetAccessControlListConfiguration(AccessControlListConfigurationT&& value) { m_accessControlListConfigurationHasBeenSet = true; m_accessControlListConfiguration = std::forward<AccessControlListConfigurationT>(value); }
    template<typename AccessControlListConfigurationT = AccessControlListConfiguration>
    S3DataSourceConfiguration& WithAccessControlListConfiguration(AccessControlListConfigurationT&& value) { SetAccessControlListConfiguration(std::forward<AccessControlListConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPrefixes;
    bool m_inclusionPrefixesHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    DocumentsMetadataConfiguration m_documentsMetadataConfiguration;
    bool m_documentsMetadataConfigurationHasBeenSet = false;

    AccessControlListConfiguration m_accessControlListConfiguration;
    bool m_accessControlListConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
