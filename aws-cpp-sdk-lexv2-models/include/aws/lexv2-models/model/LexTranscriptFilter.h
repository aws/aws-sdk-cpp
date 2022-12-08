/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/DateRangeFilter.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The object that contains transcript filter details that are associated with a
   * bot recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/LexTranscriptFilter">AWS
   * API Reference</a></p>
   */
  class LexTranscriptFilter
  {
  public:
    AWS_LEXMODELSV2_API LexTranscriptFilter();
    AWS_LEXMODELSV2_API LexTranscriptFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API LexTranscriptFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The object that contains a date range filter that will be applied to the
     * transcript. Specify this object if you want Amazon Lex to only read the files
     * that are within the date range.</p>
     */
    inline const DateRangeFilter& GetDateRangeFilter() const{ return m_dateRangeFilter; }

    /**
     * <p>The object that contains a date range filter that will be applied to the
     * transcript. Specify this object if you want Amazon Lex to only read the files
     * that are within the date range.</p>
     */
    inline bool DateRangeFilterHasBeenSet() const { return m_dateRangeFilterHasBeenSet; }

    /**
     * <p>The object that contains a date range filter that will be applied to the
     * transcript. Specify this object if you want Amazon Lex to only read the files
     * that are within the date range.</p>
     */
    inline void SetDateRangeFilter(const DateRangeFilter& value) { m_dateRangeFilterHasBeenSet = true; m_dateRangeFilter = value; }

    /**
     * <p>The object that contains a date range filter that will be applied to the
     * transcript. Specify this object if you want Amazon Lex to only read the files
     * that are within the date range.</p>
     */
    inline void SetDateRangeFilter(DateRangeFilter&& value) { m_dateRangeFilterHasBeenSet = true; m_dateRangeFilter = std::move(value); }

    /**
     * <p>The object that contains a date range filter that will be applied to the
     * transcript. Specify this object if you want Amazon Lex to only read the files
     * that are within the date range.</p>
     */
    inline LexTranscriptFilter& WithDateRangeFilter(const DateRangeFilter& value) { SetDateRangeFilter(value); return *this;}

    /**
     * <p>The object that contains a date range filter that will be applied to the
     * transcript. Specify this object if you want Amazon Lex to only read the files
     * that are within the date range.</p>
     */
    inline LexTranscriptFilter& WithDateRangeFilter(DateRangeFilter&& value) { SetDateRangeFilter(std::move(value)); return *this;}

  private:

    DateRangeFilter m_dateRangeFilter;
    bool m_dateRangeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
