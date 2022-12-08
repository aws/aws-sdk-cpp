/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PercentVisibleRange.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The range options for the data zoom scroll bar.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisibleRangeOptions">AWS
   * API Reference</a></p>
   */
  class VisibleRangeOptions
  {
  public:
    AWS_QUICKSIGHT_API VisibleRangeOptions();
    AWS_QUICKSIGHT_API VisibleRangeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisibleRangeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percent range in the visible range.</p>
     */
    inline const PercentVisibleRange& GetPercentRange() const{ return m_percentRange; }

    /**
     * <p>The percent range in the visible range.</p>
     */
    inline bool PercentRangeHasBeenSet() const { return m_percentRangeHasBeenSet; }

    /**
     * <p>The percent range in the visible range.</p>
     */
    inline void SetPercentRange(const PercentVisibleRange& value) { m_percentRangeHasBeenSet = true; m_percentRange = value; }

    /**
     * <p>The percent range in the visible range.</p>
     */
    inline void SetPercentRange(PercentVisibleRange&& value) { m_percentRangeHasBeenSet = true; m_percentRange = std::move(value); }

    /**
     * <p>The percent range in the visible range.</p>
     */
    inline VisibleRangeOptions& WithPercentRange(const PercentVisibleRange& value) { SetPercentRange(value); return *this;}

    /**
     * <p>The percent range in the visible range.</p>
     */
    inline VisibleRangeOptions& WithPercentRange(PercentVisibleRange&& value) { SetPercentRange(std::move(value)); return *this;}

  private:

    PercentVisibleRange m_percentRange;
    bool m_percentRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
