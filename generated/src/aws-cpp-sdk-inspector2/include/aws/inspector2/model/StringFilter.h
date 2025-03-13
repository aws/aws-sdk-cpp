/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/StringComparison.h>
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
   * <p>An object that describes the details of a string filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/StringFilter">AWS
   * API Reference</a></p>
   */
  class StringFilter
  {
  public:
    AWS_INSPECTOR2_API StringFilter() = default;
    AWS_INSPECTOR2_API StringFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API StringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use when comparing values in the filter.</p>
     */
    inline StringComparison GetComparison() const { return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    inline void SetComparison(StringComparison value) { m_comparisonHasBeenSet = true; m_comparison = value; }
    inline StringFilter& WithComparison(StringComparison value) { SetComparison(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to filter on.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    StringFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    StringComparison m_comparison{StringComparison::NOT_SET};
    bool m_comparisonHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
