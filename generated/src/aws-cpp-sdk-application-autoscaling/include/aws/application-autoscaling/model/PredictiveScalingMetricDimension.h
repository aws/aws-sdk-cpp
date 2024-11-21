/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p> Describes the dimension of a metric. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/PredictiveScalingMetricDimension">AWS
   * API Reference</a></p>
   */
  class PredictiveScalingMetricDimension
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetricDimension();
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetricDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API PredictiveScalingMetricDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the dimension. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PredictiveScalingMetricDimension& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PredictiveScalingMetricDimension& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PredictiveScalingMetricDimension& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value of the dimension. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline PredictiveScalingMetricDimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline PredictiveScalingMetricDimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline PredictiveScalingMetricDimension& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
