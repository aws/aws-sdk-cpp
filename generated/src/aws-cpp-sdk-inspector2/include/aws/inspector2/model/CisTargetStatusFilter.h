/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisTargetStatusComparison.h>
#include <aws/inspector2/model/CisTargetStatus.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The CIS target status filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisTargetStatusFilter">AWS
   * API Reference</a></p>
   */
  class CisTargetStatusFilter
  {
  public:
    AWS_INSPECTOR2_API CisTargetStatusFilter() = default;
    AWS_INSPECTOR2_API CisTargetStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisTargetStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison value of the CIS target status filter.</p>
     */
    inline CisTargetStatusComparison GetComparison() const { return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    inline void SetComparison(CisTargetStatusComparison value) { m_comparisonHasBeenSet = true; m_comparison = value; }
    inline CisTargetStatusFilter& WithComparison(CisTargetStatusComparison value) { SetComparison(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the CIS target status filter.</p>
     */
    inline CisTargetStatus GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(CisTargetStatus value) { m_valueHasBeenSet = true; m_value = value; }
    inline CisTargetStatusFilter& WithValue(CisTargetStatus value) { SetValue(value); return *this;}
    ///@}
  private:

    CisTargetStatusComparison m_comparison{CisTargetStatusComparison::NOT_SET};
    bool m_comparisonHasBeenSet = false;

    CisTargetStatus m_value{CisTargetStatus::NOT_SET};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
