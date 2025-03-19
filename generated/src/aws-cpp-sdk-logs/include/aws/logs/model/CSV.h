/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>The <code>CSV</code> processor parses comma-separated values (CSV) from the
   * log events into columns.</p> <p>For more information about this processor
   * including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-csv">
   * csv</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CSV">AWS API
   * Reference</a></p>
   */
  class CSV
  {
  public:
    AWS_CLOUDWATCHLOGS_API CSV() = default;
    AWS_CLOUDWATCHLOGS_API CSV(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API CSV& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The character used used as a text qualifier for a single column of data. If
     * you omit this, the double quotation mark <code>"</code> character is used.</p>
     */
    inline const Aws::String& GetQuoteCharacter() const { return m_quoteCharacter; }
    inline bool QuoteCharacterHasBeenSet() const { return m_quoteCharacterHasBeenSet; }
    template<typename QuoteCharacterT = Aws::String>
    void SetQuoteCharacter(QuoteCharacterT&& value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter = std::forward<QuoteCharacterT>(value); }
    template<typename QuoteCharacterT = Aws::String>
    CSV& WithQuoteCharacter(QuoteCharacterT&& value) { SetQuoteCharacter(std::forward<QuoteCharacterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character used to separate each column in the original comma-separated
     * value log event. If you omit this, the processor looks for the comma
     * <code>,</code> character as the delimiter.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    CSV& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of names to use for the columns in the transformed log event.</p>
     * <p>If you omit this, default column names (<code>[column_1, column_2
     * ...]</code>) are used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<Aws::String>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<Aws::String>>
    CSV& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = Aws::String>
    CSV& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The path to the field in the log event that has the comma separated values to
     * be parsed. If you omit this value, the whole log message is processed.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    CSV& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_quoteCharacter;
    bool m_quoteCharacterHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::Vector<Aws::String> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
