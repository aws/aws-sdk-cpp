/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/TrainedModelExportsMaxSizeUnitType.h>
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
   * <p>The maximum size of the trained model metrics that can be exported. If the
   * trained model metrics dataset is larger than this value, it will not be
   * exported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TrainedModelExportsMaxSize">AWS
   * API Reference</a></p>
   */
  class TrainedModelExportsMaxSize
  {
  public:
    AWS_CLEANROOMSML_API TrainedModelExportsMaxSize() = default;
    AWS_CLEANROOMSML_API TrainedModelExportsMaxSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelExportsMaxSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unit of measurement for the data size.</p>
     */
    inline TrainedModelExportsMaxSizeUnitType GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(TrainedModelExportsMaxSizeUnitType value) { m_unitHasBeenSet = true; m_unit = value; }
    inline TrainedModelExportsMaxSize& WithUnit(TrainedModelExportsMaxSizeUnitType value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of the dataset to export.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline TrainedModelExportsMaxSize& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    TrainedModelExportsMaxSizeUnitType m_unit{TrainedModelExportsMaxSizeUnitType::NOT_SET};
    bool m_unitHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
