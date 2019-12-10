/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Provides configuration information for a data source to index documents in an
   * Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/S3DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API S3DataSourceConfiguration
  {
  public:
    S3DataSourceConfiguration();
    S3DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    S3DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
     */
    inline S3DataSourceConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
     */
    inline S3DataSourceConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
     */
    inline S3DataSourceConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
     */
    inline S3DataSourceConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of glob patterns for documents that should not be indexed. If a
     * document that matches an inclusion prefix also matches an exclusion pattern, the
     * document is not indexed.</p> <p>For more information about glob patterns, see <a
     * href="http://wikipedia.org/wiki/Glob_%28programming%29">glob (programming)</a>
     * in <i>Wikipedia</i>.</p>
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
     * files for the data source.</p>
     */
    inline const AccessControlListConfiguration& GetAccessControlListConfiguration() const{ return m_accessControlListConfiguration; }

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source.</p>
     */
    inline bool AccessControlListConfigurationHasBeenSet() const { return m_accessControlListConfigurationHasBeenSet; }

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source.</p>
     */
    inline void SetAccessControlListConfiguration(const AccessControlListConfiguration& value) { m_accessControlListConfigurationHasBeenSet = true; m_accessControlListConfiguration = value; }

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source.</p>
     */
    inline void SetAccessControlListConfiguration(AccessControlListConfiguration&& value) { m_accessControlListConfigurationHasBeenSet = true; m_accessControlListConfiguration = std::move(value); }

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source.</p>
     */
    inline S3DataSourceConfiguration& WithAccessControlListConfiguration(const AccessControlListConfiguration& value) { SetAccessControlListConfiguration(value); return *this;}

    /**
     * <p>Provides the path to the S3 bucket that contains the user context filtering
     * files for the data source.</p>
     */
    inline S3DataSourceConfiguration& WithAccessControlListConfiguration(AccessControlListConfiguration&& value) { SetAccessControlListConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::Vector<Aws::String> m_inclusionPrefixes;
    bool m_inclusionPrefixesHasBeenSet;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet;

    DocumentsMetadataConfiguration m_documentsMetadataConfiguration;
    bool m_documentsMetadataConfigurationHasBeenSet;

    AccessControlListConfiguration m_accessControlListConfiguration;
    bool m_accessControlListConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
