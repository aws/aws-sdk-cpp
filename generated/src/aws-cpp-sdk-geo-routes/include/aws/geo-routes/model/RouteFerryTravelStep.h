/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteFerryTravelStepType.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Steps of a leg that must be performed during the travel portion of the
   * leg.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerryTravelStep">AWS
   * API Reference</a></p>
   */
  class RouteFerryTravelStep
  {
  public:
    AWS_GEOROUTES_API RouteFerryTravelStep() = default;
    AWS_GEOROUTES_API RouteFerryTravelStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryTravelStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Distance of the step.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline RouteFerryTravelStep& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteFerryTravelStep& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this step.</p>
     */
    inline int GetGeometryOffset() const { return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RouteFerryTravelStep& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Brief description of the step in the requested language.</p>  <p>Only
     * available when the TravelStepType is Default.</p> 
     */
    inline const Aws::String& GetInstruction() const { return m_instruction; }
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
    template<typename InstructionT = Aws::String>
    void SetInstruction(InstructionT&& value) { m_instructionHasBeenSet = true; m_instruction = std::forward<InstructionT>(value); }
    template<typename InstructionT = Aws::String>
    RouteFerryTravelStep& WithInstruction(InstructionT&& value) { SetInstruction(std::forward<InstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the step.</p>
     */
    inline RouteFerryTravelStepType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RouteFerryTravelStepType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RouteFerryTravelStep& WithType(RouteFerryTravelStepType value) { SetType(value); return *this;}
    ///@}
  private:

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    int m_geometryOffset{0};
    bool m_geometryOffsetHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    RouteFerryTravelStepType m_type{RouteFerryTravelStepType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
