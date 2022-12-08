/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/RecommendationReportDetails.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetRecommendationReportDetailsResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetRecommendationReportDetailsResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetRecommendationReportDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetRecommendationReportDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the recommendation report generation task. See the response of
     * <a>StartRecommendationReportGeneration</a>. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the recommendation report generation task. See the response of
     * <a>StartRecommendationReportGeneration</a>. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p> The ID of the recommendation report generation task. See the response of
     * <a>StartRecommendationReportGeneration</a>. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p> The ID of the recommendation report generation task. See the response of
     * <a>StartRecommendationReportGeneration</a>. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p> The ID of the recommendation report generation task. See the response of
     * <a>StartRecommendationReportGeneration</a>. </p>
     */
    inline GetRecommendationReportDetailsResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the recommendation report generation task. See the response of
     * <a>StartRecommendationReportGeneration</a>. </p>
     */
    inline GetRecommendationReportDetailsResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the recommendation report generation task. See the response of
     * <a>StartRecommendationReportGeneration</a>. </p>
     */
    inline GetRecommendationReportDetailsResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> Detailed information about the recommendation report. </p>
     */
    inline const RecommendationReportDetails& GetRecommendationReportDetails() const{ return m_recommendationReportDetails; }

    /**
     * <p> Detailed information about the recommendation report. </p>
     */
    inline void SetRecommendationReportDetails(const RecommendationReportDetails& value) { m_recommendationReportDetails = value; }

    /**
     * <p> Detailed information about the recommendation report. </p>
     */
    inline void SetRecommendationReportDetails(RecommendationReportDetails&& value) { m_recommendationReportDetails = std::move(value); }

    /**
     * <p> Detailed information about the recommendation report. </p>
     */
    inline GetRecommendationReportDetailsResult& WithRecommendationReportDetails(const RecommendationReportDetails& value) { SetRecommendationReportDetails(value); return *this;}

    /**
     * <p> Detailed information about the recommendation report. </p>
     */
    inline GetRecommendationReportDetailsResult& WithRecommendationReportDetails(RecommendationReportDetails&& value) { SetRecommendationReportDetails(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    RecommendationReportDetails m_recommendationReportDetails;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
