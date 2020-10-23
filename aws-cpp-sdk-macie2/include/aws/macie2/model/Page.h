/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Range.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the location of an occurrence of sensitive data in an Adobe
   * Portable Document Format file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Page">AWS API
   * Reference</a></p>
   */
  class AWS_MACIE2_API Page
  {
  public:
    Page();
    Page(Aws::Utils::Json::JsonView jsonValue);
    Page& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The line that contains the data, and the position of the data on that
     * line.</p>
     */
    inline const Range& GetLineRange() const{ return m_lineRange; }

    /**
     * <p>The line that contains the data, and the position of the data on that
     * line.</p>
     */
    inline bool LineRangeHasBeenSet() const { return m_lineRangeHasBeenSet; }

    /**
     * <p>The line that contains the data, and the position of the data on that
     * line.</p>
     */
    inline void SetLineRange(const Range& value) { m_lineRangeHasBeenSet = true; m_lineRange = value; }

    /**
     * <p>The line that contains the data, and the position of the data on that
     * line.</p>
     */
    inline void SetLineRange(Range&& value) { m_lineRangeHasBeenSet = true; m_lineRange = std::move(value); }

    /**
     * <p>The line that contains the data, and the position of the data on that
     * line.</p>
     */
    inline Page& WithLineRange(const Range& value) { SetLineRange(value); return *this;}

    /**
     * <p>The line that contains the data, and the position of the data on that
     * line.</p>
     */
    inline Page& WithLineRange(Range&& value) { SetLineRange(std::move(value)); return *this;}


    /**
     * <p>The position of the data on the page, relative to the beginning of the
     * page.</p>
     */
    inline const Range& GetOffsetRange() const{ return m_offsetRange; }

    /**
     * <p>The position of the data on the page, relative to the beginning of the
     * page.</p>
     */
    inline bool OffsetRangeHasBeenSet() const { return m_offsetRangeHasBeenSet; }

    /**
     * <p>The position of the data on the page, relative to the beginning of the
     * page.</p>
     */
    inline void SetOffsetRange(const Range& value) { m_offsetRangeHasBeenSet = true; m_offsetRange = value; }

    /**
     * <p>The position of the data on the page, relative to the beginning of the
     * page.</p>
     */
    inline void SetOffsetRange(Range&& value) { m_offsetRangeHasBeenSet = true; m_offsetRange = std::move(value); }

    /**
     * <p>The position of the data on the page, relative to the beginning of the
     * page.</p>
     */
    inline Page& WithOffsetRange(const Range& value) { SetOffsetRange(value); return *this;}

    /**
     * <p>The position of the data on the page, relative to the beginning of the
     * page.</p>
     */
    inline Page& WithOffsetRange(Range&& value) { SetOffsetRange(std::move(value)); return *this;}


    /**
     * <p>The page number of the page that contains the data.</p>
     */
    inline long long GetPageNumber() const{ return m_pageNumber; }

    /**
     * <p>The page number of the page that contains the data.</p>
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * <p>The page number of the page that contains the data.</p>
     */
    inline void SetPageNumber(long long value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * <p>The page number of the page that contains the data.</p>
     */
    inline Page& WithPageNumber(long long value) { SetPageNumber(value); return *this;}

  private:

    Range m_lineRange;
    bool m_lineRangeHasBeenSet;

    Range m_offsetRange;
    bool m_offsetRangeHasBeenSet;

    long long m_pageNumber;
    bool m_pageNumberHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
