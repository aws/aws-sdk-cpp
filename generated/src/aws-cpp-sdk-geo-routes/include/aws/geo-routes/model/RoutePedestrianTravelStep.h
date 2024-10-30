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
    AWS_GEOROUTES_API RoutePedestrianTravelStep();
    AWS_GEOROUTES_API RoutePedestrianTravelStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RoutePedestrianTravelStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details related to the continue step.</p>
     */
    inline const RouteContinueStepDetails& GetContinueStepDetails() const{ return m_continueStepDetails; }
    inline bool ContinueStepDetailsHasBeenSet() const { return m_continueStepDetailsHasBeenSet; }
    inline void SetContinueStepDetails(const RouteContinueStepDetails& value) { m_continueStepDetailsHasBeenSet = true; m_continueStepDetails = value; }
    inline void SetContinueStepDetails(RouteContinueStepDetails&& value) { m_continueStepDetailsHasBeenSet = true; m_continueStepDetails = std::move(value); }
    inline RoutePedestrianTravelStep& WithContinueStepDetails(const RouteContinueStepDetails& value) { SetContinueStepDetails(value); return *this;}
    inline RoutePedestrianTravelStep& WithContinueStepDetails(RouteContinueStepDetails&& value) { SetContinueStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the current road. See RouteRoad for details of sub-attributes.</p>
     */
    inline const RouteRoad& GetCurrentRoad() const{ return m_currentRoad; }
    inline bool CurrentRoadHasBeenSet() const { return m_currentRoadHasBeenSet; }
    inline void SetCurrentRoad(const RouteRoad& value) { m_currentRoadHasBeenSet = true; m_currentRoad = value; }
    inline void SetCurrentRoad(RouteRoad&& value) { m_currentRoadHasBeenSet = true; m_currentRoad = std::move(value); }
    inline RoutePedestrianTravelStep& WithCurrentRoad(const RouteRoad& value) { SetCurrentRoad(value); return *this;}
    inline RoutePedestrianTravelStep& WithCurrentRoad(RouteRoad&& value) { SetCurrentRoad(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Distance of the step.</p>
     */
    inline long long GetDistance() const{ return m_distance; }
    inline bool DistanceHasBeenSet() const { return m_distanceHasBeenSet; }
    inline void SetDistance(long long value) { m_distanceHasBeenSet = true; m_distance = value; }
    inline RoutePedestrianTravelStep& WithDistance(long long value) { SetDistance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the step.</p> <p> <b>Unit</b>: <code>seconds</code> </p>
     */
    inline long long GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline RoutePedestrianTravelStep& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exit number of the road exit, if applicable.</p>
     */
    inline const Aws::Vector<LocalizedString>& GetExitNumber() const{ return m_exitNumber; }
    inline bool ExitNumberHasBeenSet() const { return m_exitNumberHasBeenSet; }
    inline void SetExitNumber(const Aws::Vector<LocalizedString>& value) { m_exitNumberHasBeenSet = true; m_exitNumber = value; }
    inline void SetExitNumber(Aws::Vector<LocalizedString>&& value) { m_exitNumberHasBeenSet = true; m_exitNumber = std::move(value); }
    inline RoutePedestrianTravelStep& WithExitNumber(const Aws::Vector<LocalizedString>& value) { SetExitNumber(value); return *this;}
    inline RoutePedestrianTravelStep& WithExitNumber(Aws::Vector<LocalizedString>&& value) { SetExitNumber(std::move(value)); return *this;}
    inline RoutePedestrianTravelStep& AddExitNumber(const LocalizedString& value) { m_exitNumberHasBeenSet = true; m_exitNumber.push_back(value); return *this; }
    inline RoutePedestrianTravelStep& AddExitNumber(LocalizedString&& value) { m_exitNumberHasBeenSet = true; m_exitNumber.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Offset in the leg geometry corresponding to the start of this step.</p>
     */
    inline int GetGeometryOffset() const{ return m_geometryOffset; }
    inline bool GeometryOffsetHasBeenSet() const { return m_geometryOffsetHasBeenSet; }
    inline void SetGeometryOffset(int value) { m_geometryOffsetHasBeenSet = true; m_geometryOffset = value; }
    inline RoutePedestrianTravelStep& WithGeometryOffset(int value) { SetGeometryOffset(value); return *this;}
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
    inline RoutePedestrianTravelStep& WithInstruction(const Aws::String& value) { SetInstruction(value); return *this;}
    inline RoutePedestrianTravelStep& WithInstruction(Aws::String&& value) { SetInstruction(std::move(value)); return *this;}
    inline RoutePedestrianTravelStep& WithInstruction(const char* value) { SetInstruction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a Keep step.</p>
     */
    inline const RouteKeepStepDetails& GetKeepStepDetails() const{ return m_keepStepDetails; }
    inline bool KeepStepDetailsHasBeenSet() const { return m_keepStepDetailsHasBeenSet; }
    inline void SetKeepStepDetails(const RouteKeepStepDetails& value) { m_keepStepDetailsHasBeenSet = true; m_keepStepDetails = value; }
    inline void SetKeepStepDetails(RouteKeepStepDetails&& value) { m_keepStepDetailsHasBeenSet = true; m_keepStepDetails = std::move(value); }
    inline RoutePedestrianTravelStep& WithKeepStepDetails(const RouteKeepStepDetails& value) { SetKeepStepDetails(value); return *this;}
    inline RoutePedestrianTravelStep& WithKeepStepDetails(RouteKeepStepDetails&& value) { SetKeepStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the next road. See RouteRoad for details of sub-attributes.</p>
     */
    inline const RouteRoad& GetNextRoad() const{ return m_nextRoad; }
    inline bool NextRoadHasBeenSet() const { return m_nextRoadHasBeenSet; }
    inline void SetNextRoad(const RouteRoad& value) { m_nextRoadHasBeenSet = true; m_nextRoad = value; }
    inline void SetNextRoad(RouteRoad&& value) { m_nextRoadHasBeenSet = true; m_nextRoad = std::move(value); }
    inline RoutePedestrianTravelStep& WithNextRoad(const RouteRoad& value) { SetNextRoad(value); return *this;}
    inline RoutePedestrianTravelStep& WithNextRoad(RouteRoad&& value) { SetNextRoad(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a Roundabout Enter step.</p>
     */
    inline const RouteRoundaboutEnterStepDetails& GetRoundaboutEnterStepDetails() const{ return m_roundaboutEnterStepDetails; }
    inline bool RoundaboutEnterStepDetailsHasBeenSet() const { return m_roundaboutEnterStepDetailsHasBeenSet; }
    inline void SetRoundaboutEnterStepDetails(const RouteRoundaboutEnterStepDetails& value) { m_roundaboutEnterStepDetailsHasBeenSet = true; m_roundaboutEnterStepDetails = value; }
    inline void SetRoundaboutEnterStepDetails(RouteRoundaboutEnterStepDetails&& value) { m_roundaboutEnterStepDetailsHasBeenSet = true; m_roundaboutEnterStepDetails = std::move(value); }
    inline RoutePedestrianTravelStep& WithRoundaboutEnterStepDetails(const RouteRoundaboutEnterStepDetails& value) { SetRoundaboutEnterStepDetails(value); return *this;}
    inline RoutePedestrianTravelStep& WithRoundaboutEnterStepDetails(RouteRoundaboutEnterStepDetails&& value) { SetRoundaboutEnterStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a Roundabout Exit step.</p>
     */
    inline const RouteRoundaboutExitStepDetails& GetRoundaboutExitStepDetails() const{ return m_roundaboutExitStepDetails; }
    inline bool RoundaboutExitStepDetailsHasBeenSet() const { return m_roundaboutExitStepDetailsHasBeenSet; }
    inline void SetRoundaboutExitStepDetails(const RouteRoundaboutExitStepDetails& value) { m_roundaboutExitStepDetailsHasBeenSet = true; m_roundaboutExitStepDetails = value; }
    inline void SetRoundaboutExitStepDetails(RouteRoundaboutExitStepDetails&& value) { m_roundaboutExitStepDetailsHasBeenSet = true; m_roundaboutExitStepDetails = std::move(value); }
    inline RoutePedestrianTravelStep& WithRoundaboutExitStepDetails(const RouteRoundaboutExitStepDetails& value) { SetRoundaboutExitStepDetails(value); return *this;}
    inline RoutePedestrianTravelStep& WithRoundaboutExitStepDetails(RouteRoundaboutExitStepDetails&& value) { SetRoundaboutExitStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a Roundabout Pass step.</p>
     */
    inline const RouteRoundaboutPassStepDetails& GetRoundaboutPassStepDetails() const{ return m_roundaboutPassStepDetails; }
    inline bool RoundaboutPassStepDetailsHasBeenSet() const { return m_roundaboutPassStepDetailsHasBeenSet; }
    inline void SetRoundaboutPassStepDetails(const RouteRoundaboutPassStepDetails& value) { m_roundaboutPassStepDetailsHasBeenSet = true; m_roundaboutPassStepDetails = value; }
    inline void SetRoundaboutPassStepDetails(RouteRoundaboutPassStepDetails&& value) { m_roundaboutPassStepDetailsHasBeenSet = true; m_roundaboutPassStepDetails = std::move(value); }
    inline RoutePedestrianTravelStep& WithRoundaboutPassStepDetails(const RouteRoundaboutPassStepDetails& value) { SetRoundaboutPassStepDetails(value); return *this;}
    inline RoutePedestrianTravelStep& WithRoundaboutPassStepDetails(RouteRoundaboutPassStepDetails&& value) { SetRoundaboutPassStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sign post information of the action, applicable only for TurnByTurn steps.
     * See RouteSignpost for details of sub-attributes.</p>
     */
    inline const RouteSignpost& GetSignpost() const{ return m_signpost; }
    inline bool SignpostHasBeenSet() const { return m_signpostHasBeenSet; }
    inline void SetSignpost(const RouteSignpost& value) { m_signpostHasBeenSet = true; m_signpost = value; }
    inline void SetSignpost(RouteSignpost&& value) { m_signpostHasBeenSet = true; m_signpost = std::move(value); }
    inline RoutePedestrianTravelStep& WithSignpost(const RouteSignpost& value) { SetSignpost(value); return *this;}
    inline RoutePedestrianTravelStep& WithSignpost(RouteSignpost&& value) { SetSignpost(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details that are specific to a turn step.</p>
     */
    inline const RouteTurnStepDetails& GetTurnStepDetails() const{ return m_turnStepDetails; }
    inline bool TurnStepDetailsHasBeenSet() const { return m_turnStepDetailsHasBeenSet; }
    inline void SetTurnStepDetails(const RouteTurnStepDetails& value) { m_turnStepDetailsHasBeenSet = true; m_turnStepDetails = value; }
    inline void SetTurnStepDetails(RouteTurnStepDetails&& value) { m_turnStepDetailsHasBeenSet = true; m_turnStepDetails = std::move(value); }
    inline RoutePedestrianTravelStep& WithTurnStepDetails(const RouteTurnStepDetails& value) { SetTurnStepDetails(value); return *this;}
    inline RoutePedestrianTravelStep& WithTurnStepDetails(RouteTurnStepDetails&& value) { SetTurnStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the step.</p>
     */
    inline const RoutePedestrianTravelStepType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RoutePedestrianTravelStepType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RoutePedestrianTravelStepType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline RoutePedestrianTravelStep& WithType(const RoutePedestrianTravelStepType& value) { SetType(value); return *this;}
    inline RoutePedestrianTravelStep& WithType(RoutePedestrianTravelStepType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    RouteContinueStepDetails m_continueStepDetails;
    bool m_continueStepDetailsHasBeenSet = false;

    RouteRoad m_currentRoad;
    bool m_currentRoadHasBeenSet = false;

    long long m_distance;
    bool m_distanceHasBeenSet = false;

    long long m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<LocalizedString> m_exitNumber;
    bool m_exitNumberHasBeenSet = false;

    int m_geometryOffset;
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

    RoutePedestrianTravelStepType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
