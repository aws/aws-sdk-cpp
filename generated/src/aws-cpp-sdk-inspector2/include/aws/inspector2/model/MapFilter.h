/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/MapComparison.h>
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
   * <p>An object that describes details of a map filter.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/MapFilter">AWS
   * API Reference</a></p>
   */
  class MapFilter
  {
  public:
    AWS_INSPECTOR2_API MapFilter() = default;
    AWS_INSPECTOR2_API MapFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API MapFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use when comparing values in the filter.</p>
     */
    inline MapComparison GetComparison() const { return m_comparison; }
    inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
    inline void SetComparison(MapComparison value) { m_comparisonHasBeenSet = true; m_comparison = value; }
    inline MapFilter& WithComparison(MapComparison value) { SetComparison(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag key used in the filter.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    MapFilter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value used in the filter.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    MapFilter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    MapComparison m_comparison{MapComparison::NOT_SET};
    bool m_comparisonHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
