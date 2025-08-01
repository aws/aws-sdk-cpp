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
   * <p>The coverage number to be used in the filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CoverageNumberFilter">AWS
   * API Reference</a></p>
   */
  class CoverageNumberFilter
  {
  public:
    AWS_INSPECTOR2_API CoverageNumberFilter() = default;
    AWS_INSPECTOR2_API CoverageNumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CoverageNumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The upper inclusive for the coverage number.&gt;</p>
     */
    inline long long GetUpperInclusive() const { return m_upperInclusive; }
    inline bool UpperInclusiveHasBeenSet() const { return m_upperInclusiveHasBeenSet; }
    inline void SetUpperInclusive(long long value) { m_upperInclusiveHasBeenSet = true; m_upperInclusive = value; }
    inline CoverageNumberFilter& WithUpperInclusive(long long value) { SetUpperInclusive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower inclusive for the coverage number.</p>
     */
    inline long long GetLowerInclusive() const { return m_lowerInclusive; }
    inline bool LowerInclusiveHasBeenSet() const { return m_lowerInclusiveHasBeenSet; }
    inline void SetLowerInclusive(long long value) { m_lowerInclusiveHasBeenSet = true; m_lowerInclusive = value; }
    inline CoverageNumberFilter& WithLowerInclusive(long long value) { SetLowerInclusive(value); return *this;}
    ///@}
  private:

    long long m_upperInclusive{0};
    bool m_upperInclusiveHasBeenSet = false;

    long long m_lowerInclusive{0};
    bool m_lowerInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
