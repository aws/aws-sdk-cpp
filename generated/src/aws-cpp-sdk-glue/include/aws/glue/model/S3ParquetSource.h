/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ParquetCompressionType.h>
#include <aws/glue/model/S3DirectSourceAdditionalOptions.h>
#include <aws/glue/model/GlueSchema.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an Apache Parquet data store stored in Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3ParquetSource">AWS
   * API Reference</a></p>
   */
  class S3ParquetSource
  {
  public:
    AWS_GLUE_API S3ParquetSource();
    AWS_GLUE_API S3ParquetSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3ParquetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data store.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline S3ParquetSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline S3ParquetSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline S3ParquetSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3ParquetSource& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3ParquetSource& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3ParquetSource& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3ParquetSource& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline S3ParquetSource& AddPaths(const char* value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }


    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline const ParquetCompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline void SetCompressionType(const ParquetCompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline void SetCompressionType(ParquetCompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline S3ParquetSource& WithCompressionType(const ParquetCompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline S3ParquetSource& WithCompressionType(ParquetCompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const{ return m_exclusions; }

    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }

    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline void SetExclusions(const Aws::Vector<Aws::String>& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }

    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline void SetExclusions(Aws::Vector<Aws::String>&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }

    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline S3ParquetSource& WithExclusions(const Aws::Vector<Aws::String>& value) { SetExclusions(value); return *this;}

    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline S3ParquetSource& WithExclusions(Aws::Vector<Aws::String>&& value) { SetExclusions(std::move(value)); return *this;}

    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline S3ParquetSource& AddExclusions(const Aws::String& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }

    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline S3ParquetSource& AddExclusions(Aws::String&& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(std::move(value)); return *this; }

    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline S3ParquetSource& AddExclusions(const char* value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }


    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline const Aws::String& GetGroupSize() const{ return m_groupSize; }

    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline bool GroupSizeHasBeenSet() const { return m_groupSizeHasBeenSet; }

    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline void SetGroupSize(const Aws::String& value) { m_groupSizeHasBeenSet = true; m_groupSize = value; }

    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline void SetGroupSize(Aws::String&& value) { m_groupSizeHasBeenSet = true; m_groupSize = std::move(value); }

    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline void SetGroupSize(const char* value) { m_groupSizeHasBeenSet = true; m_groupSize.assign(value); }

    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline S3ParquetSource& WithGroupSize(const Aws::String& value) { SetGroupSize(value); return *this;}

    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline S3ParquetSource& WithGroupSize(Aws::String&& value) { SetGroupSize(std::move(value)); return *this;}

    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline S3ParquetSource& WithGroupSize(const char* value) { SetGroupSize(value); return *this;}


    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline const Aws::String& GetGroupFiles() const{ return m_groupFiles; }

    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline bool GroupFilesHasBeenSet() const { return m_groupFilesHasBeenSet; }

    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline void SetGroupFiles(const Aws::String& value) { m_groupFilesHasBeenSet = true; m_groupFiles = value; }

    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline void SetGroupFiles(Aws::String&& value) { m_groupFilesHasBeenSet = true; m_groupFiles = std::move(value); }

    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline void SetGroupFiles(const char* value) { m_groupFilesHasBeenSet = true; m_groupFiles.assign(value); }

    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline S3ParquetSource& WithGroupFiles(const Aws::String& value) { SetGroupFiles(value); return *this;}

    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline S3ParquetSource& WithGroupFiles(Aws::String&& value) { SetGroupFiles(std::move(value)); return *this;}

    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline S3ParquetSource& WithGroupFiles(const char* value) { SetGroupFiles(value); return *this;}


    /**
     * <p>If set to true, recursively reads files in all subdirectories under the
     * specified paths.</p>
     */
    inline bool GetRecurse() const{ return m_recurse; }

    /**
     * <p>If set to true, recursively reads files in all subdirectories under the
     * specified paths.</p>
     */
    inline bool RecurseHasBeenSet() const { return m_recurseHasBeenSet; }

    /**
     * <p>If set to true, recursively reads files in all subdirectories under the
     * specified paths.</p>
     */
    inline void SetRecurse(bool value) { m_recurseHasBeenSet = true; m_recurse = value; }

    /**
     * <p>If set to true, recursively reads files in all subdirectories under the
     * specified paths.</p>
     */
    inline S3ParquetSource& WithRecurse(bool value) { SetRecurse(value); return *this;}


    /**
     * <p>This option controls the duration in milliseconds after which the s3 listing
     * is likely to be consistent. Files with modification timestamps falling within
     * the last maxBand milliseconds are tracked specially when using JobBookmarks to
     * account for Amazon S3 eventual consistency. Most users don't need to set this
     * option. The default is 900000 milliseconds, or 15 minutes.</p>
     */
    inline int GetMaxBand() const{ return m_maxBand; }

    /**
     * <p>This option controls the duration in milliseconds after which the s3 listing
     * is likely to be consistent. Files with modification timestamps falling within
     * the last maxBand milliseconds are tracked specially when using JobBookmarks to
     * account for Amazon S3 eventual consistency. Most users don't need to set this
     * option. The default is 900000 milliseconds, or 15 minutes.</p>
     */
    inline bool MaxBandHasBeenSet() const { return m_maxBandHasBeenSet; }

    /**
     * <p>This option controls the duration in milliseconds after which the s3 listing
     * is likely to be consistent. Files with modification timestamps falling within
     * the last maxBand milliseconds are tracked specially when using JobBookmarks to
     * account for Amazon S3 eventual consistency. Most users don't need to set this
     * option. The default is 900000 milliseconds, or 15 minutes.</p>
     */
    inline void SetMaxBand(int value) { m_maxBandHasBeenSet = true; m_maxBand = value; }

    /**
     * <p>This option controls the duration in milliseconds after which the s3 listing
     * is likely to be consistent. Files with modification timestamps falling within
     * the last maxBand milliseconds are tracked specially when using JobBookmarks to
     * account for Amazon S3 eventual consistency. Most users don't need to set this
     * option. The default is 900000 milliseconds, or 15 minutes.</p>
     */
    inline S3ParquetSource& WithMaxBand(int value) { SetMaxBand(value); return *this;}


    /**
     * <p>This option specifies the maximum number of files to save from the last
     * maxBand seconds. If this number is exceeded, extra files are skipped and only
     * processed in the next job run.</p>
     */
    inline int GetMaxFilesInBand() const{ return m_maxFilesInBand; }

    /**
     * <p>This option specifies the maximum number of files to save from the last
     * maxBand seconds. If this number is exceeded, extra files are skipped and only
     * processed in the next job run.</p>
     */
    inline bool MaxFilesInBandHasBeenSet() const { return m_maxFilesInBandHasBeenSet; }

    /**
     * <p>This option specifies the maximum number of files to save from the last
     * maxBand seconds. If this number is exceeded, extra files are skipped and only
     * processed in the next job run.</p>
     */
    inline void SetMaxFilesInBand(int value) { m_maxFilesInBandHasBeenSet = true; m_maxFilesInBand = value; }

    /**
     * <p>This option specifies the maximum number of files to save from the last
     * maxBand seconds. If this number is exceeded, extra files are skipped and only
     * processed in the next job run.</p>
     */
    inline S3ParquetSource& WithMaxFilesInBand(int value) { SetMaxFilesInBand(value); return *this;}


    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const S3DirectSourceAdditionalOptions& GetAdditionalOptions() const{ return m_additionalOptions; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline void SetAdditionalOptions(const S3DirectSourceAdditionalOptions& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline void SetAdditionalOptions(S3DirectSourceAdditionalOptions&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3ParquetSource& WithAdditionalOptions(const S3DirectSourceAdditionalOptions& value) { SetAdditionalOptions(value); return *this;}

    /**
     * <p>Specifies additional connection options.</p>
     */
    inline S3ParquetSource& WithAdditionalOptions(S3DirectSourceAdditionalOptions&& value) { SetAdditionalOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }

    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }

    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }

    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }

    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline S3ParquetSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}

    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline S3ParquetSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}

    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline S3ParquetSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }

    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline S3ParquetSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    ParquetCompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusions;
    bool m_exclusionsHasBeenSet = false;

    Aws::String m_groupSize;
    bool m_groupSizeHasBeenSet = false;

    Aws::String m_groupFiles;
    bool m_groupFilesHasBeenSet = false;

    bool m_recurse;
    bool m_recurseHasBeenSet = false;

    int m_maxBand;
    bool m_maxBandHasBeenSet = false;

    int m_maxFilesInBand;
    bool m_maxFilesInBandHasBeenSet = false;

    S3DirectSourceAdditionalOptions m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
