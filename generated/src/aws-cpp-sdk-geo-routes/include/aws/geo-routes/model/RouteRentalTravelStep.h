/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteContinueStepDetails.h>
#include <aws/geo-routes/model/RouteExitStepDetails.h>
#include <aws/geo-routes/model/RouteKeepStepDetails.h>
#include <aws/geo-routes/model/RouteRampStepDetails.h>
#include <aws/geo-routes/model/RouteRentalTravelStepType.h>
#include <aws/geo-routes/model/RouteRoundaboutEnterStepDetails.h>
#include <aws/geo-routes/model/RouteRoundaboutExitStepDetails.h>
#include <aws/geo-routes/model/RouteRoundaboutPassStepDetails.h>
#include <aws/geo-routes/model/RouteTurnStepDetails.h>
#include <aws/geo-routes/model/RouteUTurnStepDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GeoRoutes {
namespace Model {

/**
 * <p>A step that must be performed during the travel portion of the
 * leg.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteRentalTravelStep">AWS
 * API Reference</a></p>
 */
class RouteRentalTravelStep {
 public:
  AWS_GEOROUTES_API RouteRentalTravelStep() = default;
  AWS_GEOROUTES_API RouteRentalTravelStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API RouteRentalTravelStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const RouteContinueStepDetails& GetContinueStepDetails() const { return m_continueStepDetails; }
  inline bool ContinueStepDetailsHasBeenSet() const { return m_continueStepDetailsHasBeenSet; }
  template <typename ContinueStepDetailsT = RouteContinueStepDetails>
  void SetContinueStepDetails(ContinueStepDetailsT&& value) {
    m_continueStepDetailsHasBeenSet = true;
    m_continueStepDetails = std::forward<ContinueStepDetailsT>(value);
  }
  template <typename ContinueStepDetailsT = RouteContinueStepDetails>
  RouteRentalTravelStep& WithContinueStepDetails(ContinueStepDetailsT&& value) {
    SetContinueStepDetails(std::forward<ContinueStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Distance of the step.</p> <p> <b>Unit</b>: <code>meters</code> </p>
   */
  inline long long GetDistance() const { return m_distance; }
  inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
  inline void SetDistance(long long value) {
    m_distanceHasBeenSet = true;
    m_distance = value;
  }
  inline RouteRentalTravelStep& WithDistance(long long value) {
    SetDistance(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Duration of the step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
   */
  inline long long GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(long long value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline RouteRentalTravelStep& WithDuration(long long value) {
    SetDuration(value);
    return *this;
  }
  ///@}

  ///@{

  inline const RouteExitStepDetails& GetExitStepDetails() const { return m_exitStepDetails; }
  inline bool ExitStepDetailsHasBeenSet() const { return m_exitStepDetailsHasBeenSet; }
  template <typename ExitStepDetailsT = RouteExitStepDetails>
  void SetExitStepDetails(ExitStepDetailsT&& value) {
    m_exitStepDetailsHasBeenSet = true;
    m_exitStepDetails = std::forward<ExitStepDetailsT>(value);
  }
  template <typename ExitStepDetailsT = RouteExitStepDetails>
  RouteRentalTravelStep& WithExitStepDetails(ExitStepDetailsT&& value) {
    SetExitStepDetails(std::forward<ExitStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Offset in the leg geometry corresponding to the start of this step.</p>
   */
  inline int GetGeometryOffset() const { return m_geometryOffset; }
  inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
  inline void SetGeometryOffset(int value) {
    m_geometryOffsetHasBeenSet = true;
    m_geometryOffset = value;
  }
  inline RouteRentalTravelStep& WithGeometryOffset(int value) {
    SetGeometryOffset(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Brief description of the step in the requested language.</p>
   */
  inline const Aws::String& GetInstruction() const { return m_instruction; }
  inline bool InstructionHasBeenSet() const { return m_instructionHasBeenSet; }
  template <typename InstructionT = Aws::String>
  void SetInstruction(InstructionT&& value) {
    m_instructionHasBeenSet = true;
    m_instruction = std::forward<InstructionT>(value);
  }
  template <typename InstructionT = Aws::String>
  RouteRentalTravelStep& WithInstruction(InstructionT&& value) {
    SetInstruction(std::forward<InstructionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouteKeepStepDetails& GetKeepStepDetails() const { return m_keepStepDetails; }
  inline bool KeepStepDetailsHasBeenSet() const { return m_keepStepDetailsHasBeenSet; }
  template <typename KeepStepDetailsT = RouteKeepStepDetails>
  void SetKeepStepDetails(KeepStepDetailsT&& value) {
    m_keepStepDetailsHasBeenSet = true;
    m_keepStepDetails = std::forward<KeepStepDetailsT>(value);
  }
  template <typename KeepStepDetailsT = RouteKeepStepDetails>
  RouteRentalTravelStep& WithKeepStepDetails(KeepStepDetailsT&& value) {
    SetKeepStepDetails(std::forward<KeepStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouteRampStepDetails& GetRampStepDetails() const { return m_rampStepDetails; }
  inline bool RampStepDetailsHasBeenSet() const { return m_rampStepDetailsHasBeenSet; }
  template <typename RampStepDetailsT = RouteRampStepDetails>
  void SetRampStepDetails(RampStepDetailsT&& value) {
    m_rampStepDetailsHasBeenSet = true;
    m_rampStepDetails = std::forward<RampStepDetailsT>(value);
  }
  template <typename RampStepDetailsT = RouteRampStepDetails>
  RouteRentalTravelStep& WithRampStepDetails(RampStepDetailsT&& value) {
    SetRampStepDetails(std::forward<RampStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouteRoundaboutEnterStepDetails& GetRoundaboutEnterStepDetails() const { return m_roundaboutEnterStepDetails; }
  inline bool RoundaboutEnterStepDetailsHasBeenSet() const { return m_roundaboutEnterStepDetailsHasBeenSet; }
  template <typename RoundaboutEnterStepDetailsT = RouteRoundaboutEnterStepDetails>
  void SetRoundaboutEnterStepDetails(RoundaboutEnterStepDetailsT&& value) {
    m_roundaboutEnterStepDetailsHasBeenSet = true;
    m_roundaboutEnterStepDetails = std::forward<RoundaboutEnterStepDetailsT>(value);
  }
  template <typename RoundaboutEnterStepDetailsT = RouteRoundaboutEnterStepDetails>
  RouteRentalTravelStep& WithRoundaboutEnterStepDetails(RoundaboutEnterStepDetailsT&& value) {
    SetRoundaboutEnterStepDetails(std::forward<RoundaboutEnterStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouteRoundaboutExitStepDetails& GetRoundaboutExitStepDetails() const { return m_roundaboutExitStepDetails; }
  inline bool RoundaboutExitStepDetailsHasBeenSet() const { return m_roundaboutExitStepDetailsHasBeenSet; }
  template <typename RoundaboutExitStepDetailsT = RouteRoundaboutExitStepDetails>
  void SetRoundaboutExitStepDetails(RoundaboutExitStepDetailsT&& value) {
    m_roundaboutExitStepDetailsHasBeenSet = true;
    m_roundaboutExitStepDetails = std::forward<RoundaboutExitStepDetailsT>(value);
  }
  template <typename RoundaboutExitStepDetailsT = RouteRoundaboutExitStepDetails>
  RouteRentalTravelStep& WithRoundaboutExitStepDetails(RoundaboutExitStepDetailsT&& value) {
    SetRoundaboutExitStepDetails(std::forward<RoundaboutExitStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouteRoundaboutPassStepDetails& GetRoundaboutPassStepDetails() const { return m_roundaboutPassStepDetails; }
  inline bool RoundaboutPassStepDetailsHasBeenSet() const { return m_roundaboutPassStepDetailsHasBeenSet; }
  template <typename RoundaboutPassStepDetailsT = RouteRoundaboutPassStepDetails>
  void SetRoundaboutPassStepDetails(RoundaboutPassStepDetailsT&& value) {
    m_roundaboutPassStepDetailsHasBeenSet = true;
    m_roundaboutPassStepDetails = std::forward<RoundaboutPassStepDetailsT>(value);
  }
  template <typename RoundaboutPassStepDetailsT = RouteRoundaboutPassStepDetails>
  RouteRentalTravelStep& WithRoundaboutPassStepDetails(RoundaboutPassStepDetailsT&& value) {
    SetRoundaboutPassStepDetails(std::forward<RoundaboutPassStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RouteTurnStepDetails& GetTurnStepDetails() const { return m_turnStepDetails; }
  inline bool TurnStepDetailsHasBeenSet() const { return m_turnStepDetailsHasBeenSet; }
  template <typename TurnStepDetailsT = RouteTurnStepDetails>
  void SetTurnStepDetails(TurnStepDetailsT&& value) {
    m_turnStepDetailsHasBeenSet = true;
    m_turnStepDetails = std::forward<TurnStepDetailsT>(value);
  }
  template <typename TurnStepDetailsT = RouteTurnStepDetails>
  RouteRentalTravelStep& WithTurnStepDetails(TurnStepDetailsT&& value) {
    SetTurnStepDetails(std::forward<TurnStepDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of the step.</p>
   */
  inline RouteRentalTravelStepType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(RouteRentalTravelStepType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline RouteRentalTravelStep& WithType(RouteRentalTravelStepType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const RouteUTurnStepDetails& GetUTurnStepDetails() const { return m_uTurnStepDetails; }
  inline bool UTurnStepDetailsHasBeenSet() const { return m_uTurnStepDetailsHasBeenSet; }
  template <typename UTurnStepDetailsT = RouteUTurnStepDetails>
  void SetUTurnStepDetails(UTurnStepDetailsT&& value) {
    m_uTurnStepDetailsHasBeenSet = true;
    m_uTurnStepDetails = std::forward<UTurnStepDetailsT>(value);
  }
  template <typename UTurnStepDetailsT = RouteUTurnStepDetails>
  RouteRentalTravelStep& WithUTurnStepDetails(UTurnStepDetailsT&& value) {
    SetUTurnStepDetails(std::forward<UTurnStepDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  RouteContinueStepDetails m_continueStepDetails;

  long long m_distance{0};

  long long m_duration{0};

  RouteExitStepDetails m_exitStepDetails;

  int m_geometryOffset{0};

  Aws::String m_instruction;

  RouteKeepStepDetails m_keepStepDetails;

  RouteRampStepDetails m_rampStepDetails;

  RouteRoundaboutEnterStepDetails m_roundaboutEnterStepDetails;

  RouteRoundaboutExitStepDetails m_roundaboutExitStepDetails;

  RouteRoundaboutPassStepDetails m_roundaboutPassStepDetails;

  RouteTurnStepDetails m_turnStepDetails;

  RouteRentalTravelStepType m_type{RouteRentalTravelStepType::NOT_SET};

  RouteUTurnStepDetails m_uTurnStepDetails;
  bool m_continueStepDetailsHasBeenSet = false;
  bool m_distanceHasBeenSet = false;
  bool m_durationHasBeenSet = false;
  bool m_exitStepDetailsHasBeenSet = false;
  bool m_geometryOffsetHasBeenSet = false;
  bool m_instructionHasBeenSet = false;
  bool m_keepStepDetailsHasBeenSet = false;
  bool m_rampStepDetailsHasBeenSet = false;
  bool m_roundaboutEnterStepDetailsHasBeenSet = false;
  bool m_roundaboutExitStepDetailsHasBeenSet = false;
  bool m_roundaboutPassStepDetailsHasBeenSet = false;
  bool m_turnStepDetailsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_uTurnStepDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
