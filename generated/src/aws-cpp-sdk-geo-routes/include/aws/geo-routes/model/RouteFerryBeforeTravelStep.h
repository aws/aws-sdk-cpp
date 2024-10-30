/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteFerryBeforeTravelStepType.h>
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
   * <p>Steps of a leg that must be performed before the travel portion of the
   * leg.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteFerryBeforeTravelStep">AWS
   * API Reference</a></p>
   */
  class RouteFerryBeforeTravelStep
  {
  public:
    AWS_GEOROUTES_API RouteFerryBeforeTravelStep();
    AWS_GEOROUTES_API RouteFerryBeforeTravelStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteFerryBeforeTravelStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration of the step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RouteFerryBeforeTravelStep& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Brief description of the step in the requested language.</p>  <p>Only
     * available when the TravelStepType is Default.</p> 
     */
    inline const Aws::String& GetInstruction() const{ return m_instruction; }
    inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
    inline void SetInstruction(const Aws::String& value) { m_instructionHasBeenSet = true; m_instruction = value; }
    inline void SetInstruction(Aws::String&& value) { m_instructionHasBeenSet = true; m_instruction = std::move(value); }
    inline void SetInstruction(const char* value) { m_instructionHasBeenSet = true; m_instruction.assign(value); }
    inline RouteFerryBeforeTravelStep& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}
    inline RouteFerryBeforeTravelStep& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}
    inline RouteFerryBeforeTravelStep& WithInstruction(const char* value) { SetInstruction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the step.</p>
     */
    inline const RouteFerryBeforeTravelStepType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RouteFerryBeforeTravelStepType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RouteFerryBeforeTravelStepType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RouteFerryBeforeTravelStep& WithType(const RouteFerryBeforeTravelStepType& value) { SetType(value); return *this;}
    inline RouteFerryBeforeTravelStep& WithType(RouteFerryBeforeTravelStepType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    long long m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    RouteFerryBeforeTravelStepType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
