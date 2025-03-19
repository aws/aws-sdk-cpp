/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/TrainedModelInferenceMaxOutputSizeUnitType.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Information about the maximum output size for a trained model inference
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TrainedModelInferenceMaxOutputSize">AWS
   * API Reference</a></p>
   */
  class TrainedModelInferenceMaxOutputSize
  {
  public:
    AWS_CLEANROOMSML_API TrainedModelInferenceMaxOutputSize() = default;
    AWS_CLEANROOMSML_API TrainedModelInferenceMaxOutputSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelInferenceMaxOutputSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The measurement unit to use.</p>
     */
    inline TrainedModelInferenceMaxOutputSizeUnitType GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(TrainedModelInferenceMaxOutputSizeUnitType value) { m_unitHasBeenSet = true; m_unit = value; }
    inline TrainedModelInferenceMaxOutputSize& WithUnit(TrainedModelInferenceMaxOutputSizeUnitType value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum output size value.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline TrainedModelInferenceMaxOutputSize& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    TrainedModelInferenceMaxOutputSizeUnitType m_unit{TrainedModelInferenceMaxOutputSizeUnitType::NOT_SET};
    bool m_unitHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
