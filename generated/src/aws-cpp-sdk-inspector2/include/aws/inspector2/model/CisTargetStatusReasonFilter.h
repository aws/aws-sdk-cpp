/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisTargetStatusComparison.h>
#include <aws/inspector2/model/CisTargetStatusReason.h>
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
   * <p>The CIS target status reason filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisTargetStatusReasonFilter">AWS
   * API Reference</a></p>
   */
  class CisTargetStatusReasonFilter
  {
  public:
    AWS_INSPECTOR2_API CisTargetStatusReasonFilter();
    AWS_INSPECTOR2_API CisTargetStatusReasonFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisTargetStatusReasonFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparison value of the CIS target status reason filter.</p>
     */
    inline const CisTargetStatusComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The comparison value of the CIS target status reason filter.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The comparison value of the CIS target status reason filter.</p>
     */
    inline void SetComparison(const CisTargetStatusComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The comparison value of the CIS target status reason filter.</p>
     */
    inline void SetComparison(CisTargetStatusComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The comparison value of the CIS target status reason filter.</p>
     */
    inline CisTargetStatusReasonFilter& WithComparison(const CisTargetStatusComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The comparison value of the CIS target status reason filter.</p>
     */
    inline CisTargetStatusReasonFilter& WithComparison(CisTargetStatusComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The value of the CIS target status reason filter.</p>
     */
    inline const CisTargetStatusReason& GetValue() const{ return m_value; }

    /**
     * <p>The value of the CIS target status reason filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the CIS target status reason filter.</p>
     */
    inline void SetValue(const CisTargetStatusReason& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the CIS target status reason filter.</p>
     */
    inline void SetValue(CisTargetStatusReason&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the CIS target status reason filter.</p>
     */
    inline CisTargetStatusReasonFilter& WithValue(const CisTargetStatusReason& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the CIS target status reason filter.</p>
     */
    inline CisTargetStatusReasonFilter& WithValue(CisTargetStatusReason&& value) { SetValue(std::move(value)); return *this;}

  private:

    CisTargetStatusComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    CisTargetStatusReason m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
