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
    AWS_GLUE_API S3ParquetSource() = default;
    AWS_GLUE_API S3ParquetSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3ParquetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3ParquetSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const { return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    template<typename PathsT = Aws::Vector<Aws::String>>
    void SetPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths = std::forward<PathsT>(value); }
    template<typename PathsT = Aws::Vector<Aws::String>>
    S3ParquetSource& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    template<typename PathsT = Aws::String>
    S3ParquetSource& AddPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths.emplace_back(std::forward<PathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline ParquetCompressionType GetCompressionType() const { return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(ParquetCompressionType value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline S3ParquetSource& WithCompressionType(ParquetCompressionType value) { SetCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const { return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    template<typename ExclusionsT = Aws::Vector<Aws::String>>
    void SetExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::forward<ExclusionsT>(value); }
    template<typename ExclusionsT = Aws::Vector<Aws::String>>
    S3ParquetSource& WithExclusions(ExclusionsT&& value) { SetExclusions(std::forward<ExclusionsT>(value)); return *this;}
    template<typename ExclusionsT = Aws::String>
    S3ParquetSource& AddExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions.emplace_back(std::forward<ExclusionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline const Aws::String& GetGroupSize() const { return m_groupSize; }
    inline bool GroupSizeHasBeenSet() const { return m_groupSizeHasBeenSet; }
    template<typename GroupSizeT = Aws::String>
    void SetGroupSize(GroupSizeT&& value) { m_groupSizeHasBeenSet = true; m_groupSize = std::forward<GroupSizeT>(value); }
    template<typename GroupSizeT = Aws::String>
    S3ParquetSource& WithGroupSize(GroupSizeT&& value) { SetGroupSize(std::forward<GroupSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline const Aws::String& GetGroupFiles() const { return m_groupFiles; }
    inline bool GroupFilesHasBeenSet() const { return m_groupFilesHasBeenSet; }
    template<typename GroupFilesT = Aws::String>
    void SetGroupFiles(GroupFilesT&& value) { m_groupFilesHasBeenSet = true; m_groupFiles = std::forward<GroupFilesT>(value); }
    template<typename GroupFilesT = Aws::String>
    S3ParquetSource& WithGroupFiles(GroupFilesT&& value) { SetGroupFiles(std::forward<GroupFilesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, recursively reads files in all subdirectories under the
     * specified paths.</p>
     */
    inline bool GetRecurse() const { return m_recurse; }
    inline bool RecurseHasBeenSet() const { return m_recurseHasBeenSet; }
    inline void SetRecurse(bool value) { m_recurseHasBeenSet = true; m_recurse = value; }
    inline S3ParquetSource& WithRecurse(bool value) { SetRecurse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This option controls the duration in milliseconds after which the s3 listing
     * is likely to be consistent. Files with modification timestamps falling within
     * the last maxBand milliseconds are tracked specially when using JobBookmarks to
     * account for Amazon S3 eventual consistency. Most users don't need to set this
     * option. The default is 900000 milliseconds, or 15 minutes.</p>
     */
    inline int GetMaxBand() const { return m_maxBand; }
    inline bool MaxBandHasBeenSet() const { return m_maxBandHasBeenSet; }
    inline void SetMaxBand(int value) { m_maxBandHasBeenSet = true; m_maxBand = value; }
    inline S3ParquetSource& WithMaxBand(int value) { SetMaxBand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This option specifies the maximum number of files to save from the last
     * maxBand seconds. If this number is exceeded, extra files are skipped and only
     * processed in the next job run.</p>
     */
    inline int GetMaxFilesInBand() const { return m_maxFilesInBand; }
    inline bool MaxFilesInBandHasBeenSet() const { return m_maxFilesInBandHasBeenSet; }
    inline void SetMaxFilesInBand(int value) { m_maxFilesInBandHasBeenSet = true; m_maxFilesInBand = value; }
    inline S3ParquetSource& WithMaxFilesInBand(int value) { SetMaxFilesInBand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const S3DirectSourceAdditionalOptions& GetAdditionalOptions() const { return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    template<typename AdditionalOptionsT = S3DirectSourceAdditionalOptions>
    void SetAdditionalOptions(AdditionalOptionsT&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::forward<AdditionalOptionsT>(value); }
    template<typename AdditionalOptionsT = S3DirectSourceAdditionalOptions>
    S3ParquetSource& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the S3 Parquet source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    S3ParquetSource& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    S3ParquetSource& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    ParquetCompressionType m_compressionType{ParquetCompressionType::NOT_SET};
    bool m_compressionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusions;
    bool m_exclusionsHasBeenSet = false;

    Aws::String m_groupSize;
    bool m_groupSizeHasBeenSet = false;

    Aws::String m_groupFiles;
    bool m_groupFilesHasBeenSet = false;

    bool m_recurse{false};
    bool m_recurseHasBeenSet = false;

    int m_maxBand{0};
    bool m_maxBandHasBeenSet = false;

    int m_maxFilesInBand{0};
    bool m_maxFilesInBandHasBeenSet = false;

    S3DirectSourceAdditionalOptions m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
