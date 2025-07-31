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
   * <p>Specifies an S3 Excel data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3ExcelSource">AWS
   * API Reference</a></p>
   */
  class S3ExcelSource
  {
  public:
    AWS_GLUE_API S3ExcelSource() = default;
    AWS_GLUE_API S3ExcelSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3ExcelSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the S3 Excel data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    S3ExcelSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 paths where the Excel files are located.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const { return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    template<typename PathsT = Aws::Vector<Aws::String>>
    void SetPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths = std::forward<PathsT>(value); }
    template<typename PathsT = Aws::Vector<Aws::String>>
    S3ExcelSource& WithPaths(PathsT&& value) { SetPaths(std::forward<PathsT>(value)); return *this;}
    template<typename PathsT = Aws::String>
    S3ExcelSource& AddPaths(PathsT&& value) { m_pathsHasBeenSet = true; m_paths.emplace_back(std::forward<PathsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The compression format used for the Excel files.</p>
     */
    inline ParquetCompressionType GetCompressionType() const { return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(ParquetCompressionType value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline S3ExcelSource& WithCompressionType(ParquetCompressionType value) { SetCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Patterns to exclude specific files or paths from processing.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const { return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    template<typename ExclusionsT = Aws::Vector<Aws::String>>
    void SetExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::forward<ExclusionsT>(value); }
    template<typename ExclusionsT = Aws::Vector<Aws::String>>
    S3ExcelSource& WithExclusions(ExclusionsT&& value) { SetExclusions(std::forward<ExclusionsT>(value)); return *this;}
    template<typename ExclusionsT = Aws::String>
    S3ExcelSource& AddExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions.emplace_back(std::forward<ExclusionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the size of file groups for batch processing.</p>
     */
    inline const Aws::String& GetGroupSize() const { return m_groupSize; }
    inline bool GroupSizeHasBeenSet() const { return m_groupSizeHasBeenSet; }
    template<typename GroupSizeT = Aws::String>
    void SetGroupSize(GroupSizeT&& value) { m_groupSizeHasBeenSet = true; m_groupSize = std::forward<GroupSizeT>(value); }
    template<typename GroupSizeT = Aws::String>
    S3ExcelSource& WithGroupSize(GroupSizeT&& value) { SetGroupSize(std::forward<GroupSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how files should be grouped for processing.</p>
     */
    inline const Aws::String& GetGroupFiles() const { return m_groupFiles; }
    inline bool GroupFilesHasBeenSet() const { return m_groupFilesHasBeenSet; }
    template<typename GroupFilesT = Aws::String>
    void SetGroupFiles(GroupFilesT&& value) { m_groupFilesHasBeenSet = true; m_groupFiles = std::forward<GroupFilesT>(value); }
    template<typename GroupFilesT = Aws::String>
    S3ExcelSource& WithGroupFiles(GroupFilesT&& value) { SetGroupFiles(std::forward<GroupFilesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to recursively process subdirectories.</p>
     */
    inline bool GetRecurse() const { return m_recurse; }
    inline bool RecurseHasBeenSet() const { return m_recurseHasBeenSet; }
    inline void SetRecurse(bool value) { m_recurseHasBeenSet = true; m_recurse = value; }
    inline S3ExcelSource& WithRecurse(bool value) { SetRecurse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of processing bands to use.</p>
     */
    inline int GetMaxBand() const { return m_maxBand; }
    inline bool MaxBandHasBeenSet() const { return m_maxBandHasBeenSet; }
    inline void SetMaxBand(int value) { m_maxBandHasBeenSet = true; m_maxBand = value; }
    inline S3ExcelSource& WithMaxBand(int value) { SetMaxBand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of files to process in each band.</p>
     */
    inline int GetMaxFilesInBand() const { return m_maxFilesInBand; }
    inline bool MaxFilesInBandHasBeenSet() const { return m_maxFilesInBandHasBeenSet; }
    inline void SetMaxFilesInBand(int value) { m_maxFilesInBandHasBeenSet = true; m_maxFilesInBand = value; }
    inline S3ExcelSource& WithMaxFilesInBand(int value) { SetMaxFilesInBand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional configuration options for S3 direct source processing.</p>
     */
    inline const S3DirectSourceAdditionalOptions& GetAdditionalOptions() const { return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    template<typename AdditionalOptionsT = S3DirectSourceAdditionalOptions>
    void SetAdditionalOptions(AdditionalOptionsT&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::forward<AdditionalOptionsT>(value); }
    template<typename AdditionalOptionsT = S3DirectSourceAdditionalOptions>
    S3ExcelSource& WithAdditionalOptions(AdditionalOptionsT&& value) { SetAdditionalOptions(std::forward<AdditionalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows to process from each Excel file.</p>
     */
    inline long long GetNumberRows() const { return m_numberRows; }
    inline bool NumberRowsHasBeenSet() const { return m_numberRowsHasBeenSet; }
    inline void SetNumberRows(long long value) { m_numberRowsHasBeenSet = true; m_numberRows = value; }
    inline S3ExcelSource& WithNumberRows(long long value) { SetNumberRows(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows to skip at the end of each Excel file.</p>
     */
    inline int GetSkipFooter() const { return m_skipFooter; }
    inline bool SkipFooterHasBeenSet() const { return m_skipFooterHasBeenSet; }
    inline void SetSkipFooter(int value) { m_skipFooterHasBeenSet = true; m_skipFooter = value; }
    inline S3ExcelSource& WithSkipFooter(int value) { SetSkipFooter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Glue schemas to apply to the processed data.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const { return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    void SetOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::forward<OutputSchemasT>(value); }
    template<typename OutputSchemasT = Aws::Vector<GlueSchema>>
    S3ExcelSource& WithOutputSchemas(OutputSchemasT&& value) { SetOutputSchemas(std::forward<OutputSchemasT>(value)); return *this;}
    template<typename OutputSchemasT = GlueSchema>
    S3ExcelSource& AddOutputSchemas(OutputSchemasT&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.emplace_back(std::forward<OutputSchemasT>(value)); return *this; }
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

    long long m_numberRows{0};
    bool m_numberRowsHasBeenSet = false;

    int m_skipFooter{0};
    bool m_skipFooterHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
