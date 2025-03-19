/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/FileHeaderInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Contains information about the comma-separated value (CSV) file to select
   * from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/CSVInput">AWS
   * API Reference</a></p>
   */
  class CSVInput
  {
  public:
    AWS_GLACIER_API CSVInput() = default;
    AWS_GLACIER_API CSVInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API CSVInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the first line of input. Valid values are <code>None</code>,
     * <code>Ignore</code>, and <code>Use</code>.</p>
     */
    inline FileHeaderInfo GetFileHeaderInfo() const { return m_fileHeaderInfo; }
    inline bool FileHeaderInfoHasBeenSet() const { return m_fileHeaderInfoHasBeenSet; }
    inline void SetFileHeaderInfo(FileHeaderInfo value) { m_fileHeaderInfoHasBeenSet = true; m_fileHeaderInfo = value; }
    inline CSVInput& WithFileHeaderInfo(FileHeaderInfo value) { SetFileHeaderInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used to indicate that a row should be ignored when the
     * character is present at the start of that row.</p>
     */
    inline const Aws::String& GetComments() const { return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    template<typename CommentsT = Aws::String>
    void SetComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments = std::forward<CommentsT>(value); }
    template<typename CommentsT = Aws::String>
    CSVInput& WithComments(CommentsT&& value) { SetComments(std::forward<CommentsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A single character used for escaping the quotation-mark character inside an
     * already escaped value.</p>
     */
    inline const Aws::String& GetQuoteEscapeCharacter() const { return m_quoteEscapeCharacter; }
    inline bool QuoteEscapeCharacterHasBeenSet() const { return m_quoteEscapeCharacterHasBeenSet; }
    template<typename QuoteEscapeCharacterT = Aws::String>
    void SetQuoteEscapeCharacter(QuoteEscapeCharacterT&& value) { m_quoteEscapeCharacterHasBeenSet = true; m_quoteEscapeCharacter = std::forward<QuoteEscapeCharacterT>(value); }
    template<typename QuoteEscapeCharacterT = Aws::String>
    CSVInput& WithQuoteEscapeCharacter(QuoteEscapeCharacterT&& value) { SetQuoteEscapeCharacter(std::forward<QuoteEscapeCharacterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value used to separate individual records from each other.</p>
     */
    inline const Aws::String& GetRecordDelimiter() const { return m_recordDelimiter; }
    inline bool RecordDelimiterHasBeenSet() const { return m_recordDelimiterHasBeenSet; }
    template<typename RecordDelimiterT = Aws::String>
    void SetRecordDelimiter(RecordDelimiterT&& value) { m_recordDelimiterHasBeenSet = true; m_recordDelimiter = std::forward<RecordDelimiterT>(value); }
    template<typename RecordDelimiterT = Aws::String>
    CSVInput& WithRecordDelimiter(RecordDelimiterT&& value) { SetRecordDelimiter(std::forward<RecordDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value used to separate individual fields from each other within a
     * record.</p>
     */
    inline const Aws::String& GetFieldDelimiter() const { return m_fieldDelimiter; }
    inline bool FieldDelimiterHasBeenSet() const { return m_fieldDelimiterHasBeenSet; }
    template<typename FieldDelimiterT = Aws::String>
    void SetFieldDelimiter(FieldDelimiterT&& value) { m_fieldDelimiterHasBeenSet = true; m_fieldDelimiter = std::forward<FieldDelimiterT>(value); }
    template<typename FieldDelimiterT = Aws::String>
    CSVInput& WithFieldDelimiter(FieldDelimiterT&& value) { SetFieldDelimiter(std::forward<FieldDelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value used as an escape character where the field delimiter is part of the
     * value.</p>
     */
    inline const Aws::String& GetQuoteCharacter() const { return m_quoteCharacter; }
    inline bool QuoteCharacterHasBeenSet() const { return m_quoteCharacterHasBeenSet; }
    template<typename QuoteCharacterT = Aws::String>
    void SetQuoteCharacter(QuoteCharacterT&& value) { m_quoteCharacterHasBeenSet = true; m_quoteCharacter = std::forward<QuoteCharacterT>(value); }
    template<typename QuoteCharacterT = Aws::String>
    CSVInput& WithQuoteCharacter(QuoteCharacterT&& value) { SetQuoteCharacter(std::forward<QuoteCharacterT>(value)); return *this;}
    ///@}
  private:

    FileHeaderInfo m_fileHeaderInfo{FileHeaderInfo::NOT_SET};
    bool m_fileHeaderInfoHasBeenSet = false;

    Aws::String m_comments;
    bool m_commentsHasBeenSet = false;

    Aws::String m_quoteEscapeCharacter;
    bool m_quoteEscapeCharacterHasBeenSet = false;

    Aws::String m_recordDelimiter;
    bool m_recordDelimiterHasBeenSet = false;

    Aws::String m_fieldDelimiter;
    bool m_fieldDelimiterHasBeenSet = false;

    Aws::String m_quoteCharacter;
    bool m_quoteCharacterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
