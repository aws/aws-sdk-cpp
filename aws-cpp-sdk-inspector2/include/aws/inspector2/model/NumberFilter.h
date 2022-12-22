/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An object that describes the details of a number filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/NumberFilter">AWS
   * API Reference</a></p>
   */
  class NumberFilter
  {
  public:
    AWS_INSPECTOR2_API NumberFilter();
    AWS_INSPECTOR2_API NumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API NumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The lowest number to be included in the filter.</p>
     */
    inline double GetLowerInclusive() const{ return m_lowerInclusive; }

    /**
     * <p>The lowest number to be included in the filter.</p>
     */
    inline bool LowerInclusiveHasBeenSet() const { return m_lowerInclusiveHasBeenSet; }

    /**
     * <p>The lowest number to be included in the filter.</p>
     */
    inline void SetLowerInclusive(double value) { m_lowerInclusiveHasBeenSet = true; m_lowerInclusive = value; }

    /**
     * <p>The lowest number to be included in the filter.</p>
     */
    inline NumberFilter& WithLowerInclusive(double value) { SetLowerInclusive(value); return *this;}


    /**
     * <p>The highest number to be included in the filter.</p>
     */
    inline double GetUpperInclusive() const{ return m_upperInclusive; }

    /**
     * <p>The highest number to be included in the filter.</p>
     */
    inline bool UpperInclusiveHasBeenSet() const { return m_upperInclusiveHasBeenSet; }

    /**
     * <p>The highest number to be included in the filter.</p>
     */
    inline void SetUpperInclusive(double value) { m_upperInclusiveHasBeenSet = true; m_upperInclusive = value; }

    /**
     * <p>The highest number to be included in the filter.</p>
     */
    inline NumberFilter& WithUpperInclusive(double value) { SetUpperInclusive(value); return *this;}

  private:

    double m_lowerInclusive;
    bool m_lowerInclusiveHasBeenSet = false;

    double m_upperInclusive;
    bool m_upperInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
