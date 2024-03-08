/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisFindingStatusComparison.h>
#include <aws/inspector2/model/CisFindingStatus.h>
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
   * <p>The CIS finding status filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisFindingStatusFilter">AWS
   * API Reference</a></p>
   */
  class CisFindingStatusFilter
  {
  public:
    AWS_INSPECTOR2_API CisFindingStatusFilter();
    AWS_INSPECTOR2_API CisFindingStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisFindingStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparison value of the CIS finding status filter.</p>
     */
    inline const CisFindingStatusComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The comparison value of the CIS finding status filter.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The comparison value of the CIS finding status filter.</p>
     */
    inline void SetComparison(const CisFindingStatusComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The comparison value of the CIS finding status filter.</p>
     */
    inline void SetComparison(CisFindingStatusComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The comparison value of the CIS finding status filter.</p>
     */
    inline CisFindingStatusFilter& WithComparison(const CisFindingStatusComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The comparison value of the CIS finding status filter.</p>
     */
    inline CisFindingStatusFilter& WithComparison(CisFindingStatusComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The value of the CIS finding status filter.</p>
     */
    inline const CisFindingStatus& GetValue() const{ return m_value; }

    /**
     * <p>The value of the CIS finding status filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the CIS finding status filter.</p>
     */
    inline void SetValue(const CisFindingStatus& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the CIS finding status filter.</p>
     */
    inline void SetValue(CisFindingStatus&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the CIS finding status filter.</p>
     */
    inline CisFindingStatusFilter& WithValue(const CisFindingStatus& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the CIS finding status filter.</p>
     */
    inline CisFindingStatusFilter& WithValue(CisFindingStatus&& value) { SetValue(std::move(value)); return *this;}

  private:

    CisFindingStatusComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    CisFindingStatus m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
