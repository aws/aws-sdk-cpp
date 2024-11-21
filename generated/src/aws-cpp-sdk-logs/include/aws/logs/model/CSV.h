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
    AWS_CLOUDWATCHLOGS_API CSV();
    AWS_CLOUDWATCHLOGS_API CSV(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API CSV& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The character used used as a text qualifier for a single column of data. If
     * you omit this, the double quotation mark <code>"</code> character is used.</p>
     */
    inline const Aws::String& GetQuoteCharacter() const{ return m_quoteCharacter; }
    inline bool QuoteCharacterHasBeenSet() const { return m_quoteCharacterHasBeenSet; }
    inline void SetQuoteCharacter(const Aws::String& value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter = value; }
    inline void SetQuoteCharacter(Aws::String&& value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter = std::move(value); }
    inline void SetQuoteCharacter(const char* value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter.assign(value); }
    inline CSV& WithQuoteCharacter(const Aws::String& value) { SetQuoteCharacter(value); return *this;}
    inline CSV& WithQuoteCharacter(Aws::String&& value) { SetQuoteCharacter(std::move(value)); return *this;}
    inline CSV& WithQuoteCharacter(const char* value) { SetQuoteCharacter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character used to separate each column in the original comma-separated
     * value log event. If you omit this, the processor looks for the comma
     * <code>,</code> character as the delimiter.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }
    inline CSV& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}
    inline CSV& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}
    inline CSV& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of names to use for the columns in the transformed log event.</p>
     * <p>If you omit this, default column names (<code>[column_1, column_2
     * ...]</code>) are used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumns() const{ return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    inline void SetColumns(const Aws::Vector<Aws::String>& value) { m_columnsHasBeenSet = true; m_columns = value; }
    inline void SetColumns(Aws::Vector<Aws::String>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }
    inline CSV& WithColumns(const Aws::Vector<Aws::String>& value) { SetColumns(value); return *this;}
    inline CSV& WithColumns(Aws::Vector<Aws::String>&& value) { SetColumns(std::move(value)); return *this;}
    inline CSV& AddColumns(const Aws::String& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }
    inline CSV& AddColumns(Aws::String&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }
    inline CSV& AddColumns(const char* value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The path to the field in the log event that has the comma separated values to
     * be parsed. If you omit this value, the whole log message is processed.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline CSV& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline CSV& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline CSV& WithSource(const char* value) { SetSource(value); return *this;}
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
