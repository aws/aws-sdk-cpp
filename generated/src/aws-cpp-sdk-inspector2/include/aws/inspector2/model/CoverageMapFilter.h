/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CoverageMapComparison.h>
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
   * <p>Contains details of a coverage map filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CoverageMapFilter">AWS
   * API Reference</a></p>
   */
  class CoverageMapFilter
  {
  public:
    AWS_INSPECTOR2_API CoverageMapFilter();
    AWS_INSPECTOR2_API CoverageMapFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CoverageMapFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to compare coverage on.</p>
     */
    inline const CoverageMapComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The operator to compare coverage on.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The operator to compare coverage on.</p>
     */
    inline void SetComparison(const CoverageMapComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The operator to compare coverage on.</p>
     */
    inline void SetComparison(CoverageMapComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The operator to compare coverage on.</p>
     */
    inline CoverageMapFilter& WithComparison(const CoverageMapComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The operator to compare coverage on.</p>
     */
    inline CoverageMapFilter& WithComparison(CoverageMapComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The tag key associated with the coverage map filter.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The tag key associated with the coverage map filter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The tag key associated with the coverage map filter.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The tag key associated with the coverage map filter.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The tag key associated with the coverage map filter.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The tag key associated with the coverage map filter.</p>
     */
    inline CoverageMapFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The tag key associated with the coverage map filter.</p>
     */
    inline CoverageMapFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The tag key associated with the coverage map filter.</p>
     */
    inline CoverageMapFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The tag value associated with the coverage map filter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The tag value associated with the coverage map filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The tag value associated with the coverage map filter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The tag value associated with the coverage map filter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The tag value associated with the coverage map filter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The tag value associated with the coverage map filter.</p>
     */
    inline CoverageMapFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The tag value associated with the coverage map filter.</p>
     */
    inline CoverageMapFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The tag value associated with the coverage map filter.</p>
     */
    inline CoverageMapFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    CoverageMapComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
