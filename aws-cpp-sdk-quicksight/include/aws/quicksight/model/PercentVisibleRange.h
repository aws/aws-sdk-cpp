/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The percent range in the visible range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PercentVisibleRange">AWS
   * API Reference</a></p>
   */
  class PercentVisibleRange
  {
  public:
    AWS_QUICKSIGHT_API PercentVisibleRange();
    AWS_QUICKSIGHT_API PercentVisibleRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PercentVisibleRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lower bound of the range.</p>
     */
    inline double GetFrom() const{ return m_from; }

    /**
     * <p>The lower bound of the range.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The lower bound of the range.</p>
     */
    inline void SetFrom(double value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The lower bound of the range.</p>
     */
    inline PercentVisibleRange& WithFrom(double value) { SetFrom(value); return *this;}


    /**
     * <p>The top bound of the range.</p>
     */
    inline double GetTo() const{ return m_to; }

    /**
     * <p>The top bound of the range.</p>
     */
    inline bool ToHasBeenSet() const { return m_toHasBeenSet; }

    /**
     * <p>The top bound of the range.</p>
     */
    inline void SetTo(double value) { m_toHasBeenSet = true; m_to = value; }

    /**
     * <p>The top bound of the range.</p>
     */
    inline PercentVisibleRange& WithTo(double value) { SetTo(value); return *this;}

  private:

    double m_from;
    bool m_fromHasBeenSet = false;

    double m_to;
    bool m_toHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
