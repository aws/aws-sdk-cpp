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
    AWS_CODEGURUPROFILER_API GetRecommendationsResult();
    AWS_CODEGURUPROFILER_API GetRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API GetRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of anomalies that the analysis has found for this profile. </p>
     */
    inline const Aws::Vector<Anomaly>& GetAnomalies() const{ return m_anomalies; }

    /**
     * <p> The list of anomalies that the analysis has found for this profile. </p>
     */
    inline void SetAnomalies(const Aws::Vector<Anomaly>& value) { m_anomalies = value; }

    /**
     * <p> The list of anomalies that the analysis has found for this profile. </p>
     */
    inline void SetAnomalies(Aws::Vector<Anomaly>&& value) { m_anomalies = std::move(value); }

    /**
     * <p> The list of anomalies that the analysis has found for this profile. </p>
     */
    inline GetRecommendationsResult& WithAnomalies(const Aws::Vector<Anomaly>& value) { SetAnomalies(value); return *this;}

    /**
     * <p> The list of anomalies that the analysis has found for this profile. </p>
     */
    inline GetRecommendationsResult& WithAnomalies(Aws::Vector<Anomaly>&& value) { SetAnomalies(std::move(value)); return *this;}

    /**
     * <p> The list of anomalies that the analysis has found for this profile. </p>
     */
    inline GetRecommendationsResult& AddAnomalies(const Anomaly& value) { m_anomalies.push_back(value); return *this; }

    /**
     * <p> The list of anomalies that the analysis has found for this profile. </p>
     */
    inline GetRecommendationsResult& AddAnomalies(Anomaly&& value) { m_anomalies.push_back(std::move(value)); return *this; }


    /**
     * <p> The end time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetProfileEndTime() const{ return m_profileEndTime; }

    /**
     * <p> The end time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetProfileEndTime(const Aws::Utils::DateTime& value) { m_profileEndTime = value; }

    /**
     * <p> The end time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetProfileEndTime(Aws::Utils::DateTime&& value) { m_profileEndTime = std::move(value); }

    /**
     * <p> The end time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline GetRecommendationsResult& WithProfileEndTime(const Aws::Utils::DateTime& value) { SetProfileEndTime(value); return *this;}

    /**
     * <p> The end time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline GetRecommendationsResult& WithProfileEndTime(Aws::Utils::DateTime&& value) { SetProfileEndTime(std::move(value)); return *this;}


    /**
     * <p> The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetProfileStartTime() const{ return m_profileStartTime; }

    /**
     * <p> The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetProfileStartTime(const Aws::Utils::DateTime& value) { m_profileStartTime = value; }

    /**
     * <p> The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetProfileStartTime(Aws::Utils::DateTime&& value) { m_profileStartTime = std::move(value); }

    /**
     * <p> The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline GetRecommendationsResult& WithProfileStartTime(const Aws::Utils::DateTime& value) { SetProfileStartTime(value); return *this;}

    /**
     * <p> The start time of the profile the analysis data is about. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline GetRecommendationsResult& WithProfileStartTime(Aws::Utils::DateTime&& value) { SetProfileStartTime(std::move(value)); return *this;}


    /**
     * <p>The name of the profiling group the analysis data is about.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p>The name of the profiling group the analysis data is about.</p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupName = value; }

    /**
     * <p>The name of the profiling group the analysis data is about.</p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupName = std::move(value); }

    /**
     * <p>The name of the profiling group the analysis data is about.</p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupName.assign(value); }

    /**
     * <p>The name of the profiling group the analysis data is about.</p>
     */
    inline GetRecommendationsResult& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p>The name of the profiling group the analysis data is about.</p>
     */
    inline GetRecommendationsResult& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group the analysis data is about.</p>
     */
    inline GetRecommendationsResult& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p>The list of recommendations that the analysis found for this profile.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>The list of recommendations that the analysis found for this profile.</p>
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendations = value; }

    /**
     * <p>The list of recommendations that the analysis found for this profile.</p>
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendations = std::move(value); }

    /**
     * <p>The list of recommendations that the analysis found for this profile.</p>
     */
    inline GetRecommendationsResult& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>The list of recommendations that the analysis found for this profile.</p>
     */
    inline GetRecommendationsResult& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>The list of recommendations that the analysis found for this profile.</p>
     */
    inline GetRecommendationsResult& AddRecommendations(const Recommendation& value) { m_recommendations.push_back(value); return *this; }

    /**
     * <p>The list of recommendations that the analysis found for this profile.</p>
     */
    inline GetRecommendationsResult& AddRecommendations(Recommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Anomaly> m_anomalies;

    Aws::Utils::DateTime m_profileEndTime;

    Aws::Utils::DateTime m_profileStartTime;

    Aws::String m_profilingGroupName;

    Aws::Vector<Recommendation> m_recommendations;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
