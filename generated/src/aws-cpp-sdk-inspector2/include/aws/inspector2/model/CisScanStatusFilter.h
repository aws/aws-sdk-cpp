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
    AWS_INSPECTOR2_API CisScanStatusFilter();
    AWS_INSPECTOR2_API CisScanStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter comparison value.</p>
     */
    inline const CisScanStatusComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The filter comparison value.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The filter comparison value.</p>
     */
    inline void SetComparison(const CisScanStatusComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The filter comparison value.</p>
     */
    inline void SetComparison(CisScanStatusComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The filter comparison value.</p>
     */
    inline CisScanStatusFilter& WithComparison(const CisScanStatusComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The filter comparison value.</p>
     */
    inline CisScanStatusFilter& WithComparison(CisScanStatusComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The filter value.</p>
     */
    inline const CisScanStatus& GetValue() const{ return m_value; }

    /**
     * <p>The filter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValue(const CisScanStatus& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValue(CisScanStatus&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The filter value.</p>
     */
    inline CisScanStatusFilter& WithValue(const CisScanStatus& value) { SetValue(value); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline CisScanStatusFilter& WithValue(CisScanStatus&& value) { SetValue(std::move(value)); return *this;}

  private:

    CisScanStatusComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    CisScanStatus m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
