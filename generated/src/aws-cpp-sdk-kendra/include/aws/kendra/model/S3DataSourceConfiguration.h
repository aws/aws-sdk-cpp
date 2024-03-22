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
    AWS_KENDRA_API S3DataSourceConfiguration();
    AWS_KENDRA_API S3DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API S3DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline S3DataSourceConfiguration& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline S3DataSourceConfiguration& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket that contains the documents.</p>
     */
    inline S3DataSourceConfiguration& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPrefixes() const{ return m_inclusionPrefixes; }

    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline bool InclusionPrefixesHasBeenSet() const { return m_inclusionPrefixesHasBeenSet; }

    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline void SetInclusionPrefixes(const Aws::Vector<Aws::String>& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes = value; }

    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline void SetInclusionPrefixes(Aws::Vector<Aws::String>&& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes = std::move(value); }

    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline S3DataSourceConfiguration& WithInclusionPrefixes(const Aws::Vector<Aws::String>& value) { SetInclusionPrefixes(value); return *this;}

    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline S3DataSourceConfiguration& WithInclusionPrefixes(Aws::Vector<Aws::String>&& value) { SetInclusionPrefixes(std::move(value)); return *this;}

    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline S3DataSourceConfiguration& AddInclusionPrefixes(const Aws::String& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes.push_back(value); return *this; }

    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline S3DataSourceConfiguration& AddInclusionPrefixes(Aws::String&& value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of S3 prefixes for the documents that should be included in the
     * index.</p>
     */
    inline S3DataSourceConfiguration& AddInclusionPrefixes(const char* value) { m_inclusionPrefixesHasBeenSet = true; m_inclusionPrefixes.push_back(value); return *this; }


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
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

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
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

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
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

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
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

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
    inline S3DataSourceConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

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
    inline S3DataSourceConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

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
    inline S3DataSourceConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

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
    inline S3DataSourceConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

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
    inline S3DataSourceConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


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
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

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
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

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
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

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
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

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
    inline S3DataSourceConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

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
    inline S3DataSourceConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

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
    inline S3DataSourceConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

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
    inline S3DataSourceConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

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
    inline S3DataSourceConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }


    
    inline const DocumentsMetadataConfiguration& GetDocumentsMetadataConfiguration() const{ return m_documentsMetadataConfiguration; }

    
    inline bool DocumentsMetadataConfigurationHasBeenSet() const { return m_documentsMetadataConfigurationHasBeenSet; }

    
    inline void SetDocumentsMetadataConfiguration(const DocumentsMetadataConfiguration& value) { m_documentsMetadataConfigurationHasBeenSet = true; m_documentsMetadataConfiguration = value; }

    
    inline void SetDocumentsMetadataConfiguration(DocumentsMetadataConfiguration&& value) { m_documentsMetadataConfigurationHasBeenSet = true; m_documentsMetadataConfiguration = std::move(value); }

    
    inline S3DataSourceConfiguration& WithDocumentsMetadataConfiguration(const DocumentsMetadataConfiguration& value) { SetDocumentsMetadataConfiguration(value); return *this;}

    
    inline S3DataSourceConfiguration& WithDocumentsMetadataConfiguration(DocumentsMetadataConfiguration&& value) { SetDocumentsMetadataConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source. For the format of the file, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/s3-acl.html">Access control
     * for S3 data sources</a>.</p>
     */
    inline const AccessControlListConfiguration& GetAccessControlListConfiguration() const{ return m_accessControlListConfiguration; }

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source. For the format of the file, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/s3-acl.html">Access control
     * for S3 data sources</a>.</p>
     */
    inline bool AccessControlListConfigurationHasBeenSet() const { return m_accessControlListConfigurationHasBeenSet; }

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source. For the format of the file, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/s3-acl.html">Access control
     * for S3 data sources</a>.</p>
     */
    inline void SetAccessControlListConfiguration(const AccessControlListConfiguration& value) { m_accessControlListConfigurationHasBeenSet = true; m_accessControlListConfiguration = value; }

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source. For the format of the file, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/s3-acl.html">Access control
     * for S3 data sources</a>.</p>
     */
    inline void SetAccessControlListConfiguration(AccessControlListConfiguration&& value) { m_accessControlListConfigurationHasBeenSet = true; m_accessControlListConfiguration = std::move(value); }

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source. For the format of the file, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/s3-acl.html">Access control
     * for S3 data sources</a>.</p>
     */
    inline S3DataSourceConfiguration& WithAccessControlListConfiguration(const AccessControlListConfiguration& value) { SetAccessControlListConfiguration(value); return *this;}

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source. For the format of the file, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/s3-acl.html">Access control
     * for S3 data sources</a>.</p>
     */
    inline S3DataSourceConfiguration& WithAccessControlListConfiguration(AccessControlListConfiguration&& value) { SetAccessControlListConfiguration(std::move(value)); return *this;}

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
