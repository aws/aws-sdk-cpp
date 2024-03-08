/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/TagComparison.h>
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
   * <p>The tag filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/TagFilter">AWS
   * API Reference</a></p>
   */
  class TagFilter
  {
  public:
    AWS_INSPECTOR2_API TagFilter();
    AWS_INSPECTOR2_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag filter comparison value.</p>
     */
    inline const TagComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The tag filter comparison value.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The tag filter comparison value.</p>
     */
    inline void SetComparison(const TagComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The tag filter comparison value.</p>
     */
    inline void SetComparison(TagComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The tag filter comparison value.</p>
     */
    inline TagFilter& WithComparison(const TagComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The tag filter comparison value.</p>
     */
    inline TagFilter& WithComparison(TagComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The tag filter key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The tag filter key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The tag filter key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The tag filter key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The tag filter key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The tag filter key.</p>
     */
    inline TagFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The tag filter key.</p>
     */
    inline TagFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The tag filter key.</p>
     */
    inline TagFilter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The tag filter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The tag filter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The tag filter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The tag filter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The tag filter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The tag filter value.</p>
     */
    inline TagFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The tag filter value.</p>
     */
    inline TagFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The tag filter value.</p>
     */
    inline TagFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    TagComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
