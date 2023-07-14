﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CoverageStringComparison.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains details of a coverage string filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CoverageStringFilter">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR2_API CoverageStringFilter
  {
  public:
    CoverageStringFilter();
    CoverageStringFilter(Aws::Utils::Json::JsonView jsonValue);
    CoverageStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to compare strings on.</p>
     */
    inline const CoverageStringComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The operator to compare strings on.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The operator to compare strings on.</p>
     */
    inline void SetComparison(const CoverageStringComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The operator to compare strings on.</p>
     */
    inline void SetComparison(CoverageStringComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The operator to compare strings on.</p>
     */
    inline CoverageStringFilter& WithComparison(const CoverageStringComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The operator to compare strings on.</p>
     */
    inline CoverageStringFilter& WithComparison(CoverageStringComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The value to compare strings on.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value to compare strings on.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to compare strings on.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to compare strings on.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to compare strings on.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value to compare strings on.</p>
     */
    inline CoverageStringFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value to compare strings on.</p>
     */
    inline CoverageStringFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value to compare strings on.</p>
     */
    inline CoverageStringFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    CoverageStringComparison m_comparison;
    bool m_comparisonHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
