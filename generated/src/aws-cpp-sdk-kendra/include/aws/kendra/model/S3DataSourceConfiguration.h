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
   * <p>Provides the configuration information to connect to an Amazon S3
   * bucket.</p><p><h3>See Also:</h3>   <a
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
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of glob patterns for documents that should be indexed. If a document
     * that matches an inclusion pattern also matches an exclusion pattern, the
     * document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.txt</i> will include all text files in a directory
     * (files with the extension .txt).</p> </li> <li> <p> <i>** / *.txt</i> will include
     * all text files in a directory and its subdirectories.</p> </li> <li> <p>
     * <i>*tax*</i> will include all files in a directory that contain 'tax' in the
     * file name, such as 'tax', 'taxes', 'income_tax'.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
     */
    inline S3DataSourceConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix or inclusion pattern also matches an
     * exclusion pattern, the document is not indexed.</p> <p>Some <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/s3/#use-of-exclude-and-include-filters">examples</a>
     * are:</p> <ul> <li> <p> <i>*.png , *.jpg</i> will exclude all PNG and JPEG image
     * files in a directory (files with the extensions .png and .jpg).</p> </li> <li>
     * <p> <i>*internal*</i> will exclude all files in a directory that contain
     * 'internal' in the file name, such as 'internal', 'internal_only',
     * 'company_internal'.</p> </li> <li> <p> <i>** / *internal*</i> will exclude all
     * internal-related files in a directory and its subdirectories.</p> </li> </ul>
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
