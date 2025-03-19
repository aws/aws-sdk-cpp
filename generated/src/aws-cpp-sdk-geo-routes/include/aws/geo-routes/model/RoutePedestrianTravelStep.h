/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteContinueStepDetails.h>
#include <aws/geo-routes/model/RouteRoad.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/geo-routes/model/RouteKeepStepDetails.h>
#include <aws/geo-routes/model/RouteRoundaboutEnterStepDetails.h>
#include <aws/geo-routes/model/RouteRoundaboutExitStepDetails.h>
#include <aws/geo-routes/model/RouteRoundaboutPassStepDetails.h>
#include <aws/geo-routes/model/RouteSignpost.h>
#include <aws/geo-routes/model/RouteTurnStepDetails.h>
#include <aws/geo-routes/model/RoutePedestrianTravelStepType.h>
#include <aws/geo-routes/model/LocalizedString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RoutePedestrianTravelStep">AWS
   * API Reference</a></p>
   */
  class RoutePedestrianTravelStep
  {
  public:
    AWS_GEOROUTES_API RoutePedestrianTravelStep() = default;
    AWS_GEOROUTES_API RoutePedestrianTravelStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianTravelStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details related to the continue step.</p>
     */
    inline const RouteContinueStepDetails& GetContinueStepDetails() const { return m_continueStepDetails; }
    inline bool ContinueStepDetailsHasBeenSet() const { return m_continueStepDetailsHasBeenSet; }
    template<typename ContinueStepDetailsT = RouteContinueStepDetails>
    void SetContinueStepDetails(ContinueStepDetailsT&& value) { m_continueStepDetailsHasBeenSet = true; m_continueStepDetails = std::forward<ContinueStepDetailsT>(value); }
    template<typename ContinueStepDetailsT = RouteContinueStepDetails>
    RoutePedestrianTravelStep& WithContinueStepDetails(ContinueStepDetailsT&& value) { SetContinueStepDetails(std::forward<ContinueStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the current road. See RouteRoad for details of sub-attributes.</p>
     */
    inline const RouteRoad& GetCurrentRoad() const { return m_currentRoad; }
    inline bool CurrentRoadHasBeenSet() const { return m_currentRoadHasBeenSet; }
    template<typename CurrentRoadT = RouteRoad>
    void SetCurrentRoad(CurrentRoadT&& value) { m_currentRoadHasBeenSet = true; m_currentRoad = std::forward<CurrentRoadT>(value); }
    template<typename CurrentRoadT = RouteRoad>
    RoutePedestrianTravelStep& WithCurrentRoad(CurrentRoadT&& value) { SetCurrentRoad(std::forward<CurrentRoadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Distance of the step.</p>
     */
    inline long long GetDistance() const { return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline RoutePedestrianTravelStep& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RoutePedestrianTravelStep& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exit number of the road exit, if applicable.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetExitNumber() const { return m_exitNumber; }
    inline bool ExitNumberHasBeenSet() const { return m_exitNumberHasBeenSet; }
    template<typename ExitNumberT = Aws::Vector<LocalizedString>>
    void SetExitNumber(ExitNumberT&& value) { m_exitNumberHasBeenSet = true; m_exitNumber = std::forward<ExitNumberT>(value); }
    template<typename ExitNumberT = Aws::Vector<LocalizedString>>
    RoutePedestrianTravelStep& WithExitNumber(ExitNumberT&& value) { SetExitNumber(std::forward<ExitNumberT>(value)); return *this;}
    template<typename ExitNumberT = LocalizedString>
    RoutePedestrianTravelStep& AddExitNumber(ExitNumberT&& value) { m_exitNumberHasBeenSet = true; m_exitNumber.emplace_back(std::forward<ExitNumberT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this step.</p>
     */
    inline int GetGeometryOffset() const { return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RoutePedestrianTravelStep& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
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
    RoutePedestrianTravelStep& WithInstruction(InstructionT&& value) { SetInstruction(std::forward<InstructionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a Keep step.</p>
     */
    inline const RouteKeepStepDetails& GetKeepStepDetails() const { return m_keepStepDetails; }
    inline bool KeepStepDetailsHasBeenSet() const { return m_keepStepDetailsHasBeenSet; }
    template<typename KeepStepDetailsT = RouteKeepStepDetails>
    void SetKeepStepDetails(KeepStepDetailsT&& value) { m_keepStepDetailsHasBeenSet = true; m_keepStepDetails = std::forward<KeepStepDetailsT>(value); }
    template<typename KeepStepDetailsT = RouteKeepStepDetails>
    RoutePedestrianTravelStep& WithKeepStepDetails(KeepStepDetailsT&& value) { SetKeepStepDetails(std::forward<KeepStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the next road. See RouteRoad for details of sub-attributes.</p>
     */
    inline const RouteRoad& GetNextRoad() const { return m_nextRoad; }
    inline bool NextRoadHasBeenSet() const { return m_nextRoadHasBeenSet; }
    template<typename NextRoadT = RouteRoad>
    void SetNextRoad(NextRoadT&& value) { m_nextRoadHasBeenSet = true; m_nextRoad = std::forward<NextRoadT>(value); }
    template<typename NextRoadT = RouteRoad>
    RoutePedestrianTravelStep& WithNextRoad(NextRoadT&& value) { SetNextRoad(std::forward<NextRoadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a Roundabout Enter step.</p>
     */
    inline const RouteRoundaboutEnterStepDetails& GetRoundaboutEnterStepDetails() const { return m_roundaboutEnterStepDetails; }
    inline bool RoundaboutEnterStepDetailsHasBeenSet() const { return m_roundaboutEnterStepDetailsHasBeenSet; }
    template<typename RoundaboutEnterStepDetailsT = RouteRoundaboutEnterStepDetails>
    void SetRoundaboutEnterStepDetails(RoundaboutEnterStepDetailsT&& value) { m_roundaboutEnterStepDetailsHasBeenSet = true; m_roundaboutEnterStepDetails = std::forward<RoundaboutEnterStepDetailsT>(value); }
    template<typename RoundaboutEnterStepDetailsT = RouteRoundaboutEnterStepDetails>
    RoutePedestrianTravelStep& WithRoundaboutEnterStepDetails(RoundaboutEnterStepDetailsT&& value) { SetRoundaboutEnterStepDetails(std::forward<RoundaboutEnterStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a Roundabout Exit step.</p>
     */
    inline const RouteRoundaboutExitStepDetails& GetRoundaboutExitStepDetails() const { return m_roundaboutExitStepDetails; }
    inline bool RoundaboutExitStepDetailsHasBeenSet() const { return m_roundaboutExitStepDetailsHasBeenSet; }
    template<typename RoundaboutExitStepDetailsT = RouteRoundaboutExitStepDetails>
    void SetRoundaboutExitStepDetails(RoundaboutExitStepDetailsT&& value) { m_roundaboutExitStepDetailsHasBeenSet = true; m_roundaboutExitStepDetails = std::forward<RoundaboutExitStepDetailsT>(value); }
    template<typename RoundaboutExitStepDetailsT = RouteRoundaboutExitStepDetails>
    RoutePedestrianTravelStep& WithRoundaboutExitStepDetails(RoundaboutExitStepDetailsT&& value) { SetRoundaboutExitStepDetails(std::forward<RoundaboutExitStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a Roundabout Pass step.</p>
     */
    inline const RouteRoundaboutPassStepDetails& GetRoundaboutPassStepDetails() const { return m_roundaboutPassStepDetails; }
    inline bool RoundaboutPassStepDetailsHasBeenSet() const { return m_roundaboutPassStepDetailsHasBeenSet; }
    template<typename RoundaboutPassStepDetailsT = RouteRoundaboutPassStepDetails>
    void SetRoundaboutPassStepDetails(RoundaboutPassStepDetailsT&& value) { m_roundaboutPassStepDetailsHasBeenSet = true; m_roundaboutPassStepDetails = std::forward<RoundaboutPassStepDetailsT>(value); }
    template<typename RoundaboutPassStepDetailsT = RouteRoundaboutPassStepDetails>
    RoutePedestrianTravelStep& WithRoundaboutPassStepDetails(RoundaboutPassStepDetailsT&& value) { SetRoundaboutPassStepDetails(std::forward<RoundaboutPassStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sign post information of the action, applicable only for TurnByTurn steps.
     * See RouteSignpost for details of sub-attributes.</p>
     */
    inline const RouteSignpost& GetSignpost() const { return m_signpost; }
    inline bool SignpostHasBeenSet() const { return m_signpostHasBeenSet; }
    template<typename SignpostT = RouteSignpost>
    void SetSignpost(SignpostT&& value) { m_signpostHasBeenSet = true; m_signpost = std::forward<SignpostT>(value); }
    template<typename SignpostT = RouteSignpost>
    RoutePedestrianTravelStep& WithSignpost(SignpostT&& value) { SetSignpost(std::forward<SignpostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a turn step.</p>
     */
    inline const RouteTurnStepDetails& GetTurnStepDetails() const { return m_turnStepDetails; }
    inline bool TurnStepDetailsHasBeenSet() const { return m_turnStepDetailsHasBeenSet; }
    template<typename TurnStepDetailsT = RouteTurnStepDetails>
    void SetTurnStepDetails(TurnStepDetailsT&& value) { m_turnStepDetailsHasBeenSet = true; m_turnStepDetails = std::forward<TurnStepDetailsT>(value); }
    template<typename TurnStepDetailsT = RouteTurnStepDetails>
    RoutePedestrianTravelStep& WithTurnStepDetails(TurnStepDetailsT&& value) { SetTurnStepDetails(std::forward<TurnStepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the step.</p>
     */
    inline RoutePedestrianTravelStepType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RoutePedestrianTravelStepType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RoutePedestrianTravelStep& WithType(RoutePedestrianTravelStepType value) { SetType(value); return *this;}
    ///@}
  private:

    RouteContinueStepDetails m_continueStepDetails;
    bool m_continueStepDetailsHasBeenSet = false;

    RouteRoad m_currentRoad;
    bool m_currentRoadHasBeenSet = false;

    long long m_distance{0};
    bool m_distanceHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::Vector<LocalizedString> m_exitNumber;
    bool m_exitNumberHasBeenSet = false;

    int m_geometryOffset{0};
    bool m_geometryOffsetHasBeenSet = false;

    Aws::String m_instruction;
    bool m_instructionHasBeenSet = false;

    RouteKeepStepDetails m_keepStepDetails;
    bool m_keepStepDetailsHasBeenSet = false;

    RouteRoad m_nextRoad;
    bool m_nextRoadHasBeenSet = false;

    RouteRoundaboutEnterStepDetails m_roundaboutEnterStepDetails;
    bool m_roundaboutEnterStepDetailsHasBeenSet = false;

    RouteRoundaboutExitStepDetails m_roundaboutExitStepDetails;
    bool m_roundaboutExitStepDetailsHasBeenSet = false;

    RouteRoundaboutPassStepDetails m_roundaboutPassStepDetails;
    bool m_roundaboutPassStepDetailsHasBeenSet = false;

    RouteSignpost m_signpost;
    bool m_signpostHasBeenSet = false;

    RouteTurnStepDetails m_turnStepDetails;
    bool m_turnStepDetailsHasBeenSet = false;

    RoutePedestrianTravelStepType m_type{RoutePedestrianTravelStepType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
