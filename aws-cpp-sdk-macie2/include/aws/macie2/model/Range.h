/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides details about the location of an occurrence of sensitive data in an
   * Adobe Portable Document Format file, Microsoft Word document, or non-binary text
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Range">AWS API
   * Reference</a></p>
   */
  class AWS_MACIE2_API Range
  {
  public:
    Range();
    Range(Aws::Utils::Json::JsonView jsonValue);
    Range& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Possible values are:</p> <ul><li><p>In an Occurrences.lineRanges array, the
     * number of lines from the beginning of the file to the end of the sensitive
     * data.</p></li> <li><p>In an Occurrences.offsetRanges array, the number of
     * characters from the beginning of the file to the end of the sensitive
     * data.</p></li> <li><p>In a Page object, the number of lines (lineRange) or
     * characters (offsetRange) from the beginning of the page to the end of the
     * sensitive data.</p></li></ul>
     */
    inline long long GetEnd() const{ return m_end; }

    /**
     * <p>Possible values are:</p> <ul><li><p>In an Occurrences.lineRanges array, the
     * number of lines from the beginning of the file to the end of the sensitive
     * data.</p></li> <li><p>In an Occurrences.offsetRanges array, the number of
     * characters from the beginning of the file to the end of the sensitive
     * data.</p></li> <li><p>In a Page object, the number of lines (lineRange) or
     * characters (offsetRange) from the beginning of the page to the end of the
     * sensitive data.</p></li></ul>
     */
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }

    /**
     * <p>Possible values are:</p> <ul><li><p>In an Occurrences.lineRanges array, the
     * number of lines from the beginning of the file to the end of the sensitive
     * data.</p></li> <li><p>In an Occurrences.offsetRanges array, the number of
     * characters from the beginning of the file to the end of the sensitive
     * data.</p></li> <li><p>In a Page object, the number of lines (lineRange) or
     * characters (offsetRange) from the beginning of the page to the end of the
     * sensitive data.</p></li></ul>
     */
    inline void SetEnd(long long value) { m_endHasBeenSet = true; m_end = value; }

    /**
     * <p>Possible values are:</p> <ul><li><p>In an Occurrences.lineRanges array, the
     * number of lines from the beginning of the file to the end of the sensitive
     * data.</p></li> <li><p>In an Occurrences.offsetRanges array, the number of
     * characters from the beginning of the file to the end of the sensitive
     * data.</p></li> <li><p>In a Page object, the number of lines (lineRange) or
     * characters (offsetRange) from the beginning of the page to the end of the
     * sensitive data.</p></li></ul>
     */
    inline Range& WithEnd(long long value) { SetEnd(value); return *this;}


    /**
     * <p>Possible values are:</p> <ul><li><p>In an Occurrences.lineRanges array, the
     * number of lines from the beginning of the file to the beginning of the sensitive
     * data.</p></li> <li><p>In an Occurrences.offsetRanges array, the number of
     * characters from the beginning of the file to the beginning of the sensitive
     * data.</p></li> <li><p>In a Page object, the number of lines (lineRange) or
     * characters (offsetRange) from the beginning of the page to the beginning of the
     * sensitive data.</p></li></ul>
     */
    inline long long GetStart() const{ return m_start; }

    /**
     * <p>Possible values are:</p> <ul><li><p>In an Occurrences.lineRanges array, the
     * number of lines from the beginning of the file to the beginning of the sensitive
     * data.</p></li> <li><p>In an Occurrences.offsetRanges array, the number of
     * characters from the beginning of the file to the beginning of the sensitive
     * data.</p></li> <li><p>In a Page object, the number of lines (lineRange) or
     * characters (offsetRange) from the beginning of the page to the beginning of the
     * sensitive data.</p></li></ul>
     */
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }

    /**
     * <p>Possible values are:</p> <ul><li><p>In an Occurrences.lineRanges array, the
     * number of lines from the beginning of the file to the beginning of the sensitive
     * data.</p></li> <li><p>In an Occurrences.offsetRanges array, the number of
     * characters from the beginning of the file to the beginning of the sensitive
     * data.</p></li> <li><p>In a Page object, the number of lines (lineRange) or
     * characters (offsetRange) from the beginning of the page to the beginning of the
     * sensitive data.</p></li></ul>
     */
    inline void SetStart(long long value) { m_startHasBeenSet = true; m_start = value; }

    /**
     * <p>Possible values are:</p> <ul><li><p>In an Occurrences.lineRanges array, the
     * number of lines from the beginning of the file to the beginning of the sensitive
     * data.</p></li> <li><p>In an Occurrences.offsetRanges array, the number of
     * characters from the beginning of the file to the beginning of the sensitive
     * data.</p></li> <li><p>In a Page object, the number of lines (lineRange) or
     * characters (offsetRange) from the beginning of the page to the beginning of the
     * sensitive data.</p></li></ul>
     */
    inline Range& WithStart(long long value) { SetStart(value); return *this;}


    /**
     * <p>The column number for the column that contains the data, if the file contains
     * structured data.</p>
     */
    inline long long GetStartColumn() const{ return m_startColumn; }

    /**
     * <p>The column number for the column that contains the data, if the file contains
     * structured data.</p>
     */
    inline bool StartColumnHasBeenSet() const { return m_startColumnHasBeenSet; }

    /**
     * <p>The column number for the column that contains the data, if the file contains
     * structured data.</p>
     */
    inline void SetStartColumn(long long value) { m_startColumnHasBeenSet = true; m_startColumn = value; }

    /**
     * <p>The column number for the column that contains the data, if the file contains
     * structured data.</p>
     */
    inline Range& WithStartColumn(long long value) { SetStartColumn(value); return *this;}

  private:

    long long m_end;
    bool m_endHasBeenSet;

    long long m_start;
    bool m_startHasBeenSet;

    long long m_startColumn;
    bool m_startColumnHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
