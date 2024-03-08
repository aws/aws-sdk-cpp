/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisResultStatusComparison.h>
#include <aws/inspector2/model/CisResultStatus.h>
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
   * <p>The CIS result status filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisResultStatusFilter">AWS
   * API Reference</a></p>
   */
  class CisResultStatusFilter
  {
  public:
    AWS_INSPECTOR2_API CisResultStatusFilter();
    AWS_INSPECTOR2_API CisResultStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisResultStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparison value of the CIS result status filter.</p>
     */
    inline const CisResultStatusComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The comparison value of the CIS result status filter.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The comparison value of the CIS result status filter.</p>
     */
    inline void SetComparison(const CisResultStatusComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The comparison value of the CIS result status filter.</p>
     */
    inline void SetComparison(CisResultStatusComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The comparison value of the CIS result status filter.</p>
     */
    inline CisResultStatusFilter& WithComparison(const CisResultStatusComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The comparison value of the CIS result status filter.</p>
     */
    inline CisResultStatusFilter& WithComparison(CisResultStatusComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The value of the CIS result status filter.</p>
     */
    inline const CisResultStatus& GetValue() const{ return m_value; }

    /**
     * <p>The value of the CIS result status filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the CIS result status filter.</p>
     */
    inline void SetValue(const CisResultStatus& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the CIS result status filter.</p>
     */
    inline void SetValue(CisResultStatus&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the CIS result status filter.</p>
     */
    inline CisResultStatusFilter& WithValue(const CisResultStatus& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the CIS result status filter.</p>
     */
    inline CisResultStatusFilter& WithValue(CisResultStatus&& value) { SetValue(std::move(value)); return *this;}

  private:

    CisResultStatusComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    CisResultStatus m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
