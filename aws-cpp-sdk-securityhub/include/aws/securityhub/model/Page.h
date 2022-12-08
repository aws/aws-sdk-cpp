/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/Range.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An occurrence of sensitive data in an Adobe Portable Document Format (PDF)
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Page">AWS
   * API Reference</a></p>
   */
  class Page
  {
  public:
    AWS_SECURITYHUB_API Page();
    AWS_SECURITYHUB_API Page(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Page& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The page number of the page that contains the sensitive data.</p>
     */
    inline long long GetPageNumber() const{ return m_pageNumber; }

    /**
     * <p>The page number of the page that contains the sensitive data.</p>
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * <p>The page number of the page that contains the sensitive data.</p>
     */
    inline void SetPageNumber(long long value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * <p>The page number of the page that contains the sensitive data.</p>
     */
    inline Page& WithPageNumber(long long value) { SetPageNumber(value); return *this;}


    /**
     * <p>An occurrence of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline const Range& GetLineRange() const{ return m_lineRange; }

    /**
     * <p>An occurrence of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline bool LineRangeHasBeenSet() const { return m_lineRangeHasBeenSet; }

    /**
     * <p>An occurrence of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline void SetLineRange(const Range& value) { m_lineRangeHasBeenSet = true; m_lineRange = value; }

    /**
     * <p>An occurrence of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline void SetLineRange(Range&& value) { m_lineRangeHasBeenSet = true; m_lineRange = std::move(value); }

    /**
     * <p>An occurrence of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline Page& WithLineRange(const Range& value) { SetLineRange(value); return *this;}

    /**
     * <p>An occurrence of sensitive data detected in a non-binary text file or a
     * Microsoft Word file. Non-binary text files include files such as HTML, XML,
     * JSON, and TXT files.</p>
     */
    inline Page& WithLineRange(Range&& value) { SetLineRange(std::move(value)); return *this;}


    /**
     * <p>An occurrence of sensitive data detected in a binary text file.</p>
     */
    inline const Range& GetOffsetRange() const{ return m_offsetRange; }

    /**
     * <p>An occurrence of sensitive data detected in a binary text file.</p>
     */
    inline bool OffsetRangeHasBeenSet() const { return m_offsetRangeHasBeenSet; }

    /**
     * <p>An occurrence of sensitive data detected in a binary text file.</p>
     */
    inline void SetOffsetRange(const Range& value) { m_offsetRangeHasBeenSet = true; m_offsetRange = value; }

    /**
     * <p>An occurrence of sensitive data detected in a binary text file.</p>
     */
    inline void SetOffsetRange(Range&& value) { m_offsetRangeHasBeenSet = true; m_offsetRange = std::move(value); }

    /**
     * <p>An occurrence of sensitive data detected in a binary text file.</p>
     */
    inline Page& WithOffsetRange(const Range& value) { SetOffsetRange(value); return *this;}

    /**
     * <p>An occurrence of sensitive data detected in a binary text file.</p>
     */
    inline Page& WithOffsetRange(Range&& value) { SetOffsetRange(std::move(value)); return *this;}

  private:

    long long m_pageNumber;
    bool m_pageNumberHasBeenSet = false;

    Range m_lineRange;
    bool m_lineRangeHasBeenSet = false;

    Range m_offsetRange;
    bool m_offsetRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
