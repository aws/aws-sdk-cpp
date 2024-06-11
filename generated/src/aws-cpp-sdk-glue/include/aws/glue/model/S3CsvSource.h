/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CompressionType.h>
#include <aws/glue/model/S3DirectSourceAdditionalOptions.h>
#include <aws/glue/model/Separator.h>
#include <aws/glue/model/QuoteChar.h>
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
   * <p>Specifies a command-separated value (CSV) data store stored in Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3CsvSource">AWS
   * API Reference</a></p>
   */
  class S3CsvSource
  {
  public:
    AWS_GLUE_API S3CsvSource();
    AWS_GLUE_API S3CsvSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3CsvSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline S3CsvSource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline S3CsvSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline S3CsvSource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Amazon S3 paths to read from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPaths() const{ return m_paths; }
    inline bool PathsHasBeenSet() const { return m_pathsHasBeenSet; }
    inline void SetPaths(const Aws::Vector<Aws::String>& value) { m_pathsHasBeenSet = true; m_paths = value; }
    inline void SetPaths(Aws::Vector<Aws::String>&& value) { m_pathsHasBeenSet = true; m_paths = std::move(value); }
    inline S3CsvSource& WithPaths(const Aws::Vector<Aws::String>& value) { SetPaths(value); return *this;}
    inline S3CsvSource& WithPaths(Aws::Vector<Aws::String>&& value) { SetPaths(std::move(value)); return *this;}
    inline S3CsvSource& AddPaths(const Aws::String& value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }
    inline S3CsvSource& AddPaths(Aws::String&& value) { m_pathsHasBeenSet = true; m_paths.push_back(std::move(value)); return *this; }
    inline S3CsvSource& AddPaths(const char* value) { m_pathsHasBeenSet = true; m_paths.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how the data is compressed. This is generally not necessary if the
     * data has a standard file extension. Possible values are <code>"gzip"</code> and
     * <code>"bzip"</code>).</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }
    inline S3CsvSource& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}
    inline S3CsvSource& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing a JSON list of Unix-style glob patterns to exclude. For
     * example, "[\"**.pdf\"]" excludes all PDF files. </p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const{ return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    inline void SetExclusions(const Aws::Vector<Aws::String>& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }
    inline void SetExclusions(Aws::Vector<Aws::String>&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }
    inline S3CsvSource& WithExclusions(const Aws::Vector<Aws::String>& value) { SetExclusions(value); return *this;}
    inline S3CsvSource& WithExclusions(Aws::Vector<Aws::String>&& value) { SetExclusions(std::move(value)); return *this;}
    inline S3CsvSource& AddExclusions(const Aws::String& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }
    inline S3CsvSource& AddExclusions(Aws::String&& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(std::move(value)); return *this; }
    inline S3CsvSource& AddExclusions(const char* value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target group size in bytes. The default is computed based on the input
     * data size and the size of your cluster. When there are fewer than 50,000 input
     * files, <code>"groupFiles"</code> must be set to <code>"inPartition"</code> for
     * this to take effect.</p>
     */
    inline const Aws::String& GetGroupSize() const{ return m_groupSize; }
    inline bool GroupSizeHasBeenSet() const { return m_groupSizeHasBeenSet; }
    inline void SetGroupSize(const Aws::String& value) { m_groupSizeHasBeenSet = true; m_groupSize = value; }
    inline void SetGroupSize(Aws::String&& value) { m_groupSizeHasBeenSet = true; m_groupSize = std::move(value); }
    inline void SetGroupSize(const char* value) { m_groupSizeHasBeenSet = true; m_groupSize.assign(value); }
    inline S3CsvSource& WithGroupSize(const Aws::String& value) { SetGroupSize(value); return *this;}
    inline S3CsvSource& WithGroupSize(Aws::String&& value) { SetGroupSize(std::move(value)); return *this;}
    inline S3CsvSource& WithGroupSize(const char* value) { SetGroupSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grouping files is turned on by default when the input contains more than
     * 50,000 files. To turn on grouping with fewer than 50,000 files, set this
     * parameter to "inPartition". To disable grouping when there are more than 50,000
     * files, set this parameter to <code>"none"</code>.</p>
     */
    inline const Aws::String& GetGroupFiles() const{ return m_groupFiles; }
    inline bool GroupFilesHasBeenSet() const { return m_groupFilesHasBeenSet; }
    inline void SetGroupFiles(const Aws::String& value) { m_groupFilesHasBeenSet = true; m_groupFiles = value; }
    inline void SetGroupFiles(Aws::String&& value) { m_groupFilesHasBeenSet = true; m_groupFiles = std::move(value); }
    inline void SetGroupFiles(const char* value) { m_groupFilesHasBeenSet = true; m_groupFiles.assign(value); }
    inline S3CsvSource& WithGroupFiles(const Aws::String& value) { SetGroupFiles(value); return *this;}
    inline S3CsvSource& WithGroupFiles(Aws::String&& value) { SetGroupFiles(std::move(value)); return *this;}
    inline S3CsvSource& WithGroupFiles(const char* value) { SetGroupFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, recursively reads files in all subdirectories under the
     * specified paths.</p>
     */
    inline bool GetRecurse() const{ return m_recurse; }
    inline bool RecurseHasBeenSet() const { return m_recurseHasBeenSet; }
    inline void SetRecurse(bool value) { m_recurseHasBeenSet = true; m_recurse = value; }
    inline S3CsvSource& WithRecurse(bool value) { SetRecurse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This option controls the duration in milliseconds after which the s3 listing
     * is likely to be consistent. Files with modification timestamps falling within
     * the last maxBand milliseconds are tracked specially when using JobBookmarks to
     * account for Amazon S3 eventual consistency. Most users don't need to set this
     * option. The default is 900000 milliseconds, or 15 minutes.</p>
     */
    inline int GetMaxBand() const{ return m_maxBand; }
    inline bool MaxBandHasBeenSet() const { return m_maxBandHasBeenSet; }
    inline void SetMaxBand(int value) { m_maxBandHasBeenSet = true; m_maxBand = value; }
    inline S3CsvSource& WithMaxBand(int value) { SetMaxBand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This option specifies the maximum number of files to save from the last
     * maxBand seconds. If this number is exceeded, extra files are skipped and only
     * processed in the next job run.</p>
     */
    inline int GetMaxFilesInBand() const{ return m_maxFilesInBand; }
    inline bool MaxFilesInBandHasBeenSet() const { return m_maxFilesInBandHasBeenSet; }
    inline void SetMaxFilesInBand(int value) { m_maxFilesInBandHasBeenSet = true; m_maxFilesInBand = value; }
    inline S3CsvSource& WithMaxFilesInBand(int value) { SetMaxFilesInBand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional connection options.</p>
     */
    inline const S3DirectSourceAdditionalOptions& GetAdditionalOptions() const{ return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    inline void SetAdditionalOptions(const S3DirectSourceAdditionalOptions& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }
    inline void SetAdditionalOptions(S3DirectSourceAdditionalOptions&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }
    inline S3CsvSource& WithAdditionalOptions(const S3DirectSourceAdditionalOptions& value) { SetAdditionalOptions(value); return *this;}
    inline S3CsvSource& WithAdditionalOptions(S3DirectSourceAdditionalOptions&& value) { SetAdditionalOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the delimiter character. The default is a comma: ",", but any other
     * character can be specified.</p>
     */
    inline const Separator& GetSeparator() const{ return m_separator; }
    inline bool SeparatorHasBeenSet() const { return m_separatorHasBeenSet; }
    inline void SetSeparator(const Separator& value) { m_separatorHasBeenSet = true; m_separator = value; }
    inline void SetSeparator(Separator&& value) { m_separatorHasBeenSet = true; m_separator = std::move(value); }
    inline S3CsvSource& WithSeparator(const Separator& value) { SetSeparator(value); return *this;}
    inline S3CsvSource& WithSeparator(Separator&& value) { SetSeparator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a character to use for escaping. This option is used only when
     * reading CSV files. The default value is <code>none</code>. If enabled, the
     * character which immediately follows is used as-is, except for a small set of
     * well-known escapes (<code>\n</code>, <code>\r</code>, <code>\t</code>, and
     * <code>\0</code>).</p>
     */
    inline const Aws::String& GetEscaper() const{ return m_escaper; }
    inline bool EscaperHasBeenSet() const { return m_escaperHasBeenSet; }
    inline void SetEscaper(const Aws::String& value) { m_escaperHasBeenSet = true; m_escaper = value; }
    inline void SetEscaper(Aws::String&& value) { m_escaperHasBeenSet = true; m_escaper = std::move(value); }
    inline void SetEscaper(const char* value) { m_escaperHasBeenSet = true; m_escaper.assign(value); }
    inline S3CsvSource& WithEscaper(const Aws::String& value) { SetEscaper(value); return *this;}
    inline S3CsvSource& WithEscaper(Aws::String&& value) { SetEscaper(std::move(value)); return *this;}
    inline S3CsvSource& WithEscaper(const char* value) { SetEscaper(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the character to use for quoting. The default is a double quote:
     * <code>'"'</code>. Set this to <code>-1</code> to turn off quoting entirely.</p>
     */
    inline const QuoteChar& GetQuoteChar() const{ return m_quoteChar; }
    inline bool QuoteCharHasBeenSet() const { return m_quoteCharHasBeenSet; }
    inline void SetQuoteChar(const QuoteChar& value) { m_quoteCharHasBeenSet = true; m_quoteChar = value; }
    inline void SetQuoteChar(QuoteChar&& value) { m_quoteCharHasBeenSet = true; m_quoteChar = std::move(value); }
    inline S3CsvSource& WithQuoteChar(const QuoteChar& value) { SetQuoteChar(value); return *this;}
    inline S3CsvSource& WithQuoteChar(QuoteChar&& value) { SetQuoteChar(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether a single record can span multiple
     * lines. This can occur when a field contains a quoted new-line character. You
     * must set this option to True if any record spans multiple lines. The default
     * value is <code>False</code>, which allows for more aggressive file-splitting
     * during parsing.</p>
     */
    inline bool GetMultiline() const{ return m_multiline; }
    inline bool MultilineHasBeenSet() const { return m_multilineHasBeenSet; }
    inline void SetMultiline(bool value) { m_multilineHasBeenSet = true; m_multiline = value; }
    inline S3CsvSource& WithMultiline(bool value) { SetMultiline(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether to treat the first line as a header.
     * The default value is <code>False</code>.</p>
     */
    inline bool GetWithHeader() const{ return m_withHeader; }
    inline bool WithHeaderHasBeenSet() const { return m_withHeaderHasBeenSet; }
    inline void SetWithHeader(bool value) { m_withHeaderHasBeenSet = true; m_withHeader = value; }
    inline S3CsvSource& WithWithHeader(bool value) { SetWithHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether to write the header to output. The
     * default value is <code>True</code>. </p>
     */
    inline bool GetWriteHeader() const{ return m_writeHeader; }
    inline bool WriteHeaderHasBeenSet() const { return m_writeHeaderHasBeenSet; }
    inline void SetWriteHeader(bool value) { m_writeHeaderHasBeenSet = true; m_writeHeader = value; }
    inline S3CsvSource& WithWriteHeader(bool value) { SetWriteHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether to skip the first data line. The
     * default value is <code>False</code>.</p>
     */
    inline bool GetSkipFirst() const{ return m_skipFirst; }
    inline bool SkipFirstHasBeenSet() const { return m_skipFirstHasBeenSet; }
    inline void SetSkipFirst(bool value) { m_skipFirstHasBeenSet = true; m_skipFirst = value; }
    inline S3CsvSource& WithSkipFirst(bool value) { SetSkipFirst(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether to use the advanced SIMD CSV reader
     * along with Apache Arrow based columnar memory formats. Only available in Glue
     * version 3.0.</p>
     */
    inline bool GetOptimizePerformance() const{ return m_optimizePerformance; }
    inline bool OptimizePerformanceHasBeenSet() const { return m_optimizePerformanceHasBeenSet; }
    inline void SetOptimizePerformance(bool value) { m_optimizePerformanceHasBeenSet = true; m_optimizePerformance = value; }
    inline S3CsvSource& WithOptimizePerformance(bool value) { SetOptimizePerformance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data schema for the S3 CSV source.</p>
     */
    inline const Aws::Vector<GlueSchema>& GetOutputSchemas() const{ return m_outputSchemas; }
    inline bool OutputSchemasHasBeenSet() const { return m_outputSchemasHasBeenSet; }
    inline void SetOutputSchemas(const Aws::Vector<GlueSchema>& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = value; }
    inline void SetOutputSchemas(Aws::Vector<GlueSchema>&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas = std::move(value); }
    inline S3CsvSource& WithOutputSchemas(const Aws::Vector<GlueSchema>& value) { SetOutputSchemas(value); return *this;}
    inline S3CsvSource& WithOutputSchemas(Aws::Vector<GlueSchema>&& value) { SetOutputSchemas(std::move(value)); return *this;}
    inline S3CsvSource& AddOutputSchemas(const GlueSchema& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(value); return *this; }
    inline S3CsvSource& AddOutputSchemas(GlueSchema&& value) { m_outputSchemasHasBeenSet = true; m_outputSchemas.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_paths;
    bool m_pathsHasBeenSet = false;

    CompressionType m_compressionType;
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

    Separator m_separator;
    bool m_separatorHasBeenSet = false;

    Aws::String m_escaper;
    bool m_escaperHasBeenSet = false;

    QuoteChar m_quoteChar;
    bool m_quoteCharHasBeenSet = false;

    bool m_multiline;
    bool m_multilineHasBeenSet = false;

    bool m_withHeader;
    bool m_withHeaderHasBeenSet = false;

    bool m_writeHeader;
    bool m_writeHeaderHasBeenSet = false;

    bool m_skipFirst;
    bool m_skipFirstHasBeenSet = false;

    bool m_optimizePerformance;
    bool m_optimizePerformanceHasBeenSet = false;

    Aws::Vector<GlueSchema> m_outputSchemas;
    bool m_outputSchemasHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
