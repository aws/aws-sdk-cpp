/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Read options for an annotation import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReadOptions">AWS
   * API Reference</a></p>
   */
  class ReadOptions
  {
  public:
    AWS_OMICS_API ReadOptions();
    AWS_OMICS_API ReadOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file's comment character.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>The file's comment character.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>The file's comment character.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>The file's comment character.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>The file's comment character.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>The file's comment character.</p>
     */
    inline ReadOptions& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>The file's comment character.</p>
     */
    inline ReadOptions& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>The file's comment character.</p>
     */
    inline ReadOptions& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The file's encoding.</p>
     */
    inline const Aws::String& GetEncoding() const{ return m_encoding; }

    /**
     * <p>The file's encoding.</p>
     */
    inline bool EncodingHasBeenSet() const { return m_encodingHasBeenSet; }

    /**
     * <p>The file's encoding.</p>
     */
    inline void SetEncoding(const Aws::String& value) { m_encodingHasBeenSet = true; m_encoding = value; }

    /**
     * <p>The file's encoding.</p>
     */
    inline void SetEncoding(Aws::String&& value) { m_encodingHasBeenSet = true; m_encoding = std::move(value); }

    /**
     * <p>The file's encoding.</p>
     */
    inline void SetEncoding(const char* value) { m_encodingHasBeenSet = true; m_encoding.assign(value); }

    /**
     * <p>The file's encoding.</p>
     */
    inline ReadOptions& WithEncoding(const Aws::String& value) { SetEncoding(value); return *this;}

    /**
     * <p>The file's encoding.</p>
     */
    inline ReadOptions& WithEncoding(Aws::String&& value) { SetEncoding(std::move(value)); return *this;}

    /**
     * <p>The file's encoding.</p>
     */
    inline ReadOptions& WithEncoding(const char* value) { SetEncoding(value); return *this;}


    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline const Aws::String& GetEscape() const{ return m_escape; }

    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline bool EscapeHasBeenSet() const { return m_escapeHasBeenSet; }

    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline void SetEscape(const Aws::String& value) { m_escapeHasBeenSet = true; m_escape = value; }

    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline void SetEscape(Aws::String&& value) { m_escapeHasBeenSet = true; m_escape = std::move(value); }

    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline void SetEscape(const char* value) { m_escapeHasBeenSet = true; m_escape.assign(value); }

    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline ReadOptions& WithEscape(const Aws::String& value) { SetEscape(value); return *this;}

    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline ReadOptions& WithEscape(Aws::String&& value) { SetEscape(std::move(value)); return *this;}

    /**
     * <p>A character for escaping quotes in the file.</p>
     */
    inline ReadOptions& WithEscape(const char* value) { SetEscape(value); return *this;}


    /**
     * <p>Whether quotes need to be escaped in the file.</p>
     */
    inline bool GetEscapeQuotes() const{ return m_escapeQuotes; }

    /**
     * <p>Whether quotes need to be escaped in the file.</p>
     */
    inline bool EscapeQuotesHasBeenSet() const { return m_escapeQuotesHasBeenSet; }

    /**
     * <p>Whether quotes need to be escaped in the file.</p>
     */
    inline void SetEscapeQuotes(bool value) { m_escapeQuotesHasBeenSet = true; m_escapeQuotes = value; }

    /**
     * <p>Whether quotes need to be escaped in the file.</p>
     */
    inline ReadOptions& WithEscapeQuotes(bool value) { SetEscapeQuotes(value); return *this;}


    /**
     * <p>Whether the file has a header row.</p>
     */
    inline bool GetHeader() const{ return m_header; }

    /**
     * <p>Whether the file has a header row.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>Whether the file has a header row.</p>
     */
    inline void SetHeader(bool value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>Whether the file has a header row.</p>
     */
    inline ReadOptions& WithHeader(bool value) { SetHeader(value); return *this;}


    /**
     * <p>A line separator for the file.</p>
     */
    inline const Aws::String& GetLineSep() const{ return m_lineSep; }

    /**
     * <p>A line separator for the file.</p>
     */
    inline bool LineSepHasBeenSet() const { return m_lineSepHasBeenSet; }

    /**
     * <p>A line separator for the file.</p>
     */
    inline void SetLineSep(const Aws::String& value) { m_lineSepHasBeenSet = true; m_lineSep = value; }

    /**
     * <p>A line separator for the file.</p>
     */
    inline void SetLineSep(Aws::String&& value) { m_lineSepHasBeenSet = true; m_lineSep = std::move(value); }

    /**
     * <p>A line separator for the file.</p>
     */
    inline void SetLineSep(const char* value) { m_lineSepHasBeenSet = true; m_lineSep.assign(value); }

    /**
     * <p>A line separator for the file.</p>
     */
    inline ReadOptions& WithLineSep(const Aws::String& value) { SetLineSep(value); return *this;}

    /**
     * <p>A line separator for the file.</p>
     */
    inline ReadOptions& WithLineSep(Aws::String&& value) { SetLineSep(std::move(value)); return *this;}

    /**
     * <p>A line separator for the file.</p>
     */
    inline ReadOptions& WithLineSep(const char* value) { SetLineSep(value); return *this;}


    /**
     * <p>The file's quote character.</p>
     */
    inline const Aws::String& GetQuote() const{ return m_quote; }

    /**
     * <p>The file's quote character.</p>
     */
    inline bool QuoteHasBeenSet() const { return m_quoteHasBeenSet; }

    /**
     * <p>The file's quote character.</p>
     */
    inline void SetQuote(const Aws::String& value) { m_quoteHasBeenSet = true; m_quote = value; }

    /**
     * <p>The file's quote character.</p>
     */
    inline void SetQuote(Aws::String&& value) { m_quoteHasBeenSet = true; m_quote = std::move(value); }

    /**
     * <p>The file's quote character.</p>
     */
    inline void SetQuote(const char* value) { m_quoteHasBeenSet = true; m_quote.assign(value); }

    /**
     * <p>The file's quote character.</p>
     */
    inline ReadOptions& WithQuote(const Aws::String& value) { SetQuote(value); return *this;}

    /**
     * <p>The file's quote character.</p>
     */
    inline ReadOptions& WithQuote(Aws::String&& value) { SetQuote(std::move(value)); return *this;}

    /**
     * <p>The file's quote character.</p>
     */
    inline ReadOptions& WithQuote(const char* value) { SetQuote(value); return *this;}


    /**
     * <p>Whether all values need to be quoted, or just those that contain quotes.</p>
     */
    inline bool GetQuoteAll() const{ return m_quoteAll; }

    /**
     * <p>Whether all values need to be quoted, or just those that contain quotes.</p>
     */
    inline bool QuoteAllHasBeenSet() const { return m_quoteAllHasBeenSet; }

    /**
     * <p>Whether all values need to be quoted, or just those that contain quotes.</p>
     */
    inline void SetQuoteAll(bool value) { m_quoteAllHasBeenSet = true; m_quoteAll = value; }

    /**
     * <p>Whether all values need to be quoted, or just those that contain quotes.</p>
     */
    inline ReadOptions& WithQuoteAll(bool value) { SetQuoteAll(value); return *this;}


    /**
     * <p>The file's field separator.</p>
     */
    inline const Aws::String& GetSep() const{ return m_sep; }

    /**
     * <p>The file's field separator.</p>
     */
    inline bool SepHasBeenSet() const { return m_sepHasBeenSet; }

    /**
     * <p>The file's field separator.</p>
     */
    inline void SetSep(const Aws::String& value) { m_sepHasBeenSet = true; m_sep = value; }

    /**
     * <p>The file's field separator.</p>
     */
    inline void SetSep(Aws::String&& value) { m_sepHasBeenSet = true; m_sep = std::move(value); }

    /**
     * <p>The file's field separator.</p>
     */
    inline void SetSep(const char* value) { m_sepHasBeenSet = true; m_sep.assign(value); }

    /**
     * <p>The file's field separator.</p>
     */
    inline ReadOptions& WithSep(const Aws::String& value) { SetSep(value); return *this;}

    /**
     * <p>The file's field separator.</p>
     */
    inline ReadOptions& WithSep(Aws::String&& value) { SetSep(std::move(value)); return *this;}

    /**
     * <p>The file's field separator.</p>
     */
    inline ReadOptions& WithSep(const char* value) { SetSep(value); return *this;}

  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_encoding;
    bool m_encodingHasBeenSet = false;

    Aws::String m_escape;
    bool m_escapeHasBeenSet = false;

    bool m_escapeQuotes;
    bool m_escapeQuotesHasBeenSet = false;

    bool m_header;
    bool m_headerHasBeenSet = false;

    Aws::String m_lineSep;
    bool m_lineSepHasBeenSet = false;

    Aws::String m_quote;
    bool m_quoteHasBeenSet = false;

    bool m_quoteAll;
    bool m_quoteAllHasBeenSet = false;

    Aws::String m_sep;
    bool m_sepHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
