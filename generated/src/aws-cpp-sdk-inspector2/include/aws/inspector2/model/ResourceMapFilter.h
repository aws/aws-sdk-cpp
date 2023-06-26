/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ResourceMapComparison.h>
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
   * <p>A resource map filter for a software bill of material report.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceMapFilter">AWS
   * API Reference</a></p>
   */
  class ResourceMapFilter
  {
  public:
    AWS_INSPECTOR2_API ResourceMapFilter();
    AWS_INSPECTOR2_API ResourceMapFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceMapFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter's comparison.</p>
     */
    inline const ResourceMapComparison& GetComparison() const{ return m_comparison; }

    /**
     * <p>The filter's comparison.</p>
     */
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }

    /**
     * <p>The filter's comparison.</p>
     */
    inline void SetComparison(const ResourceMapComparison& value) { m_comparisonHasBeenSet = true; m_comparison = value; }

    /**
     * <p>The filter's comparison.</p>
     */
    inline void SetComparison(ResourceMapComparison&& value) { m_comparisonHasBeenSet = true; m_comparison = std::move(value); }

    /**
     * <p>The filter's comparison.</p>
     */
    inline ResourceMapFilter& WithComparison(const ResourceMapComparison& value) { SetComparison(value); return *this;}

    /**
     * <p>The filter's comparison.</p>
     */
    inline ResourceMapFilter& WithComparison(ResourceMapComparison&& value) { SetComparison(std::move(value)); return *this;}


    /**
     * <p>The filter's key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The filter's key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The filter's key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The filter's key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The filter's key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The filter's key.</p>
     */
    inline ResourceMapFilter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The filter's key.</p>
     */
    inline ResourceMapFilter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The filter's key.</p>
     */
    inline ResourceMapFilter& WithKey(const char* value) { SetKey(value); return *this;}


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
    inline ResourceMapFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The filter's value.</p>
     */
    inline ResourceMapFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The filter's value.</p>
     */
    inline ResourceMapFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ResourceMapComparison m_comparison;
    bool m_comparisonHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
