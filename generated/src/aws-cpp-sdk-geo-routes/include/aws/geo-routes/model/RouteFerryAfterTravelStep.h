﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteFerryAfterTravelStepType.h>
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
   * <p>Steps of a leg that must be performed after the travel portion of the
   * leg.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerryAfterTravelStep">AWS
   * API Reference</a></p>
   */
  class RouteFerryAfterTravelStep
  {
  public:
    AWS_GEOROUTES_API RouteFerryAfterTravelStep() = default;
    AWS_GEOROUTES_API RouteFerryAfterTravelStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryAfterTravelStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration of the step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteFerryAfterTravelStep& WithDuration(long long value) { SetDuration(value); return *this;}
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
    RouteFerryAfterTravelStep& WithInstruction(InstructionT&& value) { SetInstruction(std::forward<InstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the step.</p>
     */
    inline RouteFerryAfterTravelStepType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RouteFerryAfterTravelStepType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RouteFerryAfterTravelStep& WithType(RouteFerryAfterTravelStepType value) { SetType(value); return *this;}
    ///@}
  private:

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    RouteFerryAfterTravelStepType m_type{RouteFerryAfterTravelStepType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
