/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ResourceStringComparison.h>
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
   * <p>A resource string filter for a software bill of materials
   * report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceStringFilter">AWS
   * API Reference</a></p>
   */
  class ResourceStringFilter
  {
  public:
    AWS_INSPECTOR2_API ResourceStringFilter();
    AWS_INSPECTOR2_API ResourceStringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter's comparison.</p>
     */
    inline const ResourceStringComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The filter's comparison.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The filter's comparison.</p>
     */
    inline void SetComparison(const ResourceStringComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The filter's comparison.</p>
     */
    inline void SetComparison(ResourceStringComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The filter's comparison.</p>
     */
    inline ResourceStringFilter& WithComparison(const ResourceStringComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The filter's comparison.</p>
     */
    inline ResourceStringFilter& WithComparison(ResourceStringComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The filter's value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The filter's value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The filter's value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter's value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The filter's value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The filter's value.</p>
     */
    inline ResourceStringFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The filter's value.</p>
     */
    inline ResourceStringFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The filter's value.</p>
     */
    inline ResourceStringFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ResourceStringComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
