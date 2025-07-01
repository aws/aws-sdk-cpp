/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/TrainedModelArtifactMaxSizeUnitType.h>
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
   * <p>Specifies the maximum size limit for trained model artifacts. This
   * configuration helps control storage costs and ensures that trained models don't
   * exceed specified size constraints. The size limit applies to the total size of
   * all artifacts produced by the training job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/TrainedModelArtifactMaxSize">AWS
   * API Reference</a></p>
   */
  class TrainedModelArtifactMaxSize
  {
  public:
    AWS_CLEANROOMSML_API TrainedModelArtifactMaxSize() = default;
    AWS_CLEANROOMSML_API TrainedModelArtifactMaxSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API TrainedModelArtifactMaxSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unit of measurement for the maximum artifact size. Valid values include
     * common storage units such as bytes, kilobytes, megabytes, gigabytes, and
     * terabytes.</p>
     */
    inline TrainedModelArtifactMaxSizeUnitType GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(TrainedModelArtifactMaxSizeUnitType value) { m_unitHasBeenSet = true; m_unit = value; }
    inline TrainedModelArtifactMaxSize& WithUnit(TrainedModelArtifactMaxSizeUnitType value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numerical value for the maximum artifact size limit. This value is
     * interpreted according to the specified unit.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline TrainedModelArtifactMaxSize& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    TrainedModelArtifactMaxSizeUnitType m_unit{TrainedModelArtifactMaxSizeUnitType::NOT_SET};
    bool m_unitHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
