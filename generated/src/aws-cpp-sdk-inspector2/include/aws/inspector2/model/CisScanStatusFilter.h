/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisScanStatusComparison.h>
#include <aws/inspector2/model/CisScanStatus.h>
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
   * <p>The CIS scan status filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisScanStatusFilter">AWS
   * API Reference</a></p>
   */
  class CisScanStatusFilter
  {
  public:
    AWS_INSPECTOR2_API CisScanStatusFilter() = default;
    AWS_INSPECTOR2_API CisScanStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter comparison value.</p>
     */
    inline CisScanStatusComparison GetComparison() const { return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    inline void SetComparison(CisScanStatusComparison value) { m_comparisonHasBeenSet = true; m_comparison = value; }
    inline CisScanStatusFilter& WithComparison(CisScanStatusComparison value) { SetComparison(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter value.</p>
     */
    inline CisScanStatus GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(CisScanStatus value) { m_valueHasBeenSet = true; m_value = value; }
    inline CisScanStatusFilter& WithValue(CisScanStatus value) { SetValue(value); return *this;}
    ///@}
  private:

    CisScanStatusComparison m_comparison{CisScanStatusComparison::NOT_SET};
    bool m_comparisonHasBeenSet = false;

    CisScanStatus m_value{CisScanStatus::NOT_SET};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
