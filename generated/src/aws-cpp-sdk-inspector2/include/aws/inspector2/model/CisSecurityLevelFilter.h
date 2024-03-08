/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CisSecurityLevelComparison.h>
#include <aws/inspector2/model/CisSecurityLevel.h>
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
   * <p> The CIS security level filter. Security level refers to the Benchmark levels
   * that CIS assigns to a profile. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisSecurityLevelFilter">AWS
   * API Reference</a></p>
   */
  class CisSecurityLevelFilter
  {
  public:
    AWS_INSPECTOR2_API CisSecurityLevelFilter();
    AWS_INSPECTOR2_API CisSecurityLevelFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisSecurityLevelFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CIS security filter comparison value.</p>
     */
    inline const CisSecurityLevelComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The CIS security filter comparison value.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The CIS security filter comparison value.</p>
     */
    inline void SetComparison(const CisSecurityLevelComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The CIS security filter comparison value.</p>
     */
    inline void SetComparison(CisSecurityLevelComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The CIS security filter comparison value.</p>
     */
    inline CisSecurityLevelFilter& WithComparison(const CisSecurityLevelComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The CIS security filter comparison value.</p>
     */
    inline CisSecurityLevelFilter& WithComparison(CisSecurityLevelComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The CIS security filter value.</p>
     */
    inline const CisSecurityLevel& GetValue() const{ return m_value; }

    /**
     * <p>The CIS security filter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The CIS security filter value.</p>
     */
    inline void SetValue(const CisSecurityLevel& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The CIS security filter value.</p>
     */
    inline void SetValue(CisSecurityLevel&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The CIS security filter value.</p>
     */
    inline CisSecurityLevelFilter& WithValue(const CisSecurityLevel& value) { SetValue(value); return *this;}

    /**
     * <p>The CIS security filter value.</p>
     */
    inline CisSecurityLevelFilter& WithValue(CisSecurityLevel&& value) { SetValue(std::move(value)); return *this;}

  private:

    CisSecurityLevelComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    CisSecurityLevel m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
