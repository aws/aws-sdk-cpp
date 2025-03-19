/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DimensionValueOperator.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The dimension of a metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MetricDimension">AWS
   * API Reference</a></p>
   */
  class MetricDimension
  {
  public:
    AWS_IOT_API MetricDimension() = default;
    AWS_IOT_API MetricDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MetricDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the dimension.</p>
     */
    inline const Aws::String& GetDimensionName() const { return m_dimensionName; }
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }
    template<typename DimensionNameT = Aws::String>
    void SetDimensionName(DimensionNameT&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::forward<DimensionNameT>(value); }
    template<typename DimensionNameT = Aws::String>
    MetricDimension& WithDimensionName(DimensionNameT&& value) { SetDimensionName(std::forward<DimensionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how the <code>dimensionValues</code> of a dimension are interpreted.
     * For example, for dimension type TOPIC_FILTER, the <code>IN</code> operator, a
     * message will be counted only if its topic matches one of the topic filters. With
     * <code>NOT_IN</code> operator, a message will be counted only if it doesn't match
     * any of the topic filters. The operator is optional: if it's not provided (is
     * <code>null</code>), it will be interpreted as <code>IN</code>.</p>
     */
    inline DimensionValueOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(DimensionValueOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline MetricDimension& WithOperator(DimensionValueOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    DimensionValueOperator m_operator{DimensionValueOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
