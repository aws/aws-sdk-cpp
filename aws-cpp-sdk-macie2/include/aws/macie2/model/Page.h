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
  class Page
  {
  public:
    AWS_MACIE2_API Page();
    AWS_MACIE2_API Page(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Page& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     *  <p>Reserved for future use.</p>
     */
    inline const Range& GetLineRange() const{ return m_lineRange; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline bool LineRangeHasBeenSet() const { return m_lineRangeHasBeenSet; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline void SetLineRange(const Range& value) { m_lineRangeHasBeenSet = true; m_lineRange = value; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline void SetLineRange(Range&& value) { m_lineRangeHasBeenSet = true; m_lineRange = std::move(value); }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline Page& WithLineRange(const Range& value) { SetLineRange(value); return *this;}

    /**
     *  <p>Reserved for future use.</p>
     */
    inline Page& WithLineRange(Range&& value) { SetLineRange(std::move(value)); return *this;}


    /**
     *  <p>Reserved for future use.</p>
     */
    inline const Range& GetOffsetRange() const{ return m_offsetRange; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline bool OffsetRangeHasBeenSet() const { return m_offsetRangeHasBeenSet; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline void SetOffsetRange(const Range& value) { m_offsetRangeHasBeenSet = true; m_offsetRange = value; }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline void SetOffsetRange(Range&& value) { m_offsetRangeHasBeenSet = true; m_offsetRange = std::move(value); }

    /**
     *  <p>Reserved for future use.</p>
     */
    inline Page& WithOffsetRange(const Range& value) { SetOffsetRange(value); return *this;}

    /**
     *  <p>Reserved for future use.</p>
     */
    inline Page& WithOffsetRange(Range&& value) { SetOffsetRange(std::move(value)); return *this;}


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

  private:

    Range m_lineRange;
    bool m_lineRangeHasBeenSet = false;

    Range m_offsetRange;
    bool m_offsetRangeHasBeenSet = false;

    long long m_pageNumber;
    bool m_pageNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
