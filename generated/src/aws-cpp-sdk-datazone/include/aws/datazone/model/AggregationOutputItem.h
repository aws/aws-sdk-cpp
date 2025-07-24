/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>An aggregation output item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AggregationOutputItem">AWS
   * API Reference</a></p>
   */
  class AggregationOutputItem
  {
  public:
    AWS_DATAZONE_API AggregationOutputItem() = default;
    AWS_DATAZONE_API AggregationOutputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AggregationOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The count of the aggregation output item.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline AggregationOutputItem& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display value of the aggregation. If the attribute being aggregated
     * corresponds to the id of a public resource, the service automatically resolves
     * the id to the provided display value.</p>
     */
    inline const Aws::String& GetDisplayValue() const { return m_displayValue; }
    inline bool DisplayValueHasBeenSet() const { return m_displayValueHasBeenSet; }
    template<typename DisplayValueT = Aws::String>
    void SetDisplayValue(DisplayValueT&& value) { m_displayValueHasBeenSet = true; m_displayValue = std::forward<DisplayValueT>(value); }
    template<typename DisplayValueT = Aws::String>
    AggregationOutputItem& WithDisplayValue(DisplayValueT&& value) { SetDisplayValue(std::forward<DisplayValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute value of the aggregation output item.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AggregationOutputItem& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_displayValue;
    bool m_displayValueHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
