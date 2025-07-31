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
   * <p>The CIS number filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisNumberFilter">AWS
   * API Reference</a></p>
   */
  class CisNumberFilter
  {
  public:
    AWS_INSPECTOR2_API CisNumberFilter() = default;
    AWS_INSPECTOR2_API CisNumberFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisNumberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIS number filter's upper inclusive.</p>
     */
    inline int GetUpperInclusive() const { return m_upperInclusive; }
    inline bool UpperInclusiveHasBeenSet() const { return m_upperInclusiveHasBeenSet; }
    inline void SetUpperInclusive(int value) { m_upperInclusiveHasBeenSet = true; m_upperInclusive = value; }
    inline CisNumberFilter& WithUpperInclusive(int value) { SetUpperInclusive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIS number filter's lower inclusive.</p>
     */
    inline int GetLowerInclusive() const { return m_lowerInclusive; }
    inline bool LowerInclusiveHasBeenSet() const { return m_lowerInclusiveHasBeenSet; }
    inline void SetLowerInclusive(int value) { m_lowerInclusiveHasBeenSet = true; m_lowerInclusive = value; }
    inline CisNumberFilter& WithLowerInclusive(int value) { SetLowerInclusive(value); return *this;}
    ///@}
  private:

    int m_upperInclusive{0};
    bool m_upperInclusiveHasBeenSet = false;

    int m_lowerInclusive{0};
    bool m_lowerInclusiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
