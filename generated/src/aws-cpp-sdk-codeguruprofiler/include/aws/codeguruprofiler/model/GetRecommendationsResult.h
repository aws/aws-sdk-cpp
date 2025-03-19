/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/Anomaly.h>
#include <aws/codeguruprofiler/model/Recommendation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the GetRecommendationsResponse.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/GetRecommendationsResponse">AWS
   * API Reference</a></p>
   */
  class GetRecommendationsResult
  {
  public:
    AWS_CODEGURUPROFILER_API GetRecommendationsResult() = default;
    AWS_CODEGURUPROFILER_API GetRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API GetRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of anomalies that the analysis has found for this profile. </p>
     */
    inline const Aws::Vector<Anomaly>& GetAnomalies() const { return m_anomalies; }
    template<typename AnomaliesT = Aws::Vector<Anomaly>>
    void SetAnomalies(AnomaliesT&& value) { m_anomaliesHasBeenSet = true; m_anomalies = std::forward<AnomaliesT>(value); }
    template<typename AnomaliesT = Aws::Vector<Anomaly>>
    GetRecommendationsResult& WithAnomalies(AnomaliesT&& value) { SetAnomalies(std::forward<AnomaliesT>(value)); return *this;}
    template<typename AnomaliesT = Anomaly>
    GetRecommendationsResult& AddAnomalies(AnomaliesT&& value) { m_anomaliesHasBeenSet = true; m_anomalies.emplace_back(std::forward<AnomaliesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The end time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetProfileEndTime() const { return m_profileEndTime; }
    template<typename ProfileEndTimeT = Aws::Utils::DateTime>
    void SetProfileEndTime(ProfileEndTimeT&& value) { m_profileEndTimeHasBeenSet = true; m_profileEndTime = std::forward<ProfileEndTimeT>(value); }
    template<typename ProfileEndTimeT = Aws::Utils::DateTime>
    GetRecommendationsResult& WithProfileEndTime(ProfileEndTimeT&& value) { SetProfileEndTime(std::forward<ProfileEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetProfileStartTime() const { return m_profileStartTime; }
    template<typename ProfileStartTimeT = Aws::Utils::DateTime>
    void SetProfileStartTime(ProfileStartTimeT&& value) { m_profileStartTimeHasBeenSet = true; m_profileStartTime = std::forward<ProfileStartTimeT>(value); }
    template<typename ProfileStartTimeT = Aws::Utils::DateTime>
    GetRecommendationsResult& WithProfileStartTime(ProfileStartTimeT&& value) { SetProfileStartTime(std::forward<ProfileStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group the analysis data is about.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const { return m_profilingGroupName; }
    template<typename ProfilingGroupNameT = Aws::String>
    void SetProfilingGroupName(ProfilingGroupNameT&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::forward<ProfilingGroupNameT>(value); }
    template<typename ProfilingGroupNameT = Aws::String>
    GetRecommendationsResult& WithProfilingGroupName(ProfilingGroupNameT&& value) { SetProfilingGroupName(std::forward<ProfilingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of recommendations that the analysis found for this profile.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    void SetRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::forward<RecommendationsT>(value); }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    GetRecommendationsResult& WithRecommendations(RecommendationsT&& value) { SetRecommendations(std::forward<RecommendationsT>(value)); return *this;}
    template<typename RecommendationsT = Recommendation>
    GetRecommendationsResult& AddRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations.emplace_back(std::forward<RecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Anomaly> m_anomalies;
    bool m_anomaliesHasBeenSet = false;

    Aws::Utils::DateTime m_profileEndTime{};
    bool m_profileEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_profileStartTime{};
    bool m_profileStartTimeHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
