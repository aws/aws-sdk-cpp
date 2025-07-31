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
    AWS_INSPECTOR2_API NumberFilter() = default;
    AWS_INSPECTOR2_API NumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API NumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The highest number to be included in the filter.</p>
     */
    inline double GetUpperInclusive() const { return m_upperInclusive; }
    inline bool UpperInclusiveHasBeenSet() const { return m_upperInclusiveHasBeenSet; }
    inline void SetUpperInclusive(double value) { m_upperInclusiveHasBeenSet = true; m_upperInclusive = value; }
    inline NumberFilter& WithUpperInclusive(double value) { SetUpperInclusive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lowest number to be included in the filter.</p>
     */
    inline double GetLowerInclusive() const { return m_lowerInclusive; }
    inline bool LowerInclusiveHasBeenSet() const { return m_lowerInclusiveHasBeenSet; }
    inline void SetLowerInclusive(double value) { m_lowerInclusiveHasBeenSet = true; m_lowerInclusive = value; }
    inline NumberFilter& WithLowerInclusive(double value) { SetLowerInclusive(value); return *this;}
    ///@}
  private:

    double m_upperInclusive{0.0};
    bool m_upperInclusiveHasBeenSet = false;

    double m_lowerInclusive{0.0};
    bool m_lowerInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
